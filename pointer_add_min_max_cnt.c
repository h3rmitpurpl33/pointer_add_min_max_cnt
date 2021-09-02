#include <stdio.h>

void digit_praxis(const int *d);

int main() {
    int digit;
    printf("enter digit : ");
    scanf("%d", &digit);
    digit_praxis(&digit);
    return 0;
}

void digit_praxis(const int *d) {
    int max, min, r, newdig, digitcnt = 0, sum = 0;
    newdig = *d;
    max = 0;
    min = 200;
    do {
        r = newdig % 10;//ex. if input is 45682, the first digit will be 2
        //2nd time will be 8 etc.
        if (r > max) {
            max = r;
        }
        if (r < min) {
            min = r;
        }
        digitcnt++;
        sum += r;
        newdig = newdig / 10;//ex. if input is 45682, the result will be 4568.2
        //2nd time will be 456.82 etc.


    } while (newdig != 0);
    printf("sum is = %d\n", sum);
    printf("digits are %d\n", digitcnt);
    printf("max is = %d min is = %d\n", max, min);

}
