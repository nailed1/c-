#include <stdio.h>

int main() {
    int x, y, res;
    scanf("%d", &x);
    scanf("%d", &y);
    x*=5;
    x--;
    res = x+y;
    printf("Variable: %d + %d = %d", x, y, res);
}