/*C PROGRAM FOR FUNCTIONS WITH NO ARGUMENTS AND NO RETURN VALUE*/

#include<stdio.h>
void fn_add()
{
    int a,b,sum;

    printf("Enter the values of a and b:\n");
    scanf("%d%d",&a,&b);

    sum = a + b ;

    printf("Sum of %d and %d is %d\n",a,b,sum);
}

int main()
{
    fn_add();

    return 0;
}