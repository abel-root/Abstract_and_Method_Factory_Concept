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


## ABSTRACT FACTORY
### Description
	On utilise une abstract factory lorsqu'on veut créer des familles d'objets liés sans spécifier leurs classes concrètes.
### Quand l'utiliser:
	lorsque :
	- tu veux créer plusieurs objets liés entre eux,
	- tu veux que les objets d'une famille soient utilisés ensemble,
	- tu veux garantir la compatibilité entre objets,
	- tu changes toute une famille d’objets.

### Contient :
	- une classe produit qui représente l'objet complexe à construire, et qui est créé par les builders.
	- une classe abstraite (interface) pour créer des objets nommée builder: qui permet de construit le produit,
	- des classes concrètes qui implémentent l'interface builder pour créer des objets spécifiques,
	- une classe client qui utilise l'interface builder pour créer des objets sans connaître les classes concrètes.
	- une classe director qui utilise l'interface builder pour construire un objet étape par étape, en appelant les méthodes du builder dans un ordre spécifique.
	
	
	

-------------------------------------------------------

## BUILDER 
### Description
	On utilise un builder lorsqu'on veut construire un objet complexe étape par étape, en séparant la construction de sa représentation.
### Quand l'utiliser:
	lorsque :
	- tu veux construire un objet complexe,
	- tu veux séparer la construction de la représentation,
	- tu veux créer différentes représentations d'un même objet.