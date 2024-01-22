#include <functional>
#include <cstdlib>
#include <math.h>

double bisect (std::function<double(double)> f, double a, double b,double tol){
  if (f(a) == 0){
    return a;
  }
  if (f(b) == 0){
    return b;
  }
  if (f(a)*f(b)>0){
    throw "invalid bounds";
  }
  double k = log2((b-a)/tol) + 1;
  double c;
  for(int i=1; i<=k;i++){
    c= (b-a)/2;
    if (f(a)*f(c) <0){
      b=c;
    }
    else{
      a=c;
    }
    if(f(c)==0){
      return c;
    }
  }
  return c;
}

double newt(std::function<double(double)> f, std::function<double(double)> fPrime, double x0, double tol, int maxiter){
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
