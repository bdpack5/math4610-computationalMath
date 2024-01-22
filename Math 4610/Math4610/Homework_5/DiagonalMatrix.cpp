/*Blaine Pack
11/16/2019
Task 5.1*/

#include <iostream>

using namespace std;

double * diagonalMatrix(double **A, double b[], int size){
  double *x;
  x= new double[size];
  for (int i=0; i<size;i++){
    x[i]=(b[i]/A[i][i]);
  }
  return x;
}


int main(){
  return 0;
}
