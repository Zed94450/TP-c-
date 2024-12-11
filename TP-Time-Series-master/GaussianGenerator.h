#ifndef GAUSSIANGENERATOR_H
#define GAUSSIANGENERATOR_H

#include "TimeSeriesGenerator.h"
#include <vector>

class GaussianGenerator : public TimeSeriesGenerator {
private:
    double mean;
    double stddev;

public:
    GaussianGenerator(int seedValue, double mean = 0.0, double stddev = 1.0);

    std::vector<double> generateTimeSeries(int size) override;

    double generateGaussianValue() const;
};

#endif // GAUSSIANGENERATOR_H
