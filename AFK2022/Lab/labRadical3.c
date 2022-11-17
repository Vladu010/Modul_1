/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float abso(float a){
    if(a>=0){
        return a;
    }
    else{
        return -a;
    }
}

float radical3(float a, float eps){
    float r1=1, r2=1;
    do{
        r1=r2;
        r2=(2*r1+a/(r1*r1))/3;
    }while (abso(r2-r1)>=eps);
    return r2;
}





int main()
{
    printf("Hello World\n");
    
    float x=9;
    printf("Radical din 9 este: %.8f",radical3(x,0.00000001));
    

    return 0;
}
