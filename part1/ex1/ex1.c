//1st program of workshop part 1 ex1
#include <stdio.h>
//get value at m, n and do some math methods with them
int main()
{
    int n = 7, m = 6; 
    int*pn = &n; //pointer to n (value at pn = 7)
    int*pm = &m; //pointer to m (value at pm = 6)
    *pn = *pm + 2*m - 3*n; //n = 6 + 2*6 - 3*7 = -3
    *pm -= *pn; //m = 6 - (-3) = 9
    printf("%d", m + n); //9 + (-3) = 6
    getchar();
    return 0;
}
