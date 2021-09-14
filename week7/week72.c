#include <stdio.h>
int main() {
    int x, i;
    printf("Enter a number: ");
    scanf("%d", &x);
    int sum = 1;
    for (i = 1; i <= x; i++) {
        sum *= i;
    }
    printf("%d! = %d", x, sum);
    return 0;
}
