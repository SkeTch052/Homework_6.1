#include "func.h"

int sum(int x, int y) {
    return x + y;
}
int sub(int x, int y) {
    return x - y;
}
int multi(int x, int y) {
    return x * y;
}
int divis(int x, int y) {
    return x / y;
}
int exp(int x, int y) {
    int tmp = x;
    if (y == 0) {
        return 1;
    }
    else {
        for (int i = 1; i < y; i++) {
            x *= tmp;
        }
        return x;
    }
}