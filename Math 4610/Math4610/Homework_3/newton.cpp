/*Blaine Pack
10/22/2019
task 3-1
*/

#include <functional>
#include <cstdlib>
#include <math.h>
#include <iostream>

using namespace std;

double newton(std::function<double(double)> f, std::function<double(double)> fPrime, double x0, double tol, int maxiter){
  double error = 10*tol;
  int iter = 0;
  double x1;
  while(error>tol && iter<maxiter){
    iter++;
    x1=x0-f(x0)/fPrime(x0);
    error = abs(x1-x0);
    x0=x1;
  }
  return x1;
}

double f(double x){
  return x*x-3;
}

double fPrime(double x){
  return 2*x;
}

int main(){
  cout<<"Using Newton's method to approximate the square root of 3"<<endl;
  double ans = newton( f, fPrime, 2, .00001, 1000);
  cout<<"The function returns "<<ans<<endl;
  return 0;
}
