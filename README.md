# DESIGN PATTERNS CREATIONNELS
## Introduction

Les design patterns créationnels sont des solutions réutilisables à des problèmes courants de création d'objets. 
Ils permettent de créer des objets de manière flexible et efficace, tout en cachant les détails de leur instanciation.


## METHOD FACTORY 
### Description
	On utilise une method factory lorsqu'on a un seul type de produit (objet) mais qu'on veut implementer plusieurs variantes de ce prduit.
### Quand l'utiliser:
	lorsque : 
	- une classe ne sait pas à l’avance quel objet créer,
	- tu veux déléguer la création aux sous-classes,
	- tu as un seul type de produit.
	- tu veux éviter les dépendances entre les clients et les classes concrètes,
	- tu veux fournir une interface pour créer des objets,
	- tu veux permettre la création d'objets sans connaître leur classe concrète,
	- tu veux faciliter l'ajout de nouvelles variantes de produits,
	- tu veux faciliter la maintenance du code en centralisant la création d'objets,
	- tu veux faciliter les tests en permettant de remplacer les classes concrètes par des mocks ou des stubs,


## ABSTRACT FACTORY
### Description
	On utilise une abstract factory lorsqu'on veut créer des familles d'objets liés sans spécifier leurs classes concrètes.
### Quand l'utiliser:
	lorsque :
	- tu veux créer plusieurs objets liés entre eux,
	- tu veux que les objets d'une famille soient utilisés ensemble,
	- tu veux garantir la compatibilité entre objets,
	- tu changes toute une famille d’objets.
	- tu veux éviter les dépendances entre les clients et les classes concrètes,
	- tu veux fournir une interface pour créer des familles d'objets,
	- tu veux permettre la création d'objets sans connaître leur classe concrète,
	- tu veux faciliter l'ajout de nouvelles familles d'objets,
	- tu veux faciliter la maintenance du code en centralisant la création d'objets,
	- tu veux faciliter les tests en permettant de remplacer les familles d'objets par des mocks ou des stubs,



-------------------------------------------------------

## BUILDER 
### Description
	On utilise un builder lorsqu'on veut construire un objet complexe étape par étape, en séparant la construction de sa représentation.
### Quand l'utiliser:
	lorsque :
	- tu veux construire un objet complexe étape par étape,
	- tu veux séparer la construction de la représentation,
	- tu veux créer différentes représentations d'un même objet.
	- tu veux éviter les constructeurs avec de nombreux paramètres (>3).
	- tu veux rendre le code plus lisible et maintenable.
	- tu veux éviter les erreurs de construction d'objets complexes.
	- tu veux permettre la création d'objets immuables.
	- tu veux faciliter la création d'objets avec des configurations différentes.
	- tu veux permettre la création d'objets avec des étapes de construction différentes.
	- tu veux permettre la création d'objets avec des dépendances complexes.
	- tu veux permettre la création d'objets avec des paramètres optionnels.
	- tu veux permettre la création d'objets avec des paramètres par défaut.
	- tu veux permettre la création d'objets avec des paramètres de configuration.
	- tu veux permettre la création d'objets avec des paramètres de validation.
	- tu veux permettre la création d'objets avec des paramètres de personnalisation.
	- tu veux permettre la création d'objets avec des paramètres de sécurité.
	- tu veux permettre la création d'objets avec des paramètres de performance.
	- tu veux permettre la création d'objets avec des paramètres de testabilité.
	- tu veux permettre la création d'objets avec des paramètres de maintenabilité.
	- tu veux permettre la création d'objets avec des paramètres de flexibilité.
	- tu as une logique de construction de l'objet
	
### Contient :
	- une classe produit qui représente l'objet complexe à construire, et qui est créé par les builders.
	- une classe abstraite (interface) pour créer des objets nommée builder: qui permet de construit le produit,
	- des classes concrètes qui implémentent l'interface builder pour créer des objets spécifiques,
	- une classe client qui utilise l'interface builder pour créer des objets sans connaître les classes concrètes.
	- une classe director qui utilise l'interface builder pour construire un objet étape par étape, en appelant les méthodes du builder dans un ordre spécifique.

	> *NB* : Le Builder est partuculièrement utile lorsqu' un objet possède beaucoup d’attributs ou plusieurs étapes de construction.
	

	--------------------------------------------------------------------------------------------
## PROTOTYPE
### Description
	On utilise un prototype lorsqu'on veut créer de nouveaux objets en copiant des objets existants, sans connaître leur classe concrète.
### Quand l'utiliser:
	lorsque :
	- tu veux créer de nouveaux objets en copiant des objets existants,
	- tu ne veux pas connaître la classe concrète des objets à créer,
	- tu veux éviter les coûts de création d'objets complexes,
	- tu veux permettre la création d'objets à partir de prototypes,
	- tu veux permettre la création d'objets à partir de prototypes avec des configurations différentes,
	- tu veux permettre la création d'objets à partir de prototypes avec des étapes de construction différentes,
	- tu veux permettre la création d'objets à partir de prototypes avec des dépendances complexes,
	- tu veux permettre la création d'objets à partir de prototypes avec des paramètres optionnels,
	- tu veux permettre la création d'objets à partir de prototypes avec des paramètres par défaut,

### Contient :
	- une classe prototype qui représente l'objet à copier, et qui est clonable,
	- une classe client qui utilise la classe prototype pour créer de nouveaux objets en copiant des objets existants, sans connaître leur classe concrète.
	- une classe registry qui stocke les prototypes disponibles et permet de les récupérer pour les copier.
	- une classe concrete prototype qui implémente la classe prototype pour créer des objets spécifiques.
	