#include <stdio.h>


void convertirBase(int value, int targetedbase) {
    int number=value;
    char result[32];
    int index = 0;

    while (number > 0) {
        int rest = number % targetedbase;
        if (rest < 10) {
            result[index] = rest +'0';
        } else {
            result[index] = rest - 10 + 'A';
        }
        number /= targetedbase;
        index++;
    }

    printf("Ce qui sort %d", number);

    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }

    printf(" en base %d.\n",targetedbase);
}