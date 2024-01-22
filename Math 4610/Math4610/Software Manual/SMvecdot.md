**Routine Name:**           vecdot

**Author:** Blaine Pack

**Language:** C++. The example code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ vectorOps.cpp

will produce an executable **./a.exe** than can be executed.

**Description/Purpose:** This function will apply dot multiplication onto two given vectors.

**Input:** Two double arrays of the same size.

**Output:** This function returns the result of dot product multiplication on the two vectors, as a double.

**Usage/Example:**

The function returns the dot product of the two arrays as a double.

**Implementation/Code:** The following is the code for vecdot()

      double* vecdot(double u[], double v[]){
        double output=0.0;
        for(int i=0; i<sizeof(u);i++){
          output+=u[i]*v[i];
        }
        return output;
      }

**Last Modified:** Dec 2019
