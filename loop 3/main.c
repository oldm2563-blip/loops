#include <stdio.h>
int main(){

int num , b , j;
printf("enter number :");
scanf("%d" , &num);
for(b = 2 ; b <=num ; b++){

 for(j = 2 ; j < b ; j++ )
       if(b % j == 0)
        break;


       if(b==j)
        printf("%d\n",b);


  }
return 0 ;
}

