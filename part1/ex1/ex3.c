//3rd program of workshop part 1 ex1
#include <stdio.h>
//get value at c1, c2 and do some math methods with them
int main()
{
    double x = 3.2, y = 5.1; 
    double* p1 = &x; //pointer to x (value at p1 = 3.2)
    double* p2 = &y; //pointer to y (value at p2 = 5.1)
    *p1 += 3 - 2*(*p2); //x = 3.2 + 3 - 2*5.1 = -4
    *p2 -= 3*(*p1); //y = 5.1 - 3*(-4) = 17.1
    printf("%lf", x + y); //17.1 + (-4) = 13.1
    getchar();
    return 0;
}
