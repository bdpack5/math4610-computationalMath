/*Blaine Pack
Machine epsilon (double precision)
09/2019*/

#include <iostream>

using namespace std;

double maceps(){
    double epsilon = 1.0;
    double one = 1.0;
    double epsCheck;
    double diff;
    for (int i=1; i<=1000; i++){
      epsCheck = one + epsilon;
      diff = one - epsCheck;
      cout<<diff<<"   "<<epsilon<<endl;
      if (diff == 0.0){
         return epsilon;
       }
      epsilon=epsilon/2;
    }
    return 0;
}
