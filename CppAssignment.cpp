// CppAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex cm1;
    Complex cm2(2.0, 3.0);
    cm1.setReal(22.0);
    cm1.setImaginary(3.0);
    cout << "cm1 = 22 + 3i \ncm2 = 2 + 3i" << endl;

    cout << "\nAddition:\n";
    cout << "cm3 = cm1 + cm2\n";
    Complex cm3 = cm1 + cm2;
    cout << "cm3 = " << cm3;
    
    cout << "\nSubstraction:\n";
    cout << "cm4 = cm1 - cm2\n";
    Complex cm4 = cm1 - cm2;
    cout << "cm4 = " << cm4;

    cout << "\nMultiplication:\n";
    cout << "cm5 = cm1 * cm2\n";
    Complex cm5 = cm1 * cm2;
    cout << "cm5 = " << cm5;

    cout << "\nEquality:\n";
    Complex cm6(2.0,4.0);
    cout << "cm6 = " << cm6;
    cout << "cm2 = " << cm2<<endl;
    cout << "cm6 = cm2\n";
    cm6 = cm2;
    cout <<"cm6 = "<< cm6;

    cout << "\nSelfAddition:\n";
    Complex cm7(1.0, 1.0);
    cout << "cm7 += cm2\n";
    cm7 += cm2;
    cout <<"cm7 = "<< cm7;

    cout << "\nSelfSubstraction:\n";
    Complex cm8(11.0, 10.0);
    cout << "cm8 -= cm2\n";
    cm8 -= cm2;
    cout <<"cm8 = "<< cm8;

    cout << "\nSelfMultiplication:\n";
    Complex cm9(2.0, 2.0);
    cout << "cm9 *= cm2\n";
    cm9 *= cm2;
    cout <<"cm9 = "<< cm9;




    //Complex cm7;
    //cout << "\nEnter a complex number (real first, then immaginary): ";
    //cin >> cm7;

    //cout << "cm7 = " << cm7;



}

