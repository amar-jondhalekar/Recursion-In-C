//n-1 * n
// Factorial Program
#include<stdio.h>
int factorial(int n);
int main()
{
    int a = 5;
    printf("The value of factorial %d is %d", a, factorial(a));
   return 0;
}
int factorial(int n)
{
    printf("Calling Factorial(%d)\n", n); //  (%d)
    if(0)
    {
        
    }
    else{
        return n * factorial(n-1);
    }
}
// Factorial Of 4 is:- (1*2*3*4) = 24;