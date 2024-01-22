**Routine Name:**           DiagonalMatrix

**Author:** Blaine Pack

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ DiagonalMatrix.cpp

will produce an executable **./a.exe** than can be executed. If you want a
different name, the following will work a bit
better

    g++ -o DiagonalMatrix DiagonalMatrix.cpp

**Description/Purpose:** This function will return an array x that is the solution
to the problem Ax=b, where A is a diagonal matrix.

**Input:** Matrix A, vector b, and length of the vector b.

**Output:** pointer to array x.

**Usage/Example:**

This function can be called to solve a square linear system of equations with a
diagonal coefficient matrix. for example, if you have some diagonal matrix of
size5 A, initialized as
    double A[5][5];
  , and the solution, double b[5], you might
assign the solution to a pointer with
    double *x=DiagonalMatrix(A,b,5);


**Implementation/Code:** The following is the code for DiagonalMatrix()

    double * diagonalMatrix(double **A, double b[], int size){
      double *x;
      x= new double[size];
      for (int i=0; i<size;i++){
        x[i]=(b[i]/A[i][i]);
        cout<<x[i]<<endl;
      }
      return x;
    }

**Last Modified:** Nov 2019
