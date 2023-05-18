#include <iostream>
#include "MyClass.h"

using namespace std;


int main() {

    SinFunction sin;

    int ARRAY_SIZE;
    double a, b;
    cout << "Enter amount of functions: ";
    cin >> ARRAY_SIZE;
    SinFunction* functions = new SinFunction[ARRAY_SIZE];

    for(int i = 0; i < ARRAY_SIZE; i++){
        cout << "Enter arguments for function #" << i <<":";
        cin >> a >> b;
        functions[i] = SinFunction(a, b);

    }

    double x;
    cout << "Enter the value of x: ";
    cin >> x;

    sin.printfunction(functions, x, ARRAY_SIZE);
    sin.printMax(functions, x, ARRAY_SIZE);


    return 0;
}
