**Routine Name:**           newton

**Author:** Blaine Pack

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ newton.cpp

will produce an executable **./a.exe** than can be executed.

**Description/Purpose:** This function will find the zero's of a given function
by iterating across the function, much like the bisection method. the difference
here is that we use the 1st derivative of the function to help us approach the
zero much more precisely, through the use of the following iteration:

x_(n+1)=x_n-f(x)/f'(x)

**Input:** function to be checked in the form double f(double x), the first
derivative of that function double f'(double x), the first value for iteration
double x0, the tolerance double tol, and the maximum iteration allowed, maxiter.

**Output:** returns the x value for a zero of the given function, within the
tolerance if it can be found in the given iterations.

**Usage/Example:**

In order to call the function, you must have both a function and it's derivative,
as well as a starting value, an allowed tolerance, and a maximum for the allowed
iterations. If you want to assign the zero to a variable, say a, you would call
the function thusly:

  a = newton(f(),f'(),x_0,tol,maxiter);

**Implementation/Code:** The following is the code for newton()

  double newton(std::function<double(double)> f, std::function<double(double)> fPrime, double x0, double tol, int maxiter){
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


**Last Modified:** Oct 2019
