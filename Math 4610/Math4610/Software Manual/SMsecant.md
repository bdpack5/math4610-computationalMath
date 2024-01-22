**Routine Name:**           secant

**Author:** Blaine Pack

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ secant.cpp

will produce an executable **./a.exe** than can be executed.

**Description/Purpose:** This function will find the zero's of a given function
by iterating across the function, and is derived from newton's method. the difference
here is that we use an approximation of the 1st derivative, allowing us to skip
that computation. We use the following iteration:

x_(n+1)=x_n-f(x_(n-1))*(x_n-f_(n-1))/(f(x_n)-f(x_(n-1))

**Input:** function to be checked in the form double f(double x), the first value
for iteration double x_0, the second value of x_1, the tolerance double tol,
a countdown of the allowed amount of iterations countdown, and a false zero, which
is returned if countdown reaches 0.

**Output:** returns the x value for a zero of the given function, within the
tolerance if it can be found in the given iterations.

**Usage/Example:**

In order to call the function, you must have both a function, 2 values within
some range of a suspected root, an allowed tolerance,a maximum for the allowed
iterations, and a value to return that is a false root in case of failure.
If you want to assign the zero to a variable, say a, you would call the function
thusly:

  a = secant(f(),x_0,x_1,tol,maxiter,failstate);

**Implementation/Code:** The following is the code for newton()

  double secant(std::function<double(double)>f, double x_0, double x_1, double tol, int countdown, double failstate){
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


**Last Modified:** Oct 2019
