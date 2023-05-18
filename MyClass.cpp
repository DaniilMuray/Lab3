//
// Created by Legion on 5/15/2023.
//

#include "MyClass.h"

    SinFunction::SinFunction() {
        a = 0.0;
        b = 0.0;
    }

    SinFunction::SinFunction(double a, double b) {
        this->a = a;
        this->b = b;
    }


    double SinFunction::calculate(double x) {
        return sin(a * x + b);
    }

    void SinFunction::printfunction(SinFunction *functions, double x, int ARRAY_SIZE) {
            double value;

            for(int i = 0; i < ARRAY_SIZE; i++){
                value = functions[i].calculate(x);
                cout << "\nNumber of function is " << i << ". Value of function is " << value << endl;
            }
    }


    void SinFunction::printMax(SinFunction* functions, double x, int ARRAY_SIZE) {
        double maxValue = functions[0].calculate(x);
        int maxIndex = 0;

        // Find the function with the maximum value at the given x
        for (int i = 1; i < ARRAY_SIZE; i++) {
            double value = functions[i].calculate(x);
            if (value > maxValue) {
                maxValue = value;
                maxIndex = i;
            }
        }

        std::cout << "\nThe function with the highest value at x = " << x << " is function " << maxIndex <<". Value of function is " << maxValue << std::endl;

        delete[] functions;
}

