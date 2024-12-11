//
// Created by oussa on 20/11/2024.
//

#include "GaussianGenerator.h"
#include <cstdlib>
#include <ctime>
#include <cmath>


GaussianGenerator::GaussianGenerator(int seedValue, double mean, double stddev)
    : TimeSeriesGenerator(seedValue), mean(mean), stddev(stddev) {
    std::srand(seed);
}

std::vector<double> GaussianGenerator::generateTimeSeries(int size) {
    std::vector<double> series;
    for (int i = 0; i < size; ++i) {
        series.push_back(generateGaussianValue());
    }
    return series;
}

double GaussianGenerator::generateGaussianValue() const {
    double u1 = static_cast<double>(std::rand()) / RAND_MAX;
    double u2 = static_cast<double>(std::rand()) / RAND_MAX;
    double r = std::sqrt(-2.0 * std::log(u1));
    double theta = 2.0 * M_PI * u2;
    double z = r * std::cos(theta);

    return mean + stddev * z;
}

