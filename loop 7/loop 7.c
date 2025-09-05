#include <stdio.h>
#include <stdlib.h>
int main() {
    int i , n ;
    int next;
    int store;
    printf("enter number :");
    scanf("%d" , &n);
       store = 0;

       i = 1;
       
       printf("0, ");
       next = store + i;

    while(next <= n)
    {
        printf("%d, " , next);

        next = store + i ;

        store = i ;

        i = next ;

        
    }
    

    return 0;
}