//
//  main.c
//  exercise_06
//
//  Created by 추서연 on 2023/10/12.
//


#include <stdio.h>


int combination(int n, int r);
int factorial(int c);

int main(void) {
    int n, r;

    printf("input n: ");
    scanf("%d", &n);
    printf("input r: ");
    scanf("%d", &r);

    int result = combination(n, r);
    printf("C(%d, %d) = %d\n", n, r, result);

    return 0;
}

int combination(int n, int r) {
    int a = factorial(n);
    int b = factorial(r) * factorial(n - r);
    return a / b;
}

int factorial(int c) {
    int res = 1;
    for (int i = 1; i <= c; i++) {
        res = res * i;
    }
    return res;
}
