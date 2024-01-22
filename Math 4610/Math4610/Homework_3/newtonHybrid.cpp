/*Blaine Pack
10/25/2019
Task 3.4*/

#include <functional>
#include <cstdlib>
#include <math.h>
#include <vector>
#include <iostream>

using namespace std;

double newton(std::function<double(double)> f,
  std::function<double(double)> fPrime,
  double x0, double tol, int maxiter){
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


double bisectShell(std::function<double(double)> g,
  std::function<double(double)> gPrime, double a,
  double b, double tol, int maxiter){
  double val, c, error, bitol=100*tol;
  val = g(a)*g(b);
  if(val >= 0.0){
    throw;
    cout<<"error"<<endl;
  }
  error = 1000.0*tol;
  int iter = 0;
  while (error>bitol && iter<maxiter){
    c= 0.5*(a+b);
    error=abs(g(c));
    if(error<=bitol)
      return newton(g, gPrime, c, tol, maxiter);
    else if((g(a)*g(c))<0)
      b=c;
    else
        a=c;
  }
}

double f(double x){
  return x*x-3;
}

double fPrime(double x){
  return 2*x;
}

int main(){
  cout<<"Using a Newton/bisection hybrid to approximate the square root of 3"<<endl;
  double ans = bisectShell( f, fPrime, 0, 3, .00001, 1000);
  cout<<"The function returns "<<ans<<endl;
  return 0;
}
