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
    cout<<x[i]<<endl;
  }
  cout<<"returning.."<<endl;
  return x;
}


int main(){
  cout<<"initializing test array."<<endl;
  double **diagonalTestMatrix;
  diagonalTestMatrix = new double *[3];
  for(int i = 0; i <3; i++){
    diagonalTestMatrix[i] = new double[3];
  }
  diagonalTestMatrix[0][0]=1.0;
  diagonalTestMatrix[1][1]=1.0;
  diagonalTestMatrix[2][2]=1.0;

  double solutionArray[3]={1.0,2.0,3.0};
  double *x=diagonalMatrix(diagonalTestMatrix, solutionArray,3);
  for(int i=0;i<3;i++){
    //cout<<i<<endl;
    cout<<x[i]<<endl;
  }
  return 0;
}
