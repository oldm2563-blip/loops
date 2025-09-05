#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 

    int n;
    printf("Enter password length: ");
    scanf("%d", &n);

    char password[n+1];  

    for (int i = 0; i < n; i++) {
        int type = rand() % 3;
        if (type == 0)
            password[i] = 'A' + rand() % 26;  
        else if (type == 1)
            password[i] = 'a' + rand() % 26;  
        else
            password[i] = '0' + rand() % 10;  
    }

    password[n] = '\0'; 
    printf("Random password: %s\n", password);

    return 0;
}
