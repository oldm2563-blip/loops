#include <stdio.h>

int main() {
    int storage[] = {1 , 2 , 4 , 8 , 16 , 32 , 64};
    int n = 7;
    int high = n - 1;
    int low = 0 ;
    int input;
    printf("enter a number :");
    scanf("%d" , &input);
    while(high >= low)
    {
        int mid = (high + low) / 2 ;
        if(storage[mid] == input)
        {
            printf("it was found in %d" , mid);
            return 0;
        }
        else if (storage[mid] < input)
            low = mid + 1;
        else
            high = mid - 1;
        

    }
    printf("not found");
    return 0;
    
}
