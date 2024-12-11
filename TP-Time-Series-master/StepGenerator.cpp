//
// Created by oussa on 11/12/2024.
//

#include "StepGenerator.h"
#include <cstdlib> // Pour std::rand
#include <ctime>   // Pour std::time

// Constructeur paramétré
StepGenerator::StepGenerator(int seedValue) : TimeSeriesGenerator(seedValue) {
    std::srand(seed);  // Initialisation du générateur aléatoire avec la graine
}

// Implémentation de la méthode virtuelle pour générer une série temporelle
std::vector<double> StepGenerator::generateTimeSeries(int size) {
    std::vector<double> series;
    double currentValue = 0.0;  // Le premier instant contient la valeur 0

    // Ajouter le premier élément (valeur initiale)
    series.push_back(currentValue);

    // Pour chaque instant suivant
    for (int i = 1; i < size; ++i) {
        if (std::rand() % 2 == 0) {
            // Avec une probabilité de 50%, on garde la valeur de l'instant précédent
            series.push_back(currentValue);
        } else {
            // Avec 50% de chance, on génère une nouvelle valeur entre 0 et 100
            currentValue = static_cast<double>(std::rand() % 101);  // Valeur aléatoire entre 0 et 100
            series.push_back(currentValue);
        }
    }

    return series;
}


