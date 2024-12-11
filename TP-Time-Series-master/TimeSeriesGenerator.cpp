//
// Created by oussa on 20/11/2024.
//

#include "TimeSeriesGenerator.h"
#include <iostream>
using namespace std;

TimeSeriesGenerator::TimeSeriesGenerator() : seed(0) {}
TimeSeriesGenerator::TimeSeriesGenerator(int seedValue) : seed(seedValue) {}

static void printTimeSeries(const std::vector<double>& series) {
    for (double value : series) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}