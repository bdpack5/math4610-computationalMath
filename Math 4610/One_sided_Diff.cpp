/*Blaine Pack
September 16, 2019
Math 4610, Tasksheet 1, Task 6
*/

#include <functional>
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

double oneSidedDiff(std::function<double(double)> f, double x){
  double h = 1.0;
  double fPrime;
  for (int i=1; i<=60; i++){
    fPrime = (f(x+h)-f(x-h))/((x+h)-(x-h));
    cout<<h<<"    "<<fPrime<<endl;
    h=h/2;
  }
  return 0;
}

double func(double x){
  return x*x*x+log(x);
}

int main(){
  oneSidedDiff(func, 3);
  return 0;
}
