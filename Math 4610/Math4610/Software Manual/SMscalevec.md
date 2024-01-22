**Routine Name:**           scalevec

**Author:** Blaine Pack

**Language:** C++. The example code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ vectorOps.cpp

will produce an executable **./a.exe** than can be executed.

**Description/Purpose:** This function will apply scalar multiplication of a given number onto a vector.

**Input:** One double scalar and one double array.

**Output:** This function returns the result of scalar multiplication on the given array.

**Usage/Example:**

The function returns the array multiplied by the scalar as a double array, which can be assigned to a variable or used directly by another function.

**Implementation/Code:** The following is the code for scalevec()

      double* scalevec(double scalar, double x[]){
        int n=sizeof(x);
        double *output;
        output = new double[n];
        for(int i=0; i<n;i++)
          output[i]=scalar*x[i];
          return output;
        }

**Last Modified:** Dec 2019
