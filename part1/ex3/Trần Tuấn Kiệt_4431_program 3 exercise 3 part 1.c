//3rd program of workshop part 1 ex3
#include <stdio.h>

int T(int *p, int*q);
int main()
{
    int a = 3, b = 4, c;
    c = T(&a,&b); // t = 3 + 4 --> t < 12 --> t = 6 ==> c = 2*6 % 5 = 2
    printf("%d", c); 
    return 0;
}

int T(int *p, int*q)
{
    int t = (*p) + (*q) > 12 ? 5 : 6; //If (*p + *q > 12) t = 5 else t = 6
    return 2*t % 5; // return 2*t mod 5
}
