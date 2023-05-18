//
// Created by Legion on 5/15/2023.
//

#ifndef LAB_3_MYCLASS_H
#define LAB_3_MYCLASS_H
#include <iostream>
#include <cmath>

using namespace std;

class SinFunction{

private:
    double a;
    double b;


public:
    SinFunction();
    SinFunction(double a, double b);
    double calculate(double x);
    void printfunction(SinFunction* functions, double x, int ARRAY_SIZE);
    void printMax(SinFunction* functions, double x, int ARRAY_SIZE);

};





#endif //LAB_3_MYCLASS_H
