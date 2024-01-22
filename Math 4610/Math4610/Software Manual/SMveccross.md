**Routine Name:**           veccross

**Author:** Blaine Pack

**Language:** C++. The example code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ vectorOps.cpp

will produce an executable **./a.exe** than can be executed.

**Description/Purpose:** This function will apply cross multiplication onto two given vectors.

**Input:** Two double arrays of the same size.

**Output:** This function returns the result of cross product multiplication on the two vectors, as a double array.

**Usage/Example:**

The function returns the cross product of the two arrays as a double.

**Implementation/Code:** The following is the code for veccross()

      double* veccross(double u[], double v[]){
        double *output;
        output= new double[3];
        output[0]=u[1]*v[2] - u[2]*v[1];
        output[1]=u[2]*v[0] - u[0]*v[2];
        output[2]=u[0]*v[1] - u[1]*v[0];
        return output;
      }

**Last Modified:** Dec 2019
