/*Blaine Pack
10/25/2019
Task 3.7*/

#include <functional>
#include <cstdlib>
#include <math.h>
#include <vector>
#include <iostream>

using namespace std;

const double PI=3.14159265359;

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

std::vector<double> multiRoots(std::function<double(double)> f, double a, double b){
    std::vector<double> intervals;
    int numt=1000000 ;
    double dx= (b-a)/((double)numt);
    double xval=a;
    double fa=f(xval);
    intervals.push_back(xval);
    for (int i=0; i<numt; i++){
      xval=xval+dx;
      double fb = f(xval);
      if(fa*fb <0){
        intervals.push_back(xval);
        fa = f(xval);
      }
    }
    return intervals;
}

std::vector<double> multiRootsMaster(std::function<double(double)> f,
  double a, double b, double tol, int maxiter){
    std::vector<double> intervals = multiRoots(f, a, b);
    std::vector<double> rootArray;
    for (int i=0; i<(intervals.size()-1); i++){
      rootArray.push_back (secant(f, intervals[i], intervals[i+1], tol, maxiter, 100));
    }
    return rootArray;
  }

double f(double x){
  return sin(PI*x*x+3.7);
}

int main(){
  std::vector<double> roots;
  roots= (multiRootsMaster(f,1.1,6.83,0.0001, 100));
  for (int i=0; i<roots.size(); i++){
    cout<<roots[i]<<endl;
  }
  return 0;
}
