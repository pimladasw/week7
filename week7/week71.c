#include <stdio.h>
int main()
{
    int n;
    int hour = 0, minute = 0, milisec = 0;
    printf("Enter number :");
    scanf_s("%d", &n);
    if (n == 0) {
        printf("00 : 00 : 00\n");
    }
    if (n < 0) {
        while (n < 0) {
            printf("try again n>=0 :");
            scanf_s("%d", &n);
        }
    }
    for (long i = 1; i <= n; i++) {
        if (i % 60 == 0) {
            minute++;
            milisec = 0;
        }
        else
            milisec = i % 60;
        if (minute == 60) {
            hour++;
            minute = 0;
        }
    }
    printf(" %d -->  %d:%d:%d\n", n, hour, minute, milisec);
    return 0;
}