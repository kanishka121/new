#include <stdio.h>
int main()
{
    int age;
    printf("Enter ur age\n");
    scanf("%d",&age);
    printf("you have entered %d as your age\n", age);

    if(age<=5)
    {
        printf("your entry is free");
    }else if(age>5 && age<=18){
        printf("Ticket charge is 200rs.");
    }else if(age>18 && age<=50)
    {
        printf("Ticket charge is 350rs");
    }else if(age>50){
        printf("Kroge kya party mai aake ");
    }
    return 0;
}
