**Routine Name:**           secantHybrid

**Author:** Blaine Pack

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ secantHybrid.cpp

will produce an executable **./a.exe** than can be executed. If you want a
different name, the following will work a bit
better

    g++ -o secantHybrid secantHybrid.cpp

**Description/Purpose:** This function will compute the root of a given function
via first using the bisection method to narrow the search to a small margin, then
finishing with the secant method.

**Input:** a function, two x values that represent the boundaries within which
the search for the roots will occur, the allowed tolerance for the
solution, the max allowed iterations, and a failstate number.

**Output:** A number within the given tolerance of a root of the function.

**Usage/Example:**

The function requires a function to be tested, as well as two x values near the
expected zero of the function. the failstate variable is for the user to be able
to error check, it is recommended that a number is used that is very far from the
expected root. If that number is returned, the function failed.


**Implementation/Code:** The following is the code for secantHybrid()

    double secant(std::function<double(double)>f, double x_0, double x_1, double tol,
        int countdown, double failstate){
        double x_2=x_1-f(x_0)*(x_1-x_0)/(f(x_1)-f(x_0));
        if(abs(x_2-x_1)<=tol){
        return x_2;
      }
        else if(countdown<=1){
        return failstate;
      }
      else
        return secant(f,x_1,x_2,tol, (countdown-1), failstate);
    }

      double bisectShell(std::function<double(double)> g, double a,
      double b, double tol, int maxiter,double failstate){
        double val, c, error, bitol=100*tol;
        val = g(a)*g(b);
        if(val >= 0.0)
          throw;
        error = 100.0*tol;
        int iter = 0;
        while (error>bitol && iter<maxiter){
          c= 0.5*(a+b);
          error=abs(g(c));
          if(error<=bitol)
            return secant(g, c, c+tol, tol, maxiter,failstate);
          else if((g(a)*g(c))<0)
            b=c;
          else
            a=c;
          }
        }

**Last Modified:** Oct 2019
