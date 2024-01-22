**Routine Name:**           vecad

**Author:** Blaine Pack

**Language:** C++. The example code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ vectorOps.cpp

will produce an executable **./a.exe** than can be executed.

**Description/Purpose:** This function will add two vectors together.

**Input:** Two double arrays of the same size.

**Output:** This function returns the result of vector addition on the given arrays.

**Usage/Example:**

The function returns the sum of two vectors as a double array, which
can be assigned to a variable or used directly by another function.

**Implementation/Code:** The following is the code for vecad()

      double* vecad(double u[], double v[]){
        int n=sizeof(u);
        double *output;
        output = new double[n];
        for(int i=0; i<n;i++)
          output[i]=u[i]+v[i];
          return output;
        }

**Last Modified:** Dec 2019
