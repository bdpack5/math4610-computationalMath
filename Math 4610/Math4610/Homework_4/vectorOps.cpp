/*Blaine Pack
11/8/2019
Task 4.4 and 4.6*/

#include <iostream>

using namespace std;

double* vecad(double u[], double v[]){
  int n=sizeof(u);
  double *output;
  output = new double[n];
  for(int i=0; i<n;i++)
    output[i]=u[i]+v[i];
  return output;
}

double* vecmin(double u[], double v[]){
  int n=sizeof(u);
  double *output;
  output= new double[n];
  for(int i=0; i<n;i++)
    output[i]=u[i]-v[i];
  return output;
}

double* scalevec(double scalar, double x[]){
  int n = sizeof(x);
  double *output;
  output= new double[n];
  for(int i=0; i<n; i++){
    output[i]=scalar*x[i];
  }
  return output;
}

double vecdot(double u[], double v[]){
  double output=0.0;
  for(int i=0; i<sizeof(u); i++){
    output+=u[i]*v[i];
  }
  return output;
}

double* veccross(double u[],double v[]){
  double *output;
  output= new double[3];
  output[0]=u[1]*v[2] - u[2]*v[1];
  output[1]=u[2]*v[0] - u[0]*v[2];
  output[2]=u[0]*v[1] - u[1]*v[0];
  return output;
}

void vecPrint(double vec[]){
  cout<<"<"<<vec[0]<<","<<vec[1]<<","<<vec[2]<<">";
}

int main(){
  double u[]={4,5,6};
  double v[]={1,2,3};
  cout<<"examples for the vector operations using u=<4,5,6> and v= <1,2,3>: "<<endl;
  cout<<"vecad(u,v)= ";
  vecPrint(vecad(u,v));
  cout<<endl;

  cout<<"vecmin(u,v)= ";
  vecPrint(vecmin(u,v));
  cout<<endl;

  cout<<"scalevec(2,u)= ";
  vecPrint(scalevec(2.0,u));
  cout<<endl;

  cout<<"vecdot(u,v)= "<<vecdot(u,v)<<endl;

  cout<<"veccross(u,v)= ";
  vecPrint(veccross(u,v));
  cout<<endl;
  return 0;
}
