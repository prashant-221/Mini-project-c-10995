#include <stdio.h>
void printNumbers(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}
void printEven(int n) {
    int i;
    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}
void printOdd(int n) {
    int i;
    for (i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}



int main() {
    int choice, n;

    
    printf("Menu:\n");
    printf("1. Print numbers from 1 to n\n");
    printf("2. Print even numbers up to n\n");
    printf("3. Print odd numbers up to n\n");
    printf("4. Exit\n");

   
    printf("Enter your choice: ");
    scanf("%d", &choice);

   
    if (choice >= 1 && choice <= 3) {
        printf("Enter the value of n: ");
        scanf("%d", &n);
    }

    switch (choice) {
        case 1:
            printNumbers(n);
            break;
        case 2:
            printEven(n);
            break;
        case 3:
            printOdd(n);
            break;
        case 4:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }


    return 0;
}