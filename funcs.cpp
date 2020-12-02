#include "funcs.h"
#include <iostream>
using namespace std;
double MySum(double a, double b)
{
    return a + b;
}
double MySub(double a, double b)
{
	return a - b;
}
double MyMul(double a, double b)
{
    return a * b; 
}
double MyDiv(double a, double b)
{
	if (b != 0) {
		return a / b;
	}
 else 
	cout << "На ноль делить нельзя!!";

}