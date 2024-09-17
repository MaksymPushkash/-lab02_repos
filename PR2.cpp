// Lab_02.cpp
// < Пушкаш Максим >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 11

#include <iostream>
#include <cmath>  

using namespace std;

int main() 
{
    double alpha; 
    double z1, z2; 

    cout << "Введіть значення α (в радіанах): ";
    cin >> alpha;

    z1 = (1 - 2 * pow(sin(alpha), 2)) / (1 + sin(2 * alpha));

    // z2 = (1 - tan(alpha)) / (1 + tan(alpha));

    cout << "Значення z1: " << z1 << endl;
    cout << "Значення z2: " << z2 << endl;

    return 0;
}


