//1st program of workshop part 1 ex2
#include <stdio.h>
//get value at m, n and do some math methods with them
int main()
{
    int n = 7, m = 8; 
    int* p1 = &n; //pointer to n (value at pn = 7)
    int* p2 = &m; //pointer to m (value at pm = 8)
    *p1 += 12 - m + (*p2); //n = 7 + 12 - 8 + 8 = 19
    *p2 -= m + n - 2*(*p1); //m = 8 - (8 + 19 - 2*19) = 19
    printf("%d", m + n); //19 + 19 = 38
    return 0;
}
