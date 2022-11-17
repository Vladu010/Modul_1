#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){

// // Exercitiul 1.

//     printf("C++ // is standardized by the // International Organization for Standardization (ISO),\n\nwith the latest standard version ratified and published by ISO in\n\n//\\\\\t//\\\\\tDecember 2020\t//\\\\\t//\\\\");

//     getchar();
//     getchar();
//     getchar();



// //Exercitiul 3.

//     int x;
//     char o;
//     printf("Introducem numarul : ");
//     scanf("%d", &x);
//     getchar();
    
//     printf("Alegem caracterul :");
//     scanf("%c",&o);
//     getchar();

//     if( o == 'x'){printf("Restul dintre x si 10 este : %d", x%10);}
//     if( o == 'y'){printf("Catul impartirii dintre x si 10 este : %d", x/10);}
//     if( o == 'z'){
//         if((x%10)%2==0){
//             printf("%d este cifra para",x % 10);
//         }
//         else {printf("%d este cifra impara", x %10);}
//     }
//     getchar();



// //Exercitiul 4.

//     int i, x , y=0 , z , comp=0;

//     printf("Introducem numarul : ");
//     scanf("%d",&x);
//     z=x;
//     getchar();
//     while(x!=0){
//         y=y*10+x%10;
//         x=x/10;
//     }
//     printf("Inversul numarului %d este %d\n",z,y);

//     for(i=2;i<=sqrt(z);i++){
//         if((z % i)==0){
//             comp=comp+1;
//         }
        
//     }
//     if(comp==0){
//         printf("Numarul %d  este prim",z);
//     }
//     else {
//         printf("Numarul %d nu este prim",z);
//     }
// getchar();





//Exercitiul 5.

    int i , j , n;
    printf("Introducem numarul : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*\t");
        }
        printf("\n");
    }
    for(i=n;i>=0;i--){
        for(j=1;j<=i;j++){
            printf("*\t");
        }
        printf("\n");
    }

    getchar();


return 0;

}