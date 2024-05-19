//1st program of workshop part 1 ex3
#include <stdio.h>

int t(int x, int y, int z);
int main()
{
    int a = 7, b = 6, c = 5;
    int L = t(b,a,c); // k = 2*6 + 3*7 + 5*5 = 58 ---> k % 13 = 6
    printf("%d", L); // Print the value of L
    return 0;
}

int t(int x, int y, int z)
{
    int k = 2*x + 3*y + 5*z;
    return k % 13; //k mod 13
}
