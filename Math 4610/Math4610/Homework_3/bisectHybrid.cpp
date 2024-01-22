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

double newton(std::function<double(double)> f, std::function<double(double)>
  fPrime, double x0, double tol, int maxiter){
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

std::vector<double> multiRoots(std::function<double(double)> f, double a, double b){
    std::vector<double> intervals;
    //set up code for bracket roots=
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
  std::function<double(double)> fPrime, double a, double b, double tol, int maxiter){
    //cout<<"checking intervals.."<<endl;
    std::vector<double> intervals = multiRoots(f, a, b);
    //cout<<"intervals found!"<<endl;
    std::vector<double> rootArray;
    //cout<<"bisecting.."<<endl;
    for (int i=0; i<(intervals.size()-1); i++){
      //cout<<"attempt "<<i<<endl;
      rootArray.push_back (newton(f, fPrime, (intervals[i]+intervals[i+1]/2),
      tol, maxiter));
    }
    //cout<<"end of bisection.."<<endl;
    return rootArray;
  }

double f(double x){
  return sin(PI*x*x+3.7);
}

double fPrime(double x){
  return 2*PI*x*cos(PI*x*x+3.7);
}

int main(){
  //cout<<"starting program..."<<endl;  //used for error checking
  std::vector<double> roots;
  roots= (multiRootsMaster(f, fPrime, 1.1,6.83,0.0001, 100));
  for (int i=0; i<roots.size(); i++){
    cout<<roots[i]<<endl;
  }
  return 0;
}
