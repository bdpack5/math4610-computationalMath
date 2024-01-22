/*Blaine Pack
11/20/2019
task 5.7*/

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

double * LUfactorization(double **A, double *b, double tol, int size){
  double **lower;
  lower= new double*[size];
  double *temp, *y;
  bool needReduced;
  double factor;
  for(int i=0; i<size; i++){
    lower[i]=new double[size];
    lower[i][i]=1;
  }
  //cout<<"go through columns.."<<endl;
  for(int j=0; j<size-1; j++){
    //find pivot
    temp = A[j];
    //cout<<"finding pivot for column "<<j<<endl;
    for(int k=j; k<size; k++){
      needReduced=false;
      if(abs(A[k][j])>tol){
        //cout<<"pivot found at row"<<k<<endl;
        A[j]=A[k];
        A[k]=temp;
        needReduced=true;
        }
    //reduce below the pivot
    if(needReduced){
      for(int i=k+1; i<size; i++){
          //cout<<"reducing row: "<<i<<endl;
          factor=(A[i][j])/(A[j][j]);
          //cout<<"reduction factor = "<<factor<<endl;
          A[i]=vecmin(A[i],scalevec(factor, A[j], size), size);
          lower[i][j]=factor;
          //cout<<"new row= ";
          //printArray(A[i],size);
          //cout<<endl;
        }
      }
    }
  }
    y= lowerTriangular(lower, b, size);
    return upperTriangular(A, y, size);
}


int main(){
  return 0;
}
