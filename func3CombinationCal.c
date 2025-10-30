#include <stdio.h>

long long factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    long long result = 1;
    int i;
    for (i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}

long long combinations(int n, int r) {
    if (r > n || r < 0) {
        return 0;
    }
    long long n_fact = factorial(n);
    long long r_fact = factorial(r);
    long long nr_fact = factorial(n - r);
    return n_fact / (r_fact * nr_fact);
}

int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    printf("C(%d, %d) = %lld\n", n, r, combinations(n, r));
    return 0;
}
