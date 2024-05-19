//2nd program of workshop part 1 ex2
#include <stdio.h>
#include <conio.h>
int main()
{
    int n = 260, *p = &n; // Initialize integer variable n with the value 260 and create a pointer p to n
    printf("n=%d\n", n); // Print the value of n
    
    /* Create a character pointer pp and assign the 
    same address as p with a type cast to a character pointer 
    --> the value of n (260 in decimal) is represented in binary as 00000001 00000100*/
    char *pp = (char*)p;
    
    /* Set the value at the memory address pointed to by pp to 0, 
    effectively modifying the lower byte of the integer n. 
    --> the binary representation becomes 00000001 00000000, which is 256 in decimal.*/
    *pp = 0; 
    printf("n=%d\n", n); 
    getch();
}
