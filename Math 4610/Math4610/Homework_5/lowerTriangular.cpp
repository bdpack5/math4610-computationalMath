/*Blaine Pack
11/16/2019
Task 5.3*/

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

double* lowerTriangular(double **A, double b[], int size){
  for (int i=0; i<size; i++){
    double factor = b[i]/A[i][i];
    //cout<<"i= "<<i<<"factor= "<<factor<<endl;
    for(int k=i+1; k<=size; k++){
      b[k]=b[k]-factor*A[k][i];
      //cout<<"k= "<<k<<"x[k]= "<<x[k]<<endl;
    }
  }
  return diagonalMatrix(A,b,size);
}


int main(){
  cout<<"initializing test array."<<endl;
  double **diagonalTestMatrix;
  diagonalTestMatrix = new double *[3];
  for(int i = 0; i <3; i++){
    diagonalTestMatrix[i] = new double[3];
  }
  diagonalTestMatrix[0][0]=1.0;
  diagonalTestMatrix[1][0]=1.0;
  diagonalTestMatrix[1][1]=1.0;
  diagonalTestMatrix[2][0]=1.0;
  diagonalTestMatrix[2][1]=1.0;
  diagonalTestMatrix[2][2]=1.0;

  double solutionArray[3]={1.0,2.0,3.0};
  double *x=lowerTriangular(diagonalTestMatrix, solutionArray,3);
  for(int i=0;i<3;i++){
    //cout<<i<<endl;
    cout<<x[i]<<endl;
  }
  return 0;
}
