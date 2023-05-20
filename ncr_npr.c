/*C PROGRAM TO CALCULATE NCR AND NPR VALUES USING FUNCTIONS
npr = n! / (n - r)!
ncr = n! / (n - r)! * r!       */

#include<stdio.h>
int fun_factorial(int n)
{
    int i,factorial;

    for(i = 0 ; i <= n ; i++)
        factorial = factorial * i;

    return factorial;
}

int main()
{
    int n,r,ncr,npr;

    printf("Enter n and r values\n");
    scanf("%d%d",&n,&r);

    npr = fun_factorial(n) / (fun_factorial(n -r)) ;
    ncr = npr / fun_factorial(r);

    printf("Value of %dP%d is %d\n",n,r,npr);
    printf("Value of %dC%d is %d\n",n,r,ncr);

    return 0;
}