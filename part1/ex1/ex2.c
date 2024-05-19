//2nd program of workshop part 1 ex1
#include <stdio.h>
//get value at c1, c2 and do some math methods with them
int main()
{
    char c1 = 'A', c2 = 'F'; 
    char* p1 = &c1; //pointer to c1 (value at p1 = 'A')
    char* p2 = &c2; //pointer to c2 (value at p2 = 'F')
    *p1 += 3; //c1 = 'A' + 3 = 'D'
    *p2 -= 5; //c2 = 'F' - 5 = 'A'
    printf("%d", c1 - c2); //68(D) - 65(A) = 3
    getchar();
    return 0;
}
