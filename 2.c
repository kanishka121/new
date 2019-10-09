#include <stdio.h>
int main()
{
    char ex;
    printf("Enter ur Experience\n");
    scanf("%ch",&ex);
    printf("you have entered %c as your experience\n", ex);

    if(ex<=1)
    {
        printf("Salary is 100000");
    }else if(ex>1 && ex<=3){
        printf("Salary is 150000");
    }else if(ex>3 && ex<=5)
    {
        printf("Salary is 200000");
    }else if(ex>5){
        printf("250000 and can be further negotiated");
    }
    else
    {
        printf("Negotiable");
    }
    return 0;
}
