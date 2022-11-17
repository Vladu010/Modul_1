#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int n=0 , n1=0 ,x, i ,g=0;
    int *v;

    printf("Capacitatea vectorului :");
    scanf("%d",&n);
    getchar();

    for(int i=0;i<=n-1;i++){
        printf("v[%d] :",i);
        scanf("%d",&n1);
        v[i]=n1;
    }

    printf("Numarul cautat : ");
    scanf("%d",&x);

    for(i=0; i < n && g == 0; i++){
        if(*v == x){
            g = 1;
            printf("Prima aparitie este pe pozitia: %d\n", i+1);
        }}
    
    if(g){
        g = 0;
        for(i=n-1; i >= 0 && g == 0; i--){
        if(*v == x){
            g = 1;
            printf("Ultima aparitie este pe pozitia: %d\n", i+1);
        }}
    }
    else
        printf("Nu a fost gasit!");


    return 0;
}