#ifndef TRAMWAY_H
#define TRAMWAY_H

class arret;
class ligne;

class tramway
{
    private:
        tramway(int vitesseMax, ligne* ligneDepart, arret* arretDepart);

        ligne* d_ligneAffectee; // Quel ligne est relié au tramway ? [Attention, c'est un pointeur]
        arret* d_prochainArret; // Quel est le prochain arret ? [Attention, c'est un pointeur]

        enum class sensCirculation {Aller, Retour};
        sensCirculation d_sensCirculation;

        int d_distanceMinSecurite; // En m, l'espace minimum entre deux trains à tout moment
    
        int d_distanceProchainArret; // En m, la distance avant le prochain arret

        int d_tempsPasseArret; // En s, le temps que un tramway à passé à l'arret

        const int d_vitesseMaximal; // En km/h, la vitesse maximal qu'un tramway peut atteindre

        int d_vitesseActuelle; // En km/h, la vitesse du train atm
                
        struct position // La position du train dans le plan, on le met la pour simplifier plus tard l'utilisation de QT
        {
            int x;
            int y;
        };

        position d_positionTramwway;

    public:

        void arreterTramway();

        void demarerTramway();

        void changerSensCirculation();

        void changerProchainArret(); // Pour changer le prochain arret dans la structure de données
};





#endif