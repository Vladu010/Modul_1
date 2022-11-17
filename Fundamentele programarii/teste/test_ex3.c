#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
    //Exercitiul 3 cu switch.
    /*
    int x;
    char o;
    printf("Introducem numarul : ");
    scanf("%d", &x);
    getchar();
    
    printf("Alegem caracterul :");
    scanf("%c",&o);
    getchar();

    switch(o){
    case'x':{printf("Restul dintre x si 10 este : %d", x%10);break;}
    case'y':{printf("Catul impartirii dintre x si 10 este : %d", x/10);break;}
    case'z':{
        if(((int)x%10)%2==0){
            printf("%d este cifra para",x % 10);
        }
        else {printf("%d este cifra impara", x %10);}
        break;
    }
    default:printf("Eroare caracter");
}
    getchar();
    
    
    */
   //Exercitiul 2.

    int a, b , sum , min ;
    printf("Introducem numarul : ");
    scanf("%d", &a);
    printf("Introducem numarul : ");
    scanf("%d", &b);
    sum=a+b;
    if(a>b){min=a-b;
    }
    else{min=b-a;}
    if(sum%min==0){
        printf("Suma numerelor este divizibila cu diferenta lor");
    }
    else{
        printf("Suma numerelor nu este divizibila cu diferenta lor");
    }
    getchar;

return 0;

}