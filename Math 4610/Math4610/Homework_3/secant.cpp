/*Blaine Pack
10/25/2019
Task 3.2*/

#include <functional>
#include <cstdlib>
#include <math.h>
#include <iostream>

using namespace std;

//The secant method for finding roots.
//I decided to try a recursive approach,
double secant(std::function<double(double)>f, double x_0, double x_1, double tol,
    int countdown, double failstate){
    double num = x_1-x_0;
    double den = f(x_1)-f(x_0);
    double x_2=x_1-f(x_1)*num/den;
    cout<<x_2<<endl;
    if(abs(x_2-x_1)<=tol){
      return x_2;
    }
    else if(countdown<=1){
      return failstate;
    }
    else
      return secant(f,x_1,x_2,tol, (countdown-1), failstate);
}

double f(double x){
  return x*x-612;
}

int main(){
  cout<<"finding a root of x^2-612"<<endl;
  double ans = secant(f, 10, 30, .00001, 1000, 42);
  if(ans==42){
    cout<<"error reported."<<endl;
  }
  cout<<"the root is "<<ans<<endl;
  return 0;
}
