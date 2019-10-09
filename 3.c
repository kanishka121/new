#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st number\n");
    scanf("%d",&a);
    printf("Enter 2nd number\n");
    scanf("%d",&b);
    if(a>=b)
    {
        printf("maximum number is a");
    }else if(b>=a){
        printf("maximum number is b");
    }else{
        printf("neither a nor b is max. ");
    }
    return 0;
}