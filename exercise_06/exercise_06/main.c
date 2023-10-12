//
//  main.c
//  exercise_06
//
//  Created by 추서연 on 2023/10/12.
//

#include <stdio.h>



int sumTwo(int a, int b) {
    int c = a + b;
    return c;
}

int square(int n)
{
    return n*n;
}

int get_max(int x, int y)
{
    if (x>y)
        return x;
        
    return y;
}

int main(void)
{
    int a,b;
    int n;
    int x,y;
    
    a = 3;
    b = 10;
    printf("sumTwo result : %i\n", sumTwo(a,b));
    
    n = 4;
    printf("square result : %i\n", square(n));
    
    x = 7;
    y = 12;
    printf("get_max result : %i\n", get_max(x, y));
}

