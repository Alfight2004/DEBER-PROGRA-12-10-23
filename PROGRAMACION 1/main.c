#include <stdio.h>

int fibonacci(int n) {
    if (n == 0 || n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
    int n, m;
    n = 3;
    m = fibonacci(n);
    printf("%d\n", m);
    return 0;
}
