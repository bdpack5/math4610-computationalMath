/*Blaine Pack
exponential derivative
10/4/2019
*/

#include <functional>
#include <math.h>
#include "BDPLib.h"
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

const double machineEps=maceps();


//disambiguating exp()
double exponential(double x){
  return exp(x);
}

double centralDiff(std::function<double(double)> f, double x, double h){
  double fPrime=0;
  fPrime = (f(x+h)-f(x-h))/((x+h)-(x-h));
  return fPrime;
}

int main(){
  double pi=atan(1)*4;
  double expected=exp(pi);
  double h=1;
  double deriv,abs,rel;
  cout<<"approximation    absolute error    relative error"<<endl;
  while(h>(2*machineEps)){
    deriv=centralDiff(exponential,pi,h);
    abs=abserr(expected,deriv);
    rel=relerr(expected,deriv);
    cout<<deriv<<"    "<<abs<<"    "<<rel<<endl;
  }
  return 0;
}
