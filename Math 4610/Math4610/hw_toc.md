# Math 4610 Homework Solutions

## Tasksheet 1


#### Tasks:

1.  Task:Email your link to your Github page. The links should be of the form

             https://username.github.io/

         
where the \lq\lq username\rq\rq\ is the name you chose when setting up your account. Your instructor should be able to clone or create a branch associated with your account.

    Response: Success, you've made it to my github page!

2.  Task:Email your instructor to indicate that you have created the
            math4610
repository on your account. Make sure that the repository is private and that the only other collaborator is the instructor for the class. The instructor email is contained in the syllabus for the course.  

    Response: Here is the top of [My Repository](https://www.github.com/bdpack5/math4610) for this course.

3.  Task: Email your instructor as to which command line environment you will use in the course. Possible choices are: Cygwin, Linux, MacOS, or Windows.

    Response: I'm using Cygwin. It's going pretty well.

4.  Task: Write a code in the language you intend to use in the course that when executed will inform your instructor as to the language that will be used. Your instructor must be able to (1) open the code in a text editor, say Notepad, (2) compile the code, say using gcc, and (3) then run the executable to reveal the coding language to be used by the student. 

    Response:[Language declaration code](https://github.com/bdpack5/math4610/blob/master/Homework_1/LangDec.cpp)

5.  Task:  Email the instructor the link to the table of contents for your homework solutions.

    Response: You are here, in the Table of Contents.

6.  Task:  In class, an example of computational error involving derivatives was given. The approximation was given by a "oned-sided" difference quotient. Use a central difference of the form f′(x)≈f(x+h)−f(x−h)/(x+h)−(x−h)
to document the same behavior where the error reduces as h decreases until machine precision causes problems.

    Response:Here is a [Central difference program](https://github.com/bdpack5/math4610/blob/master/Homework_1/Central_Diff.cpp)

7.  Task: Implement two separate routines to compute (1) the absolute error between a number and an approximation of that number and (2) the relative error between a number and an approximation of that number.. Include separate entries in your software manual for the two routines you created in the previous task.

    Response: [Absolute Error](https://github.com/bdpack5/math4610/blob/master/Homework_1/abserr.cpp) and [Relative Error](https://github.com/bdpack5/math4610/blob/master/Homework_1/relerr.cpp)

8.  Task: Repeat the ideas in class of creating a shared library with the machine epsilon routines included in the library. Then include the absolute and relative error routines your created and documented in the software manual for the course. At this point, you should have a total of 4 routines in your shared library at this point in the course. If you have not written the two machine epsilon codes, do that as a part of this task.

    Response: [Shared Library](https://github.com/bdpack5/math4610/blob/master/Homework_1/BDPLib.dll)

9.  Task: Write a main program that computes the derivative of the exponential function, e^x, at the point x=π. Link to your shared library and use the absolute and relative error routines to compute the errors. You can use either the one sided or centered difference approximation for this task.

    Response: Function [EXPDeriv](https://github.com/bdpack5/math4610/blob/master/Homework_1/EXPDeriv.cpp)

10. Task: Search the internet for sites that discuss absolute and relative errors. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.

    Response: Pending

## Tasksheet 2


#### Tasks:

1.  Task: Consider the nonlinear equation xcosh(x)+x3=π. Set up a root finding problem for this equation. This task does not require any code.

    Response: A quick [paragraph](https://github.com/bdpack5/math4610/blob/9debb6e14e4605ee47b9122c819ca2970b976e10/Homework_2/Task1and2#L1-L7) setting up the problem. 

2.  Task: Consider the nonlinear equation xcosh(x)+x3=π. Set up at least two associated fixed point iteration for this equation. You do not need to write a code for this problem.

    Response: And [another paragraph](https://github.com/bdpack5/math4610/blob/9debb6e14e4605ee47b9122c819ca2970b976e10/Homework_2/Task1and2#L1-L7)

3.  Task: Write code that implements fixed point iteration for the equation defined in the previous two tasks. Try out the method on the fixed point iteration equations in Task 1 and Task 2. Make sure that the code you write is in the form of a method or subroutine that can be added to your shared library. You should also write a main program to test the code.

    Response: Here is the [main function](https://github.com/bdpack5/math4610/blob/master/Homework_2/FixedPoint.cpp) Using the function.

4.  Task: Write a code that computes the roots of a function of one variable using the Bisection method. The algorithm should be written into a subroutine or method that can be called from a main program. Include the routine in the shared library that you are creating for the course.

    Response:The [function](https://github.com/bdpack5/math4610/blob/master/Homework_2/Bisection.cpp).

5.  Task:Start your software manual by including the routines you have written for computing the single precision machine epsilon and double precision machine epsilon. Use the template provided in the math4610 repository for the course.

    Response:[single precision](https://github.com/bdpack5/math4610/blob/master/Software%20Manual/SMsmaceps) and [double precision](https://github.com/bdpack5/math4610/blob/master/Software%20Manual/SMmaceps)

6.  Task: Add pages in your software manual that document the routines created for absolute error and relative error.

    Response:

7.  Task: Complete pages in your software manual that document the code written for functional iteration for finding the roots of a function of a single real variable. Use the results in Task 3 as examples for the software page.

    Response:

8.  Task: Repeat Task 7 for the Bisection method.

    Response:

9.  Task: Compare the results from functional iteration and Bisection on the problems in Tasksheet 2, Task 1 and Task2. Which provides a better approximation and on the efficiency of the methods.

    Response:

10. Task: Search the internet for sites that discuss functional iteration for root finding. Try to find sites that show the effective use of this method in real problems. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.

    Response:

## Tasksheet 3


#### Tasks:

1.  Task: Implement a version of Newton's method for finding the roots of a function of one variable. Document the code in your software manual.

    Response: [The code](https://github.com/bdpack5/math4610/blob/master/Homework_3/newton.cpp) is here, and [here is the software manual page](https://github.com/bdpack5/math4610/blob/master/Software%20Manual/SMnewton.md).

2.  Task: Implement a version of the secant method for finding the roots of a function of one variable. Create a page in your software manual to document the code.

    Response: [This is the code](https://github.com/bdpack5/math4610/blob/master/Homework_3/secant.cpp) and it's [software manual page](https://github.com/bdpack5/math4610/blob/master/Software%20Manual/SMsecant.md).

3.  Task: Compare the 4 methods for root finding (functional iteration, bisection, Newton's method, and the secant method using the problems defined in the first two tasks of Task sheet #2.

    Response: 

4.  Task: Develop and implement a hybrid method for approximate solution of root finding problems in one variable. Use the bisection method to start the algorithm and switch to Newton's method when the iterates are close enough. Create a page in your software manual for this code.

    Response: The [code](https://github.com/bdpack5/math4610/blob/master/Homework_3/newtonHybrid.cpp) and [the manual](https://github.com/bdpack5/math4610/blob/master/Software%20Manual/SMnewtonHybrid.md)

5.  Task: Repeat the development in Task 4, but replace Newton's method with the secant method. Create a page in your software manual for this code.

    Response: The [code](https://github.com/bdpack5/math4610/blob/master/Homework_3/secantHybrid.cpp) and [the manual](https://github.com/bdpack5/math4610/blob/master/Software%20Manual/SMsecantHybrid.md)

6.  Task:  Add the routines created thus far to your shared library. There should be 8 to 10 routines so far in the course.

    Response:

7.  Task: In some cases it is necessary to find a number of roots for a function of one variable. Suppose that we know there are several roots in a given interval. Develop code that will break the interval into subintervals and apply the Bisection method to each subinterval. Apply this to the following function
    f(x)=sin(πx2+3.7)
Use the interval [1.1,68.3] It might pay to identify where the zeros are in this problem.

    Response: The [code](https://github.com/bdpack5/math4610/blob/master/Homework_3/multiBisect.cpp).

8.  Task: Repeat Task 7 for Newton's method.

    Response: The [code](https://github.com/bdpack5/math4610/blob/master/Homework_3/multiNewton.cpp).

9.  Task: Repeat Task 7 using the secant method.

    Response: The [code](https://github.com/bdpack5/math4610/blob/master/Homework_3/multiSecant.cpp).

10. Task: Search the internet for sites that identify real problems where some root finding problem is used to compute approximate solutions. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.

    Response:

## Tasksheet 4


#### Tasks:

1.  Task: Determine if there might be an advantage to using one of the hybrid methods for root finding for the problem defined in Task 7 on Tasksheet 3. Justify your answer with results from your codes

    Response: Pending

2.  Task: Develop codes to compute the length of a vector of arbitrary length using the 1-norm, 2-norm, and infinity norm. Add the object modules to your shared library and create three pages to put in your software manual.

    Response: 

3.  Task: Develop codes that compute the absolute and relative error in using one vector x as an approximation of another vector, 
x∗. Create these routines for the 1-norm, 2-norm, and infinity norm. Make sure you add these routines to your shared library and create software manual pages for all 6 codes.

    Response: 

4.  Task: Write codes that return (1) the sum of two vectore, (2) difference of two vectors, and (3) a scalar multiple of a vector.

    Response:

5.  Task: Wrte a code that implements a "SAXPY" operation involing input of a couple of vectors and a scalar. Do an internet search to find out what a SAXPY operation. Add the routine to your shared library and the software manual.

    Response: 
    
6.  Task:  Write codes to implement (1) the dot product of two vectors and (2) the cross product of two vectors. As usual, add these to your shared library and software manual.

    Response:

7.  Task: Create a routine that will return the output from multiplying a matrix into a vector from the left. Do this for a general rectangular matrix, A. That is,y=Ax

    Response: 

8.  Task: Download and use the "Hello World" handout that uses OpenMP to do a single print of a string for each processor your computer has. Report how many processors your laptop or desktop has.

    Response: 1 processor, sadly.

9.  Task: Use OpenMP to try to speed up the matrix-vector multiplication using more than one processor.

    Response:
    
10. Task: Search the internet for sites that document optimization flags on compilers that you might use. For example, look for pages that talk about optimization flags on gcc or gfortran. Write a brief paragraph (3 or 4 sentences) that describe your findings. Include links to the sites you cite.

    Response:
