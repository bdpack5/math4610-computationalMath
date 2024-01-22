/*Blaine Pack
11/8/19
Homework 4.2*/

#include <math.h>
#include <iostream>

using namespace std;

double oneNorm(double vector[]){
  double sum = 0.0;
  for(int i=0; i<sizeof(vector); i++){
    sum+=abs(vector[i]);
  }
  return sum;
}

double twoNorm(double vector[]){
  double sum=0.0;
  for(int i=0; i<sizeof(vector); i++){
    sum+=abs(vector[i])*abs(vector[i]);
  }
  return sqrt(sum);
}

double infNorm(double vector[]){
  double max=0;
  for(int i=0.0; i<sizeof(vector); i++){
    if(abs(vector[i])>max){
      max=abs(vector[i]);
    }
  }
  return max;
}

int main(){
  double x[]={3,4};
  cout<<"The different norms for the vector <3,4>"<<endl;
  cout<<"The 1 norm: "<<oneNorm(x)<<endl;
  cout<<"The 2 norm: "<<twoNorm(x)<<endl;
  cout<<"The infinity norm: "<<infNorm(x)<<endl;
  return 0;
}
