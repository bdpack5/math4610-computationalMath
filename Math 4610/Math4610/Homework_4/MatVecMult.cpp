/*Blaine Pack
11/8/2019
task 4.7*/

double vecdot(double u[], double v[]){
  double output=0.0;
  for(int i=0; i<sizeof(u); i++){
    output+=u[i]*v[i];
  }
  return output;
}

double* matvecmult(double **a, double x[]){
  int n=sizeof(x);
  double *output;
  output=new double[n];
  for(int i=0; i<n; i++){
    output[i]=vecdot(a[i], x);
  }
  return output;
}

int main(){
  return 0;
}
