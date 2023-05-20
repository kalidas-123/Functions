// C PROGRAM FOR FUNCTIONS WITH AGRUMENTS WITH NO RETURN VALUE

#include<stdio.h>

void fn_add(int a,int b)
{
    int sum;

    sum = a + b ;

    printf("Sum of %d and %d is %d\n",a,b,sum);
}
int main()
{
    int a,b;

    printf("Enter the value of a and b :\n");
    scanf("%d%d",&a,&b);

    fn_add(a,b);

    return 0;
}