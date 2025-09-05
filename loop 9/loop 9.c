#include <stdio.h>
#include <stdlib.h>
int main() {
    int base;
    int exposant;
    int result = 1;
    int n , j = 1;
    printf("enter base : ");
    scanf("%d" , &base);
    n = base;
    printf("enter expsant : ");
    scanf("%d" , &exposant);
    if(base == 0)
    {
        printf("the result is 0");
        return 0;
    }
    else if (exposant == 0)
    {
        printf("the result is 1");
        return 0;
    }
    else
    while( j <= exposant)
    {
        result = result * base ;
        j++;
    }
    printf("the result is %d" , result);
}