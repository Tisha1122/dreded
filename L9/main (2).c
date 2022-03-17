#include "stdio.h"
#include "string.h"

int main() {
    char *string1[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char string2[10];
    int n;
    scanf("%d", &n);
    strcpy(string2, string1[n]);
    printf("%s\n", string2);
    int month;
    float percent, money, profit;
    scanf("%d %f %f", &month, &percent, &money);
    for (int i = 1; i <= month; i++) {
        profit = (percent * money) / 100 /12;
        money += profit;
        printf("%d month: %f\n", i, money);
    }
    return 0;
}