/*
Blaine Pack
September 20, 2019
Homework 1, task 7
*/

#include <cstdlib>
#include <math.h>

using namespace std;

double relerr(double num, double approx){
  return abs((num-approx)/approx);
}
