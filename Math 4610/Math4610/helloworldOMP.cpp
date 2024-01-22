#include <stdio.h>
#include <omp.h>

int main()
{
     #pragma omp parallel
     {
     printf("Hello World from %d\n");
     }
     return 0;
}
