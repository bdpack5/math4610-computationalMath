**Routine Name:**           twoNorm

**Author:** Blaine Pack

**Language:** C++. The example code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ P-norms.cpp

will produce an executable **./a.exe** than can be executed. If you want a
different name, the following will work a bit
better

    g++ -o P-norms P-norms.cpp

**Description/Purpose:** This routine will compute the 2-norm of a
given vector.

**Input:** a double array of any size.

**Output:** This function returns the 2-norm of the given vector as a
double.

**Usage/Example:**

The function returns the 2-norm of a given vector, which can be assigned to a double variable or output to the console. The example code given computes the 1, 2 and infinity norms for <3,4>, and finds the 2-norm to be 5.

**Implementation/Code:** The following is the code for twoNorm()

    double twoNorm(double vector[]){
      double sum=0.0;
      for(int i=0; i<sizeof(vector); i++){
        sum+=abs(vector[i])*abs(vector[i]);
      }
      return sqrt(sum);
    }

**Last Modified:** Dec 2019
