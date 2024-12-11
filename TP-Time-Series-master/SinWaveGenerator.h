//
// Created by oussa on 11/12/2024.
//

#ifndef SINWAVEGENERATOR_H
#define SINWAVEGENERATOR_H

#include "TimeSeriesGenerator.h"
#include <vector>
#include <cmath>  // Pour std::sin, std::pi

class SinWaveGenerator : public TimeSeriesGenerator {
private:
    double amplitude;  // Amplitude de la fonction sinus
    double frequency;  // Fréquence de la fonction sinus
    double phase;      // Phase initiale de la fonction sinus

public:
    // Constructeur paramétré
    SinWaveGenerator(int seedValue, double amplitude, double frequency, double phase);

    // Implémentation de la méthode virtuelle pour générer une série temporelle
    std::vector<double> generateTimeSeries(int size) override;
};

#endif // SINWAVEGENERATOR_H

