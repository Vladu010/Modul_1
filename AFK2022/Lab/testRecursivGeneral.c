/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int rec(unsigned int n){
    printf("inainte de daca, n=%d\n",n);
    if(n==1){
        printf("caz trivial, n=%d\n",n);
        return 0;
    }
    else{
        printf("inainte de autoapel, n=%d\n",n);
        rec(n-1);
        printf("dupa autoapel, n=%d\n",n);
    }
    printf("sfarsitul functiei, n=%d\n",n);
    return 0;
}

int main()
{
    rec(5);

    return 0;
}
