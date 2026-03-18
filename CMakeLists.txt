# CMakeList.txt : projet CMake pour FactoryMethod, incluez la source et définissez
# la logique spécifique au projet ici.
#
cmake_minimum_required (VERSION 3.10)

# Activez Rechargement à chaud pour les compilateurs MSVC si cela est pris en charge.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("FactoryMethod" VERSION "1.0.0" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE_FILE
	"./src/main.cpp" # Point d'entrée de l'application
	"./src/computer.cpp" 
	"./src/macos.cpp"
	"src/macosType.cpp"
	"src/windows.cpp"
	"src/windowsType.cpp"
	 "src/linux.cpp"
	 "src/linuxType.cpp"
)
# Ajoutez une source à l'exécutable de ce projet.
add_executable (FactoryMethod ${SOURCE_FILE} )

include_directories(FactoryMthod PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/inc)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET FactoryMethod PROPERTY CXX_STANDARD 20)
endif()

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
