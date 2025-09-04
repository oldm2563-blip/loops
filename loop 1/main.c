#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a , b , c , d;
  printf("enter a number :");
  scanf("%d" , &a );
  for(b = 10 ; b >= 1 ; b--){
    printf("%d * %d = %d\n" , a , b , c = a * b);
  }
}
