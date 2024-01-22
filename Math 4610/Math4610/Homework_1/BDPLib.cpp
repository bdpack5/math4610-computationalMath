/*Blaine Pack
Shared Library BDPLib.cpp
10/4/2019
*/

#include <cstdlib>
#include <math.h>
//#include <iostream>

using namespace std;

double maceps(){
    double epsilon = 1.0;
    double one = 1.0;
    double epsCheck;
    double diff;
    for (int i=1; i<=1000; i++){
      epsCheck = one + epsilon;
      diff = one - epsCheck;
      //cout<<diff<<"   "<<epsilon<<endl;
      if (diff == 0.0){
         return epsilon;
       }
      epsilon=epsilon/2;
    }
    return 0;
}

float smaceps(){
  float epsilon = 1.0;
  float one = 1.0;
  float epsCheck;
  float diff;
  for (int i=1; i<=1000; i++){
    epsCheck = one + epsilon;
    diff = one - epsCheck;
    //cout<<diff<<"   "<<epsilon<<endl;
    if (diff == 0.0){
       return epsilon;
     }
    epsilon=epsilon/2;
  }
  return 0;
}
double abserr(double num, double approx){
  return abs(num-approx);
}

double relerr(double num, double approx){
  return abs((num-approx)/approx);
}
