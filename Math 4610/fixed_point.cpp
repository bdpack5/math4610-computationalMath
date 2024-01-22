#include <functional>
#include <iostream>
#include <cstdlib>
/*
//attempt 1, has it's issues.
double fixedpt(std::function<double(double)> g, double x0, double tol, int maxiter){
  double error = 10*tol;
  double x1;
  int iter = 0;
  while (error>tol && iter<maxiter){
    x1= g(x0);
    error = abs(x1-x0);
    x0 = x1;
    iter++;
  }
  throw "error";
}
*/
//bisecting fixed point
double fixedpt(std::function<double(double)> g, double a,
  double b, double tol, int maxiter){
  double val, c, error;
  val = g(a)*g(b);
  if(val >= 0.0)
    throw;
  error = 10.0*tol;
  int iter = 0;
  while (error>tol && iter<maxiter){
    c= 0.5*(a+b);
    if(g(c)==0.0) return c;
    //if()
  }
}

int main(){

  return 0;
}
