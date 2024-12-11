//
// Created by oussa on 20/11/2024.
//

#ifndef TIMESERIESGENERATOR_H
#define TIMESERIESGENERATOR_H
#include <vector>


class TimeSeriesGenerator {
protected:
    int seed;

public:
    TimeSeriesGenerator();
    TimeSeriesGenerator(int);
    virtual std::vector<double> generateTimeSeries(int size) = 0;
    static void printTimeSeries(const std::vector<double>& series);
};



#endif //TIMESERIESGENERATOR_H
