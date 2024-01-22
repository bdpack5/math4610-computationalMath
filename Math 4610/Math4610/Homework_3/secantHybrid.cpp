/*Blaine Pack
10/25/2019
Task 3.5*/

#include <functional>
#include <cstdlib>
#include <math.h>
#include <vector>
#include <iostream>

using namespace std;

double secant(std::function<double(double)>f, double x_0, double x_1, double tol,
    int countdown, double failstate){
    double x_2=x_1-f(x_0)*(x_1-x_0)/(f(x_1)-f(x_0));
    if(abs(x_2-x_1)<=tol){
      return x_2;
    }
    else if(countdown<=1){
      return failstate;
    }
    else
      return secant(f,x_1,x_2,tol, (countdown-1), failstate);
}

double bisectShell(std::function<double(double)> g, double a,
  double b, double tol, int maxiter,double failstate){
  double val, c, error, bitol=100*tol;
  val = g(a)*g(b);
  if(val >= 0.0)
    throw;
  error = 1000.0*tol;
  int iter = 0;
  while (error>bitol && iter<maxiter){
    c= 0.5*(a+b);
    error=abs(g(c));
    if(error<=bitol)
      return secant(g, c, c+tol, tol, maxiter,failstate);
    else if((g(a)*g(c))<0)
      b=c;
    else
      a=c;
  }
}

double f(double x){
  return x*x-612;
}

int main(){
  cout<<"finding a root of x^2-612"<<endl;
  double ans = bisectShell(f, 10, 30, .00001, 1000, 42);
  if(ans==42){
    cout<<"error reported."<<endl;
  }
  cout<<"the root is "<<ans<<endl;
  return 0;
}
