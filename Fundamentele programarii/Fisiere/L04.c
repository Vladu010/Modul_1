#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
#define maxim(a, b, c) ((a > b && a > c)?  printf("\nNumarul maxim este a = %d", a) : (b > a && b > c)? printf("\nNumarul maxim este b = %d", b) : printf("\nNumarul maxim este c = %d", c))
#define minim(a, b, c) ((a < b && a < c)?  printf("\nNumarul minim este a = %d", a) : (b < a && b < c)? printf("\nNumarul minim este b = %d", b) : printf("\nNumarul minim este c = %d", c))
#define suma(a, b, c) (printf("suma celor 3 numere este: %d", a+b+c)) 
#define produs(a, b, c) (printf("produsul dintre cele 3 numere este: %d", a*b*c))
#define paritate1(a) (printf("produsul dintre cele 3 numere este: %d", a*b*c))
int main (){
/*
// Exercitiul 1.

    printf("Codul ASCII a caracterului \'a\' este :%d", 'a');
    printf("\nCodul ASCII a caracterului \'A\' este :%d", 'A');
    printf("\nCodul ASCII a caracterului \'z\' este :%d", 'z');
    printf("\nCodul ASCII a caracterului \'Z\' este :%d", 'Z');
    printf("\nCodul ASCII a caracterului \'0\' este :%d", '0');
    printf("\nCodul ASCII a caracterului \'9\' este :%d", '9');
    printf("\nCodul ASCII a caracterului \'.\' este :%d", '.');
    printf("\nCodul ASCII a caracterului \'-\' este :%d", '-');
    printf("\nCodul ASCII a caracterului \'+\' este :%d", '+');
    getchar();

// Exercitiul 2.

    char n;
    
    printf("introduceti litera minuscula: ");
    scanf("%c", &n);

    printf("\ncaracterul majuscula este: ");
    printf("%c", n-32);

    printf("\ncaracterul precedent este: ");
    printf("%c", n-33);

    printf("\ncaracterul anterior este: ");
    printf("%c", n-31);



// Exercitiul 3.

    char c;
    printf("c=");
    scanf("%c", &c );

    if (c > 47 && c <58)
    {
     printf("\nEste numar");
    }
    else if( c == '+' || c == '-' || c == '/' || c == '*')
    {
     printf("\nOperator matematic\n");
    }
     else{
         printf("\neroare");
     }




// Exercitiul 4.

    int a , b , c ;
    char o;

    printf("Se citeste primul nr :");
    scanf ("%d", &a );
    printf("\nSe citeste al doilea nr :");
    scanf ("%d", &b );
    printf("\nSe citeste al treilea nr :");
    scanf ("%d", &c );

    printf("a. Afisare maxim\n");
    printf("b. Afisare minim\n");
    printf("c. Afisare suma\n");
    printf("d. Afisare produs\n");
    printf("e. Afisarea solutiilor ecuatiei de gradul II\n");

    
    getchar();
    printf("\nAlegem optiunea : ");
    scanf("%c", &o);
    
    if( o == 'a'){
        printf("\nSe afiseaza numarul maxim : ");
        if((a > b) && (a > c)){
            printf("%d",a);
        }
        else if((b > a) && (b > c)){
            printf("%d",b);}
        else{printf("%d", c );}
    }
    else if( o == 'b'){
        printf("\nSe afiseaza numarul minim : ");
        if((a < b) && (a < c)){
            printf("%d",a);
        }
        else if((b < a) && (b < c)){
            printf("%d",b);}
        else{printf("%d", c );}
    }
    if( o == 'c'){
        printf("Se afiseaza suma numerelor :%d", a + b + c);
    }
    if( o == 'd'){
        printf("Se afiseaza suma numerelor :%d", a * b * c);
    }
    if( o == 'e'){
          double x1,x2;
        printf ("%dx^2 + %dx + %d = 0\n",a,b,c);
        int d = b * b - 4 * a * c;
        if (d > 0){
            x1 = (-b + sqrt(d))/(2*a);
            x2 = (-b - sqrt(d))/(2*a);
          
            printf("x1=%lf, x2=%lf",x1, x2);
        }
        else if (d == 0){
        x1 = x2 =-b/2*a;
        printf("x1 = x2 =%lf",x1);
        }
        else if (d < 0)
        {
            printf("Radacinile nu sunt reale");
        }
    }



// Exercitiul 5.

    int x , a , b , c , d , e ; 
    printf("Introducem numarul :");
    scanf("%d", &x);
    getchar();
     a = x/10000;
     b = x/1000 - a*10;
     c = x/100 - a*100 - b*10;
     d = x/10 - a*1000 - b*100 - c*10;
     e = x - a * 10000 - b * 1000 - c * 100 - d * 10 ;
     printf("Numarul nou : %d", a * 1000 + b * 100 + d * 10 + e);
     getchar();





// Exercitiul 6.
    
    float f = 0.12345678;
    int n;

    n = (f * 100000000);
    printf("numarul intreg fara zecimale cu tot cu 0 este:0%d",n);
    printf("\nnumarul intreg fara zecimale este:%d",n);
    printf("\nnumarul dupa eliminarea primelor 2 zecimale este:%d",n%1000000);
    printf("\nnumarul dupa eliminarea ultimelor 2 zecimale este:%d",((n%1000000)/100));
    printf("\nnumarul sub forma intreaga este:%d",((n%1000000)/100));
    printf("\nnumarul fara primele doua zecimale si ultimele doua zecimale este:0.%d",((n%1000000)/100));
    
    printf("\nnumarul este:%.4f",((n%1000000)/100)/10000.0);

  


// Exercitiul 7.

    int x , a , b , c , d ; 
    char o;
    printf("Introducem numarul :");
    scanf("%d", &x);
    getchar();
     a = x/1000;
     b = x/100 - a*10;
     c = x/10 - a*100 - b*10;
     d = x - a*1000 - b*100 - c*10;
     getchar();

     printf("a=%d , b=%d , c=%d , d=%d\n ", a , b , c , d);


    printf("a. Afisare paritate ultima cifra\n");
    printf("b. Afisare paritate prima cifra\n");
    printf("c. Afisare suma cifrelor\n");
    printf("d. Afisare numar rezultat dupa inserarea cifrei 0 la mijlocul numarului\n");

     getchar();
    printf("\nAlegem optiunea : ");
    scanf("%c", &o);
    
    if( o == 'a'){
        printf("\nAfisam paritatea ultimei cifra : ");
        if((d % 2)==0) 
            printf("%d este numar par", d );
            else printf("%d este numar impar",d );
    }
    else if( o == 'b'){
        printf("\nAfisam paritatea primei cifra : ");
               if((a % 2)==0) 
            printf("%d este numar par", a );
            else printf("%d este numar impar",a );
     
    }
    if( o == 'c'){
        printf("Se afiseaza suma numerelor :%d", a + b + c + d);
    }
    if( o == 'd'){
        printf("Numarul nou : %d", a * 10000 + b * 1000 + c * 10 + d);
    }





// Exercitiul 8.

    int a;
    printf("Se citeste numarul : ");
    scanf("%d", &a);
    getchar();

    if((a % 2 ) == 0){
        printf("Numarul %d este par\n", a);
    }
        else{
            printf("Numarul %d este impar\n", a);
            }
    if((a % 4 ) == 0){
        printf("Numarul %d este divizibil cu 4\n", a);
        }
        else{ 
            printf("Numarul %d nu este divizibil cu 4\n", a);
            }
    
      if((a % 5 ) == 0){
        printf("Numarul %d este mulltiplu de 5\n", a);
        }
        else{
            printf("Numarul %d nu este multiplu de 5", a);
            }
    
    getchar();

    

// Exercitiul 9.

    int a, b;
    char o;
    printf("Se citeste primul nr :");
    scanf ("%d", &a );
    printf("\nSe citeste al doilea nr :");
    scanf ("%d", &b );

    printf("a. Suma\n");
    printf("b. Produsul\n");
    printf("c. Catul\n");
    printf("d. Restul\n");
    printf("e. Iesire\n");

    
    getchar();
    printf("\nAlegem optiunea : ");
    scanf("%c", &o);

    switch( o ){
        case 'a':{printf("\nSe afiseaza suma numerelor :%d", a + b);break;}
        case 'b':{printf("\nSe afiseaza produsul numerelor :%d", a * b);break;}
        case 'c':{printf("Se afiseaza catul numerelor :%d", a / b);break;}
        case 'd':{printf("Se afiseaza suma numerelor :%d", a % b);break;}
        case 'e':{return 0;break;}
        default :{printf("Ati selectat gresit optiunea");break;}
    }


// Exercitiul 10.

    int a, b, c, d, e, max, min;
    printf("a=");
    scanf("%d ", &a);
    printf("b=");
    scanf("%d ", &b);
    printf("c=");
    scanf("%d ", &c);
    printf("d=");
    scanf("%d ", &d);
    printf("e=");
    scanf("%d ", &e);
    getchar();
    max = a;
    min = a;
    if(max < b){
        max = b;
        }
    if(max < c){
        max = c;
        }
    if(max < d){
        max = d;
        }
    if(max < e){
        max = e;
        }
    if(min > b){
        min = b;
        }
    if(min > c){
        min = c;
        }
    if(min > d){
        min = d;
        }
    if(min > e){
        min = e;
        }
    printf("\nNumarul min : %d", min);
    printf("\nNumarul maxim : %d", max);
    

    

// Exercitiul 11.

    int a , b , c , delta;
    char o;

    printf("Se citeste primul nr :");
    scanf ("%d", &a );
    printf("\nSe citeste al doilea nr :");
    scanf ("%d", &b );
    printf("\nSe citeste al treilea nr :");
    scanf ("%d", &c );

    printf("a. Afisare maxim\n");
    printf("b. Afisare minim\n");
    printf("c. Afisare suma\n");
    printf("d. Afisare produs\n");
    printf("e. Afisarea solutiilor ecuatiei de gradul II\n");

    
    getchar();
    printf("\nAlegem optiunea : ");
    scanf("%c", &o);

    switch( o ){
        case 'a':{maxim(a,b,c);break;}
        case 'b':{minim(a,b,c);break;}
        case 'c':{suma(a,b,c);break;}
        case 'd':{produs(a,b,c);break;}
        case 'e':{
            double x1,x2;
            printf("%dx^2+%dx+%d", a, b, c);
            delta=pow(b,2) - 4 * a *c;
            if(delta>0){
                x1 =(-b + sqrt(delta))/2*a;
                x2 =(-b - sqrt(delta))/2*a;
                printf("\nx1=%lf , x2=%lf", x1, x2);
            }
            if(delta==0){
                x1=x2=-b /2*a;
                printf("\nx1=x2=%lf",x1);
            }
            if(delta<0){printf("\nNu exista solutii reale");}
        }
    }


//Exercitiul 12.


#define paritateu(n) \
    if ((n % 10) % 2 != 0) {printf ("ultima cifra este impara\n");}\
    else {printf ("ultima cifra este para\n");}\

#define paritatep(n) \
    if ((n /1000) % 2 != 0) printf ("prima cifra este impara\n");\
    else printf ("prima cifra este para\n")\

#define suma(n)\
    printf("suma cifrelor este egala cu: %d", (n / 1000) + ((n / 100)%10) + ((n % 100) / 10) + (n % 10))\

#define nr0(n)\
    int m = n / 100 * 1000 + n % 100;\
    printf("\nnumarul cu 0 introdus este:%d",m);\

    
    //Paritateu(x); 
    //f1(x);  //cu void
    //f2(x);   //cu void
    char a,b,c,d,x;
    int n;

    printf("introduceti un numar de 4 cifre: ");
    scanf("%d", &n);
    printf("numarul este : %d",n);

    if (n > 999 && n < 10000)
    {
      
    


    printf("\na. Afisare paritate ultima cifra\n");
    printf("b. Afisare paritate ultima cifra\n");
    printf("c. Afisare suma cifrelor\n");
    printf("d. Afisare nr cu 0 inserat\n");

    getchar();
 
    printf("introduceti litera corespunzatoare operatiei dorite:");
    scanf ("%c",&x);
    getchar();

    switch(x){
        case('a') : {paritateu(n);break;}
        case('b') : {paritatep(n);break;}
        case('c') : {suma(n);break;}
        case('d') : {nr0(n);break;}



    }
    }
    else{
        printf("\nnu ati introdus un nr de 4 cifre");
    }
 


//Exercitiul 14.

char c;
int k=0, st=1, dr=100, lim= 7;


    while(c != '=' || k <=lim){
        printf("Acesta este numarul tau este : %d", (st + dr)/2,"?\n");
        k++;
        scanf("%c", &c);
        getchar();

        switch (c){
            case '<':{
                dr = (st + dr)/2;
            } break;

            case '>':{
                st = (st + dr)/2;
            } break;

            case '=':{
                printf("Numarul a fost ghicit in %d pasi\n", k );
            } break;
        
            default: printf("Caracter invalid.\nCaractere disponibile : <, >, =\n"); break;
        }
    }

    if(k>lim || c != '=')
        printf("Eroare de program\n");

    getchar();



//Exercitiul 15.

int h, m, s, N;

    printf("nr de ore: "); scanf("%d",&h);
    printf("nr de minute :"); scanf("%d",&m);
    printf("nr de secunde: "); scanf("%d",&s);
    printf("%d ore %d minute %d secunde.\n",h ,m ,s);
    printf("nr de secunde care vor fi adaugate: "); scanf("%d",&N);

    s += N;
    while(s >= 60){s -= 60; m++;}
    while(m >= 60){m -= 60; h++;}

    printf(" %d ore, %d minute, %d secunde.\n", h, m , s);

    getchar();
    return 0;
}

*/

