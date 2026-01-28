# 🚋 Simulation de Gestion d'un Réseau de Tramways
Ce projet a pour objectif de développer un programme simulant un réseau de tramways de la manière la plus réaliste possible, incluant la modélisation du réseau, la simulation des déplacements et une visualisation graphique.

## 📋 Description du Projet
L'application permet de charger, simuler et visualiser un réseau de transport en commun complexe. Le projet se divise en trois axes principaux :


Modélisation : Gestion des lignes, des arrêts et des tramways via des structures de données spécifiques.


Simulation : Gestion du trafic en temps réel (déplacements, arrêts, vitesse).


Visualisation : Affichage graphique 2D de l'état du réseau.

## ✨ Fonctionnalités Principales

Configuration flexible : Chargement des données du réseau (lignes, arrêts, distances) à partir de fichiers externes modifiables.

Simulation réaliste :

Mise à jour par intervalles de 1 seconde.

Gestion des vitesses (max ou nulle) et temps d'arrêt obligatoires.

Respect des règles de sécurité : distance minimale entre rames et interdiction de dépassement.

Gestion des terminus (changement de sens).

Interface Graphique (GUI) :

Visualisation en temps réel avec la bibliothèque Qt.

Représentation des voies (segments) et des tramways (carrés mobiles).

## 🛠️ Contraintes Techniques

Langage & Outils : C++ (implémentation de classes), Visual Studio ou Code::Blocks.

Structures de données : Utilisation obligatoire de listes chaînées, ainsi que tableaux dynamiques, piles et files.

Gestion mémoire : Allocation et libération dynamique des pointeurs optimisée.

Bibliothèques :

- Qt pour l'affichage graphique.

- windows.h et time.h pour la gestion du temps.

## 👥 Auteurs
Projet réalisé par une équipe de 4 étudiants dans le cadre du module "Structures de Données".