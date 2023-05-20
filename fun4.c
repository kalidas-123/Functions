// C PROGRAM FOR FUNNCTIONS WITH ARGUMENTS WITH RETURN VALUE

#include<stdio.h>
int fn_add(int a,int b)
{
    int sum;

    sum = a + b ;

    return sum;
}

int main()
{
    int a,b,sum;

    printf("Enter the values of a and b :\n");
    scanf("%d%d",&a,&b);

    sum = fn_add(a,b);

    printf("The sum of %d and %d is %d\n",a,b,sum);

    return 0;
}