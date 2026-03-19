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

#set(PATTERN "Factory")
#set(PATTERN "Builder")
#set(PATTERN "Prototype")
set(PATTERN "Singleton")

set(SOURCE_FILE
	"./src/main.cpp" # Point d'entrée de l'application
	
)

if(PATTERN STREQUAL "Factory")
	list(APPEND SOURCE_FILE
	"./src/factory/computer.cpp" 
	"./src/factory/macos.cpp"
	"src/factory/macosType.cpp"
	"src/factory/windows.cpp"
	"src/factory/windowsType.cpp"
	 "src/factory/linux.cpp"
	 "src/factory/linuxType.cpp"
	)
	set(INC_DIR "./inc/factory")

elseif (PATTERN STREQUAL "Builder")
	list(APPEND SOURCE_FILE
		"./src/builder/computerB.cpp"
		"./src/builder/director.cpp"
		"./src/builder/macBuilder.cpp"
		"src/builder/linuxBuilder.cpp"
		"src/builder/windowsBuilder.cpp"
	)
	set(INC_DIR "./inc/builder")

elseif (PATTERN STREQUAL "Singleton")
	list(APPEND SOURCE_FILE
		"src/singleton/database.cpp"
	)
	set(INC_DIR "./inc/singleton")

elseif (PATTERN STREQUAL "Prototype")
	list(APPEND SOURCE_FILE
		 "src/prototype/computerP.cpp"
		 "src/prototype/macPrototype.cpp"
		 "src/prototype/winPrototype.cpp"
		 "src/prototype/linuxPrototype.cpp"
		 "src/prototype/RegistryPrototype.cpp"
	)
	set(INC_DIR "./inc/prototype")

endif()
# Ajoutez une source à l'exécutable de ce projet.
add_executable (FactoryMethod ${SOURCE_FILE}  )

if(INC_DIR)
	include_directories(FactoryMthod PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/inc/factory)
endif()

include_directories(FactoryMthod PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/inc)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET FactoryMethod PROPERTY CXX_STANDARD 20)
endif()

# TODO: Ajoutez des tests et installez des cibles si nécessaire.