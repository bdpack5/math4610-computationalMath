/*Blaine Pack
Task 2-3
10/12/2019
*/

#include <functional>
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

//all the digits of pi I'm confident in, without looking it up.
const double pi=3.1415926;

//function to use fixed point iteration on function g, starting at
//point x0.
double fixedpt(std::function<double(double)> g, double x0,
  double tol, int maxiter){
  double error = 10*tol;
  double x1;
  int iter = 0;
  while (error>tol && iter<maxiter){
    x1= g(x0);
    error = abs(x1-x0);
    if (error<=tol)
      return x1;
    x0 = x1;
    iter++;
  if(error<=tol){
    return x0;
  }
  else
  //error handling block;

    return 0;
}


//function for testing the fixed point above
double myFunc(double x){
  double denom = cosh(x)+x*x;
  return pi/denom;
}

//main function to test fixedpt.
int main(){
  double zero=fixedpt(myFunc, 1.1, (1.0/1000), 100);
  cout<<zero<<endl;
  return 0;
}
