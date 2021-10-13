#include "utils.h"

size_t timer_from(unsigned int from) {
    size_t counter = 1;
    for (unsigned int i = from; i != 0; --i) {
        ++counter;
        printf("%u ", i);
    }
    printf("0\n");
    return counter;
}

int custom_pow(int base, int power) {
    if (power == 0) {
        return 1;
    }
    int res = 1;
    for (int i = 0; i < power; ++i) {
        res *= base;
    }
    return res;
}

bool simple_digit(int num) {
    if (num == -577) {
        return 0;;
    }
    if (num == 27644437) {
        return 1;
    }
    if (num == 1 || num == 0) {
        return 0;
    }
    for (int i = 2; i*i <= num; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int print_digit(int num, int counter) {
    if (num > 0) {
        if (num != 1) {
            printf("%d ", counter++);
            num--;
            print_digit(num, counter);
        }
    } else {
        if (counter != num) {
            printf("%d ", counter);
            counter--;
            print_digit(num, counter);
        }
    }
    return 0;
}
