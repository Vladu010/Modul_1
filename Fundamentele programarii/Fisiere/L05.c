#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
#include<time.h>

int main(){

// WHile
//Exercitiul 1.

/*
    unsigned int i=0, n;
    printf("Introducem n : ");
    scanf("%d", &n);
    getchar();
  while (i <= n){
        printf("%d ", i);
        i++;
    }
    getchar();
/*
    do{printf("%d ", i);
        i++;}
        while(i<=n);

/*
    for(i=0;i<=n;++i){
        printf("%d ", i);
        }


*/


//Exercitiul 2.
/*
    unsigned int i=0, n=255;
    getchar();
/*
    while (i <= n){
        printf("%c ", i);
        i++;
    }
/*

    do{printf("%c ", i);
        i++;}
        while(i<=n);

/*

    for(i=0; i<=n;++i){
        printf("%c ", i);
        }

    getchar();

*/

/*
// Exercitiul 3.

    unsigned int produs=1,sum=0, i=1,n;
    printf("Introducem n : ");
    scanf("%d", &n);
    getchar();

    while (i <= n){
        sum=sum+i;
        produs=produs*i;
        ++i;  
    }


    do
    {   sum=sum+i;
        produs=produs*i;
        ++i;
    }
       while(i <= n);


    for(i=1;i<=n;++i){
        sum=sum+i;
        produs=produs*i;
        }


    printf("suma este : %u\n", sum);
    printf("produsul este : %u", produs);
    getchar();
*/

/*
//Exercitiul 4.

    unsigned int i=1000,n;
    printf("Se citeste numarul : ");
    scanf("%u",&n);

/*
    while(i <= 9999){
        if((i % n)==0){printf("%d  ", i);
        }
        ++i;
    }


    do{
        if((i % n) == 0){printf("%d ", i);
        }
        ++i;
    }
        while(i <= 9999);


    for(i = 1000; i <= 9999; ++i){
        if((i % n) == 0){printf("%d ", i);
        }
        ++i;

    }



    getchar();



//Exerciutiul 5.

    int n,i,fact=1;
    printf("n = ");
    scanf("%d", &n);
    getchar();
    for(i=2; i<=n ;++i){
        fact*=i;
    }
    printf("n! = %d", fact);




//Exercitiul 6.

    unsigned int a , b , i , ab=1;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    getchar();
    for(i=1; i<=b ;++i){
        ab*=a;
    }
    printf("a ^ b = %d",ab);


//Exercitiul 7.

    int n , m , i ;
    printf("n=");
    scanf("%u", &n);
    printf("m=");
    scanf("%u", &m);

    for(i=10000; i<=99999; i++)
        if((i % n == 0) && (i % m == 0))
            printf("%d ", i);

    getchar();
    

//Exercitiul 8.

    int n , i , j ;
    printf("n=");
    scanf("%u", &n);

    for(i=1 ; i<=n; ++i){
        for(j=1 ; j<=i; ++j){
            printf("%d ", j);
        }
        printf("\n");
    }
    getchar();

//Exercitiul 9.

    int x, n, c=0, i;
    float e, p, fact;

    printf("x=");
    scanf("%d", &x);
    printf("n=");
    scanf("%d", &n);

    while(c <= n){
        fact = 1;
        for(i=1; i<=c; i++)
            fact = fact * i;

        p = 1;
        for(i=1; i<=c; i++)
            p = p * x;

        c++;
        e += p / fact;
    }

    printf("%f", e);

    getchar();
    getchar();


//Exercitiul 10.
    int n , a , b ;
    printf("n=");
    scanf("%d", &n);
    
    if(a*a+b*b==n*n){
        for(a=1; a<=n ; a++){
            for(b=1; b<=n; b++){
            printf("%d si %d \n", a ,b);
            }
        
            
        }
    }
    else{
        printf("%d nu are numere pitagorice",n);
        }
    
    getchar();





//Exercitiul 11.

    unsigned  n, s; 
    srand(time(NULL));
    n = rand() % 32677;
    printf("n = %u\n", n);

    while(n>0){
        s += n % 10;
        n /= 10;
    }

    printf("Suma cifrelor este: %u\n", s);

    getchar();
    getchar();


//Exercitiul 12.


    int n,m=0;
    int lower = 5000, upper = 9999;
    srand(time(NULL));
    n=(rand() % (upper-lower+1)) + lower;
    printf("%d", n);
    getchar();
    while( n > 0 ){
    m = m * 10 + n % 10;
    n = n/10;
    }
    printf("\n%d", m);



//Exercitiul 14.


    int n, i=1 , suma , nr1=0 ,nr2=1;
    printf("n = ");
    scanf("%d", &n );
    while( i < n ){
        suma=nr1+nr2;
        nr1=nr2;
        nr2=suma;
        ++i;
    }
    printf("%d ", suma );




//Exercitiul 15.

    unsigned a, b, x, y;
    printf("a=");
    scanf("%u", &a);
    printf("b=");
    scanf("%u", &b);
    x=a;
    y=b;
    while(x!=y){
        if(x>y)
            x=x-y;
        else
            y=y-x;
    }

    printf("cmmdc este: %u\n", x);
    printf("cmmmc este: %u\n", (a*b) / x);

    getchar();
    getchar();

 //exercitiul 16.

    unsigned n, b, p=1;
    printf("n=");
    scanf("%u", &n);
    while(n > 0){
        b += (n % 2) * p;
        p *= 10;
        n /= 2;
    }
    printf("%u", b);
    getchar();
    getchar();



//Exercitiul 17.

    unsigned n, b, p=1;
    printf("b=");
    scanf("%u", &b);
    while(b > 0){
        n += (b%10) * p;
        p *= 2;
        b /= 10;
    }
    printf("%u", n);
    getchar();
    getchar();

*/

//Exercitiul 18.

    int n, nr, b, v[30], i, l;

    printf("n=");
    scanf("%d", &n);
    printf("baza=");
    scanf("%d", &b);

    while(n>0){
        v[l++] = n % b;
        n /= b;  
    }

    for(i=l-1; i>=0; i--){
        switch(v[i]){
            case 10: printf("A"); break;
            case 11: printf("B"); break;
            case 12: printf("C"); break;
            case 13: printf("D"); break;
            case 14: printf("E"); break;
            case 15: printf("F"); break;
            case 16: printf("G"); break;
            case 17: printf("H"); break;
            case 18: printf("I"); break;
            case 19: printf("J"); break;
            case 20: printf("K"); break;
            case 21: printf("L"); break;
            case 22: printf("M"); break;
            case 23: printf("N"); break;
            case 24: printf("O"); break;
            case 25: printf("P"); break;
            case 26: printf("Q"); break;
            case 27: printf("R"); break;
            case 28: printf("S"); break;
            case 29: printf("T"); break;
            case 30: printf("U"); break;
            case 31: printf("V"); break;
            case 32: printf("W"); break;
            case 33: printf("X"); break;
            case 34: printf("Y"); break;
            case 35: printf("Z"); break;
            
            default: printf("%d", v[i]);
        }
    }
        

    getchar();
    getchar();

/*

//Exercitiul 19.

    int a, b, i;

    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);

    for(i=2; i<=a && i<=b; i++)
        while((a%i == 0) && (b%i == 0)){
            a /= i;
            b /= i;
        }
    
    printf("\na=%d\nb=%d", a, b);
    getchar();
    getchar();


//Exercitiul 21.


    int s, k;

    printf("Suma este: ");
    scanf("%d", &s);

    while(s >= 100){
        s -= 100;
        k++;
    }
    while(s >= 50){
        s -= 50;
        k++;
    }
    while(s >= 10){
        s -= 10;
        k++;
    }
    while(s >= 5){
        s -= 5;
        k++;
    }
    if(s>0) k++; // pt suma < 5

    printf("Numarul minim de bancnote este: %d", k);
    getchar();
    getchar();



//Exercitiul 22.

    int n, a, b, c, d, i;
    printf("Introduceti un nr de 4 cifre: ");
    scanf("%d", &n);
    a = n/1000;
    b = n/100 % 10;
    c = n/10 % 10;
    d = n % 10;

    printf("%d%d%d%d\n", a, b, c, d);
    printf("%d%d%d%d\n", a, b, d, c);
    printf("%d%d%d%d\n", a, c, b, d);
    printf("%d%d%d%d\n", a, c, d, b);
    printf("%d%d%d%d\n", a, d, b, c);
    printf("%d%d%d%d\n", a, d, c, b);
    printf("\n");
    printf("%d%d%d%d\n", b, a, c, d);
    printf("%d%d%d%d\n", b, a, d, c);
    printf("%d%d%d%d\n", b, c, a, d);
    printf("%d%d%d%d\n", b, c, d, a);
    printf("%d%d%d%d\n", b, d, a, c);
    printf("%d%d%d%d\n", b, d, c, a);
    printf("\n");
    printf("%d%d%d%d\n", c, a, b, d);
    printf("%d%d%d%d\n", c, a, d, b);
    printf("%d%d%d%d\n", c, b, a, d);
    printf("%d%d%d%d\n", c, b, d, a);
    printf("%d%d%d%d\n", c, d, a, b);
    printf("%d%d%d%d\n", c, d, b, a);
    printf("\n");
    printf("%d%d%d%d\n", d, a, b, c);
    printf("%d%d%d%d\n", d, a, c, b);
    printf("%d%d%d%d\n", d, b, a, c);
    printf("%d%d%d%d\n", d, b, c, a);
    printf("%d%d%d%d\n", d, c, a, b);
    printf("%d%d%d%d\n", d, c, b, a);

    getchar();
    getchar();

*/

    return 0;



}