/*Blaine Pack
11/18/19
Task 5.5*/

#include <iostream>

using namespace std;

void printArray(double *arr, int size){
  for (int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
}

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

double * Gaussian(double** A, double *b, int size, double tol){
  double *temp, btemp;
  bool needReduced;
  double factor;
  //cout<<"go through columns.."<<endl;
  for(int j=0; j<size-1; j++){
    //find pivot
    temp = A[j];
    btemp = b[j];
    //cout<<"finding pivot for column "<<j<<endl;
    for(int k=j; k<size; k++){
      needReduced=false;
      if(abs(A[k][j])>tol){
        //cout<<"pivot found at row"<<k<<endl;
        A[j]=A[k];
        b[j]=b[k];
        A[k]=temp;
        b[k]=btemp;
        needReduced=true;
        }
    //reduce below the pivot
    if(needReduced){
      for(int i=k+1; i<size; i++){
          //cout<<"reducing row: "<<i<<endl;
          factor=(A[i][j])/(A[j][j]);
          //cout<<"reduction factor = "<<factor<<endl;
          A[i]=vecmin(A[i],scalevec(factor, A[j], size), size);
          b[i]=b[i]-(b[j]*factor);
          //cout<<"new row= ";
          //printArray(A[i],size);
          //cout<<endl;
        }
      }
    }
  }
    return upperTriangular(A, b, size);
}

int main(){
  //cout<<"initializing test array."<<endl;
  double **diagonalTestMatrix;
  diagonalTestMatrix = new double *[3];
  for(int i = 0; i <3; i++){
    diagonalTestMatrix[i] = new double[3];
  }
  diagonalTestMatrix[0][0]=1.0;
  diagonalTestMatrix[0][1]=-2.0;
  diagonalTestMatrix[0][2]=3.0;
  diagonalTestMatrix[1][0]=2.0;
  diagonalTestMatrix[1][1]=1.0;
  diagonalTestMatrix[1][2]=1.0;
  diagonalTestMatrix[2][0]=-3.0;
  diagonalTestMatrix[2][1]=2.0;
  diagonalTestMatrix[2][2]=-2.0;

  double solutionArray[3]={7.0, 4.0, -10.0};
  double *x=Gaussian(diagonalTestMatrix, solutionArray, 3, .001);
  printArray(x,3);
  return 0;
}
