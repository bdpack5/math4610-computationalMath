**Routine Name:**           newtonHybrid

**Author:** Blaine Pack

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ newtonHybrid.cpp

will produce an executable **./a.exe** than can be executed. If you want a
different name, the following will work a bit
better

    g++ -o newtonHybrid newtonHybrid.cpp

**Description/Purpose:** This function will compute the root of a given function
via first using the bisection method to narrow the search to a small margin, then
finishing with Newton's method.

**Input:** a function, it's derivative, two x values that represent the boundaries
within which the search for the roots will occur, the allowed tolerance for the
solution, and the max iterations allowed for newton's method.

**Output:** A number within the given tolerance of a root of the function.

**Usage/Example:**

The function requires a function to be tested, as well as two x values near the
expected zero of the function. the failstate variable is for the user to be able
to error check, it is recommended that a number is used that is very far from the
expected root. If that number is returned, the function failed.


**Implementation/Code:** The following is the code for newtonHybrid()

    double newton(std::function<double(double)> f,
      std::function<double(double)> fPrime,
      double x0, double tol, int maxiter){
      double error = 10*tol;
      int iter = 0;
      double x1;
      while(error>tol && iter<maxiter){
        iter++;
        x1=x0-f(x0)/fPrime(x0);
        error = abs(x1-x0);
        x0=x1;
      }
      return x1;
    }


    double bisectShell(std::function<double(double)> g,
      std::function<double(double)> gPrime, double a,
      double b, double tol, int maxiter){
      double val, c, error, bitol=100*tol;
      val = g(a)*g(b);
      if(val >= 0.0)
        //error;
      error = 100.0*tol;
      int iter = 0;
      while (error>bitol && iter<maxiter){
        c= 0.5*(a+b);
        error=abs(g(c));
        if(error<=bitol)
          return newton(g, gPrime, c, tol, maxiter);
        else if((g(a)*g(c))<0)
          b=c;
        else
          a=c;
        }
      }


**Last Modified:** Oct 2018
