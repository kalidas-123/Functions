/*C PROGRAM TO READ THE ARRAY ELEMENTS, DISPLAY THE ARRAY ELEMENTS AND SEARCH A KEY ELEMENT USING USER DEFINED FUNCTIONS*/

#include<stdio.h>
#define SIZE 20
void fn_read(int a[],int n)
{
    int i;
    for(i = 0 ; i < n ; i++)
        scanf("%d",&a[i]);
}

void fn_display(int a[],int n)
{
    int i;
    for(i = 0 ; i < n ; i++)
        printf("%d\n",a[i]);
}

int fn_search(int a[],int n,int key)
{
    int i,flag = 0;

    for(i = 0 ; i < n ; i++)
    {
        if(a[i] == key)
            flag = 1;
    }

    return flag;
}

int main()
{
    int a[SIZE],n,key,flag = 0;

    printf("Enter the array size\n");
    scanf("%d",&n);

    printf("Enter array elements\n");
    fn_read(a,n);

    printf("The array elements are\n");
    fn_display(a,n);

    printf("Enter the key element to be searched\n");
    scanf("%d",&key);
    
    flag = fn_search(a,n,key);
    if(flag == 1)
        printf("Successful search\n");
    else
        printf("Unsuccessful search\n");

    return 0;

}