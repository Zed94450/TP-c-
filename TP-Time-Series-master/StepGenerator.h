//
// Created by oussa on 11/12/2024.
//

#ifndef STEPGENERATOR_H
#define STEPGENERATOR_H

#include "TimeSeriesGenerator.h"
#include <vector>
#include <cstdlib> // Pour std::rand

// Classe dérivée de TimeSeriesGenerator pour générer une série temporelle basée sur une fonction de saut
class StepGenerator : public TimeSeriesGenerator {
public:
    // Constructeur paramétré
    StepGenerator(int seedValue);

    // Implémentation de la méthode virtuelle pour générer une série temporelle
    std::vector<double> generateTimeSeries(int size) override;
};

#endif // STEPGENERATOR_H


