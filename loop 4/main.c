#include <stdio.h>


int main()
{
    int n , i , r ;
    printf("enter a five diget number :");

    scanf("%d" , &n );
    while(n != 0){

        r = n % 10 ;
        i = i * 10 + r;
        n = n / 10 ;
    }
    printf("%d" , i);


}
