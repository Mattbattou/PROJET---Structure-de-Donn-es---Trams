#include "tramway.h"
#include "arret.h" 
#include "ligne.h" 


#include <iostream>

// --- CONSTRUCTEUR ---

tramway::tramway(int vitesseMax, ligne* ligneDepart, arret* arretDepart)
    : d_vitesseMaximal{vitesseMax}, 
      d_ligneAffectee{ligneDepart}, 
      d_prochainArret{arretDepart}
{
    // Initialisation des variables par défaut
    d_vitesseActuelle = 0; // Au début, le tram est à l'arrêt
    d_tempsPasseArret = 0;
    d_sensCirculation = sensCirculation::Aller;
    d_distanceMinSecurite = 50; // 50m par exemple
    
    // On initialise la position graphique sur l'arrêt de départ
    if (d_prochainArret != nullptr) {
        d_positionTramwway.x = d_prochainArret->getX(); // Supposons que Arret a getX()
        d_positionTramwway.y = d_prochainArret->getY(); // Supposons que Arret a getY()
    }

    // On calcule la distance initiale (hypothèse: on part du début de la ligne)
    // Pour simplifier ici, on met 0, la simulation gérera le prochain segment
    d_distanceProchainArret = 0; 
}

// --- GESTION DU MOUVEMENT ---

void tramway::arreterTramway()
{
    d_vitesseActuelle = 0;
}

void tramway::demarerTramway()
{
    d_vitesseActuelle = d_vitesseMaximal;
}

void tramway::changerSensCirculation()
{
    if (d_sensCirculation == sensCirculation::Aller) {
        d_sensCirculation = sensCirculation::Retour;
    } else {
        d_sensCirculation = sensCirculation::Aller;
    }
}

