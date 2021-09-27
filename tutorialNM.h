/*----------------------------------------------------------------\
@ Numerical Methods by Young-Keun Kim - Handong Global University

Author           : ±è½ÂÈ¯
Created          : 26-03-2018
Modified         : 23-09-2021
Language/ver     : C++ in MSVS2019

Description      : myNM.h
----------------------------------------------------------------*/


#ifndef		_MY_NM_H		// use either (#pragma once) or  (#ifndef ...#endif)
#define		_MY_NM_H


#include <iostream>
#include <string>
#include <fstream>


// Define a function that defines the target equation.
double myFunc(const double x);

// Return the dy/dx results for the input data. (truncation error: O(h^2))
void gradient1D(double x[], double y[], double dydx[], int m);

// Return the dy/dx results for the target equation. (truncation error: O(h^2))
void gradientFunc(double func(const double x), double x[], double dydx[], int m);

// Function callback
void func_call(double func(const double x), double xin);

// Prints 1D array
void printVec(double* _vec, int _row);

// Integration using rectangular method for discrete data inputs
double IntegrateRect(double x[], double y[], int m);

// Integration using trapezoidal method for discrete data inputs
double trapz(double x[], double y[], int m);

// Integration using Simpson1/3 method for function inputs
double integral(double func(const double x), double a, double b, int n);

// Integration using Simpson3/8 method for function inputs
double simpson38(double func(const double x), double a, double b, int n);

// Added new function
void displayArray(double xin[]);

// Added new function
void displayArrays(double xin[], double yin[]);

#endif