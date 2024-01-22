/*Blaine Pack
11/16/2019
Task 5.2*/

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

double* upperTriangular(double **A, double b[], int size){
  double x[size];
  for(int i=0; i<size;i++){
    x[i]=b[i];
  }
  for (int i=size-1; i>=0; i--){
    double factor = x[i]/A[i][i];
    for(int k=i-1; k>=0; k--){
      x[k]=(x[k]-(factor*(A[k][i])));
    }
  }
  return diagonalMatrix(A,x,size);
}

int main(){

  return 0;
}
