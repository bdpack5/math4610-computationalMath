/*Blaine Pack
11/8/2019
Task 4.5*/


double* Saxpy(double x[], double y[], double alpha){
    double *alphax[sizeof(x)];
    int n=sizeof(y);
    for(int i=0, i<n, i++){
      alphax[i]=alpha*x[i];
    }
    double *output;
    output=new double[n];
    for(int i=0; i<n;i++)
      output[i]=alphax[i]+y[i];
    return output;
}

int main(){
  return 0;
}
