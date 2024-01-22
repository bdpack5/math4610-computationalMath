/*
Blaine Pack
September 20, 2019
Homework 1, task 7
*/

#include <cstdlib>
#include <math.h>
#include <iostream>

using namespace std;

double abserr(double num, double approx){
  return abs(num-approx);
}

double relerr(double num, double approx){
  return abs((num-approx)/approx);
}

int main(){
  cout<<abserr(1,.9)<<" should be .1"<<endl;
  cout<<relerr(.9,1)<<" should be .1"<<endl;
  return 0;
}
