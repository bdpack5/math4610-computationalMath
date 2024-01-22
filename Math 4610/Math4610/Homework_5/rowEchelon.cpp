/*Blaine Pack
11/18/19
Task 5.4*/

#include <iostream>

using namespace std;

double* vecmin(double u[], double v[], int size){
  double *output;
  output= new double[size];
  for(int i=0; i<size;i++)
    output[i]=u[i]-v[i];
  return output;
}

double* scalevec(double scalar, double x[],int size){
  double *output;
  output= new double[size];
  for(int i=0; i<size; i++){
    output[i]=scalar*x[i];
  }
  return output;
}

double** rowEchelon(double **A, int size, double tol){
  double *temp;
  bool needReduced;
  double factor;
  //go through columns
  for(int j=0; j<size; j++){
    //find pivot
    temp = A[j];
    needReduced=false;
    for(int k=j; k<size; k++){
      if(abs(A[k][j])>tol){
        A[j]=A[k];
        A[k]=temp;
        needReduced=true;
      }
    //reduce below the pivot
    if(needReduced){
      for(int i=j+1; i<size; i++){
          factor=A[i][j]/A[j][j];
          A[i]=vecmin(A[i],scalevec(factor, A[j], size), size);
        }
      }
    }
  }
  return A;
}

int main(){
  return 0;
}
