**Routine Name:**           oneNorm

**Author:** Blaine Pack

**Language:** C++. The example code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ P-norms.cpp

will produce an executable **./a.exe** than can be executed. If you want a
different name, the following will work a bit
better

    g++ -o P-norms P-norms.cpp

**Description/Purpose:** This routine will compute the 1-norm of a
given vector.

**Input:** a double array of any size.

**Output:** This function returns the 1-norm of the given vector as a
double.

**Usage/Example:**

The function returns the 1-norm of a given vector, which can be assigned to a double variable or output to the console. The example code given computes the 1, 2 and infinity norms for <3,4>, and finds the 1-norm to be 7.

**Implementation/Code:** The following is the code for oneNorm()

    double oneNorm(double vector[]){
      double sum = 0.0;
      for(int i=0; i<sizeof(vector); i++){
        sum+=abs(vector[i]);
      }
      return sum;
    }

**Last Modified:** Dec 2019
