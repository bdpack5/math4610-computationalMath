/*Blaine Pack
task 2-4
*/

#include <functional>
#include <iostream>
#include <cstdlib>
#include <math.h>

double bisect(std::function<double(double)> g, double a,
  double b, double tol, int maxiter){
  double val, c, error;
  val = g(a)*g(b);
  if(val >= 0.0)
    throw;
  error = 10.0*tol;
  int iter = 0;
  while (error>tol && iter<maxiter){
    c= 0.5*(a+b);
    error=abs(g(c));
    if(error<=tol)
      return c;
    else if((g(a)*g(c))<0)
      b=c;
    else
        a=c;
  }
}

int main(){
  return 0;
}
