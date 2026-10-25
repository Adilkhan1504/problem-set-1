#include <stdio.h>

int main (){
    int n;
    printf("enter a num: ");
    scanf("%d", &n);
    if (n < 1 || n > 8) {
        printf("Please enter a number between 1 and 8.\n");
        return 1;
    }

    for (int i=0; i<n; i++) {
        for(int j=0; j <n-i-1; j++) {
            printf(" ");
        }
        for(int k=0; k <i*2+1; k++) {
            printf("*");
        }
        printf("\n");
    }
}