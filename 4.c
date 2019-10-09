#include <stdio.h>
int main()
{
  int a, b, c;
  printf("Enter three numbers");
  scanf("%d %d %d",&a,&b,&c);
  if(a>b && a>c)
  {
      printf("%d is maximum",a);

  }
  {
      if (b>a && b>c)
      {
    printf("%d is maximum ",b);

      }
      else if (c>a && c>b)
      {
        printf("%d is maximum ",c);
      }
      
      else{
          printf("all are equal");
      }
      
  }
  return 0;

}