#include <iostream>
using namespace std;

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
