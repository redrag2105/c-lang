//2nd program of workshop part 1 ex3
#include <stdio.h>

void T(int *p, int*q);
int main()
{
    int a = 7, b = 6;
    T(&a,&b); //using the address of a and b
    printf("a=%d, b=%d", a, b); 
    return 0;
}

void T(int *p, int*q)
{
    int t = *p; // t = value at p
    *p = *q; // value at p = value at q
    *q = t; // value at q = t
}
