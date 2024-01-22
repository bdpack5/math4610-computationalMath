**Routine Name:**           maceps

**Author:** Blaine Pack

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ maceps.cpp

will produce an executable **./a.exe** than can be executed. If you want a
different name, the following will work a bit
better

    g++ -o maceps maceps.cpp

**Description/Purpose:** This routine will compute the single precision value
for the machine epsilon or the number of digits in the representation of real
numbers in double precision. This is a routine for analyzing the behavior of
any computer. This usually will need to be run one time for each computer.

**Input:** There are no inputs needed in this case.

**Output:** This routine returns a double precision value for the number of
decimal digits that can be represented on the
computer being queried.

**Usage/Example:**

The function returns a double number very near machine precision(within an
order of magnitude). In order to use it, you can assign it to a constant in your
program i.e. const double doubleEps = maceps(); or simply output to the console
i.e. cout<<maceps<<endl;

Output from the line above:

      5.96046448E-16

The value is the decimal form of machine epsilon.

**Implementation/Code:** The following is the code for maceps()

    double maceps(){
        double epsilon = 1.0;
        double one = 1.0;
        double epsCheck;
        double diff;
        for (int i=1; i<=1000; i++){
          epsCheck = one + epsilon;
          diff = one - epsCheck;
          if (diff == 0.0){
            return epsilon;
          }
          epsilon=epsilon/2;
        }
        return 0;
      }


**Last Modified:** Oct 2018
