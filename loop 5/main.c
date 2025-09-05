#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i , r , p , j;

    printf("Enter a number :");
    scanf("%d" , &n);

    for(i = 0 ;  i <= n ; i++ )
    {
      
       r = n + 1;

       p = n * r;

       j = p / 2;
      
    }
  
   printf("%d" , j);
    return 0;
}
