#include <iostream>

#include <iostream>
#include "GaussianGenerator.h"

int main() {
    // Création d'un générateur gaussien avec une graine de 42, une moyenne de 0 et un écart-type de 1
    GaussianGenerator generator(42, 0.0, 1.0);

    // Génération d'une série temporelle de 10 éléments
    std::vector<double> timeSeries = generator.generateTimeSeries(10);

    TimeSeriesGenerator::printTimeSeries(timeSeries);

    return 0;
}

