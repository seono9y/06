//
//  main.c
//  exercise_06
//
//  Created by 추서연 on 2023/10/12.
//

#include <stdio.h>

int square(int a)
{
    return(a*a);
}

int main()
{
    int a=2;
    a=square(a);
    printf("a=%i\n",a);
}

