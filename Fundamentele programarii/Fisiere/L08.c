#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <windows.h>

void binar(unsigned short numar, bool t[])
{
	int nrbiti = sizeof(numar) * 8;
	unsigned short masca = 1<<(nrbiti-1); 
	for (int i = nrbiti - 1; i >= 0; --i) {
		if ((numar & masca) == 0)
			t[nrbiti - 1 - i] = 0;
		else t[nrbiti - 1 - i] = 1;
		masca = masca >> 1;
	}
	//afisare sir de 0 si 1
	for (int i = 0; i < nrbiti; ++i)
		if (t[i] == 0)
			printf("%d", 0);
		else printf("%d", 1);
}



/*
int main(){

//Exercitiul 1.
    unsigned short x, mask, a;

    printf("x=");
    scanf("%hu",&x);

    mask = 1 << 3;
    printf("Valoarea bitului 3 :%hu\n",(((x & mask) == 0)? 0 : 1) );
    mask = 1 ;
    printf("Valoarea bitului de paritate :%hu\n",(((x & mask) == 0)? 0 : 1) );
    mask = ~(1 << 2);
    printf("Numarul rezultat dupa resetarea bitului 2: %hu\n", x & mask);

    mask = 1 << 4;
    printf("Numarul rezultat dupa setarea bitului 4: %hu\n", x | mask);

    getchar();
    getchar();

//Exercitiul 2.

    char n, i;
    int nr, poz=1;

    int main(){
    
    printf("n=");
    scanf("%hd", &n);

    for(i=1; i<8; i++){
        nr = nr + poz * (n % 2);
        poz *= 10;
        n = n >> 1;
    }

    printf("%hd", nr);

//Exercitiul 3.

    int n , mask;

int main(){

    printf("n=");
    scanf("%d",&n);

    mask = 1 << 2;
    if((n & mask) != 0){
        mask = 1 << 5;
        printf("Numarul rezultat dupa setarea bitului 5: %d\n", n | mask);
    }
    else{mask = 1 << 7;
        printf("Numarul rezultat dupa setarea bitului 7: %d\n", n & (~ mask));}

    getchar();

//Exercitiul 4.

    unsigned n;
    unsigned char m;

int main(){
    
    printf("n=");
    scanf("%u",&n);

    printf("m=");
    scanf("%hu",&m);

    n = n | (1 << m);
    n = n & (~(1 << (32 - m)));

        
    printf("%d", &n);

    getchar();
    getchar();


//Exercitiul 5.


void binar(unsigned short numar, bool t[])
{
	int nrbiti = sizeof(numar) * 8;
	unsigned short masca = 1<<(nrbiti-1); 
	for (int i = nrbiti - 1; i >= 0; --i) {
		if ((numar & masca) == 0)
			t[nrbiti - 1 - i] = 0;
		else t[nrbiti - 1 - i] = 1;
		masca = masca >> 1;
	}
	//afisare sir de 0 si 1
	for (int i = 0; i < nrbiti; ++i)
		if (t[i] == 0)
			printf("%d", 0);
		else printf("%d", 1);
}



int main(){


    unsigned short numar;
	bool t_binar[100];
	unsigned short masca;
	int i;
	printf("ne=: ");
	scanf("%hu", &numar);
	
	
	printf("Numarul in bit este: \n");
	binar(numar,t_binar);

	printf("\nInversarea este: \n");
	for (i=(((sizeof(numar)*8)-1)/2);i>-1;--i)
	{
		masca = (1 << i);
		if ((numar & masca) != 0)
		{
			printf("1");
		}
		else{
			printf("0");
			}
		
	}
	for (i=((sizeof(numar)*8)-1);i>(((sizeof(numar)*8)-1)/2);--i)
	{
		masca = (1 << i);
		if ((numar&masca) != 0){ 
			printf("1");
			}
		else {
			printf("0");
		}
	}

//Exercitiul 6.

    int main(){

    double nr;
     t_binar[100];
    unsigned short masca,suma =0;
    int i;

	printf("Introduceti un numar de la tastatura: ");
	scanf("%lu", &nr);     

	
	printf("Numarul binar este: \n");
	binar(nr,t_binar);
	
	

//Eercitiul 7.

    int main(){

    unsigned short n, s;
    
    printf("n=");
    scanf("%hu", &n);

    if((n & (1)) != 0) s++;
    if((n & (1 << 1)) != 0) s++;
    if((n & (1 << 2)) != 0) s++;
    if((n & (1 << 3)) != 0) s++;
    if((n & (1 << 4)) != 0) s++;
    if((n & (1 << 5)) != 0) s++;
    if((n & (1 << 6)) != 0) s++;
    if((n & (1 << 7)) != 0) s++;

    printf("%hu", s);

    getchar();
    getchar();


//Exercitiul 8.
    
    int main(){

    unsigned short n, s;

    printf("n=");
    scanf("%hu", &n);

    if((n & (1)) != 0) s++;
    if((n & (1 << 2)) != 0) s++;
    if((n & (1 << 4)) != 0) s++;
    if((n & (1 << 6)) != 0) s++;

    printf("%hu", s);

    getchar();
    getchar();

	
//Exercitiul 9.
    int main(){

    unsigned short n, s, mask;
    printf("n=");
    scanf("%hu", &n);
    //printf("%hu\n", n);

    if((n & (1 << 1)) == 0) s++;
    if((n & (1 << 3)) == 0) s++;
    if((n & (1 << 5)) == 0) s++;
    if((n & (1 << 7)) == 0) s++;

    printf("%hu", s);

    getchar();
    getchar();


//Exercitiul 10.
    unsigned short n, v[8];

    int main(){

    printf("nr secunde=");
    scanf("%hu", &n);

    v[0] = 1;// vector ca am nevoie de zero-uri
    for(int j=0; j<=7; j++){
        system("cls");
        for(int i=0; i<=7; i++)
            printf("%d", v[i]);
        printf("\n");
        v[j]=0;
        if(j != 7)
            v[j+1] = 1;
        Sleep(n * 1000);
    }

    getchar();
    getchar();


//Exercitiul 11.

    
unsigned short n, v[8];

int main(){
    printf("numar de secunde=");
    scanf("%hu", &n);

    v[0] = v[7] = 1;

    for(int j=0; j<=7; j++){
        system("cls");
        if(j != 4){
            for(int i=0; i<=7; i++) 
                printf("%d", v[i]);
            printf("\n");
        }
        v[j] = 0;
        if(j != 7) 
            v[j+1] = 1;
        v[7-j] = 0;
        if(j != 7)
            v[7-j-1] = 1;
        Sleep(n * 1000);
    }

    getchar();

	return 0;
}*/