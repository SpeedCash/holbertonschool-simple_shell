# Introduction

![Logo](https://cravero-consulting.com/wp-content/uploads/2023/12/simple_shell.jpg)

## Qu'est-ce que Shell
    • Shell est un interpréteur de ligne de commande offrant une interface utilisateur pour accéder aux services du système d'exploitation. Ce projet concerne le développement d'un programme shell de type sh (Bourne Shell), utilisé typiquement via un émulateur de terminal.

## À quoi ça sert
    • Le shell permet d'interpréter des commandes. Il intègre des fonctionnalités comme le contrôle de processus, la redirection d'entrée/sortie, et sert à écrire des programmes batch ou scripts. Les systèmes de type Unix ont tous au moins un interpréteur compatible avec le Bourne shell.

## Informations sur le Projet

## Tâches
    • Plusieurs tâches sont listées, de la création de README et manuel jusqu'à l'implémentation de diverses versions du shell.

## Environnement
    • OS : Ubuntu 20.04 LTS
    • Langage : C
    • Compilateur : gcc 9.3.0
    • Éditeur : VIM 8.1.2269
    • Contrôle de version : Git
    • Style : Betty style

## Exigences Générales
    • Utilisation des éditeurs vi, vim, emacs
    • Compilation sur Ubuntu 14.04 LTS avec gcc 4.8.4
    • Respect du style Betty, sans fuites de mémoire
    • Sortie identique à celle de sh (/bin/sh)

## Fonctions autorisées
    • Liste des fonctions autorisées comme execve, exit, fork, malloc, write, etc.

# Documentation

## Installation
    • Instructions pour cloner le dépôt, changer de répertoire, compiler, et exécuter le shell en mode interactif ou non-interactif.

## Tests
    • Exemple d'exécution et de sortie après compilation.

## Fichiers
    • Description et liens vers différents fichiers du projet, comme le manuel, les scripts, et les fichiers de code source.

## Flowchart
    • Image illustrant le diagramme de flux du projet.

     Démarrage du Shell : Initialisation de l'environnement.
     Affichage de l'invite de commande : En mode interactif, le shell affiche une invite.
     Lecture de la commande : Le shell lit la ligne de commande saisie par l'utilisateur.
     Analyse de la commande : Identification de la commande et des arguments.
     Exécution de la commande : Soit une commande intégrée, soit une commande externe.
     Gestion des résultats : Le shell gère les résultats ou les erreurs.
     Retour à l'invite de commande ou Terminaison du Shell : En mode interactif, retour à l'invite de commande, sinon terminaison du shell.

<<<<<<< HEAD
<img src="https://cravero-consulting.com/wp-content/uploads/2023/12/simple_shell_flowchart-scaled.jpg">
         <alt="Flowchart">
=======
![img](https://cravero-consulting.com/wp-content/uploads/2023/12/simple_shell_flowchart-scaled.jpg)
>>>>>>> 2d9d844b4b3bc585fb31ec3f6bf9da90158d8d17

## Authors

- [@Philippe MARCLAY](https://github.com/PhMLakeofGeneva)
- [@Thierry CRAVERO](https://github.com/SpeedCash)
