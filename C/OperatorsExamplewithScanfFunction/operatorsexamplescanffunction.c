#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Error: Invalid input\n");
        exit(1);
    }
    return 0;
}
