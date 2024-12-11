//
// Created by oussa on 11/12/2024.
//

#include "SinWaveGenerator.h"
#include <cstdlib>
#include <cmath>

SinWaveGenerator::SinWaveGenerator(int seedValue, double amplitude, double frequency, double phase)
    : TimeSeriesGenerator(seedValue), amplitude(amplitude), frequency(frequency), phase(phase) {
    std::srand(seed);  // Initialisation du générateur aléatoire avec la graine
}

std::vector<double> SinWaveGenerator::generateTimeSeries(int size) {
    std::vector<double> series;
    for (int i = 0; i < size; ++i) {
        double x = static_cast<double>(i);  // Utiliser l'index comme variable x
        double value = amplitude * std::sin(frequency * x + phase);
        series.push_back(value);
    }
    return series;
}

