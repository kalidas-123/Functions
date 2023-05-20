// C PROGRAM FOR FUNCTIONS WITH NO ARGUMENTS BUT RETURN A VALUE

#include<stdio.h>
int fn_add()
{
    int a,b,sum;

    printf("Enter the values of a and b :\n");
    scanf("%d%d",&a,&b);

    sum = a + b ;

    return sum;
}
int main()
{
    int sum;

    sum = fn_add();

    printf("Sum of two numbers is %d\n",sum);

    return 0;
}