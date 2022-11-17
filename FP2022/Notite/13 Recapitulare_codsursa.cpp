#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<time.h>
/*
int main() //debugging -> rularea unei probleme pas cu pas
{
	int n;
	printf("n=");
	scanf("%d", &n);
	int i;
	long suma = 0; //break point -> punct de oprire
	for (i = 1; i <= n; ++i) {
		suma = suma + i;
	}
	printf("%ld", suma);
	system("pause");
	return 0;
}
*/
/*
int main() {
	rand(time(NULL));
	int n,m,i,j,lim1,lim2;
	printf("n=");
	scanf("%d", &n);
	printf("m=");
	scanf("%d", &m);
	printf("lim1=");
	scanf("%d", &lim1);
	printf("lim2=");
	scanf("%d", &lim2);
	int **a;
	a = (int**)malloc(n * sizeof(int*));
	for (i = 0; i < n; ++i) {
		a[i] = (int*)malloc(m * sizeof(int));
	}
	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j)
			a[i][j] = rand() % (lim2 - lim1 + 1) + lim1;
	}
	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	for (i = 0; i < m; ++i)
		printf("%d ", a[0][i]);//prima linie
	for (i = 1; i < n-1; ++i)
		printf("%d ", a[i][m - 1]);//ultima col.
	for (i = m-1; i >=0; --i)
		printf("%d ", a[n-1][i]); //ultima linie
	for (i = n-2; i >=1; --i)
		printf("%d ", a[i][0]);//0-a (prima) col.
	for (i = 0; i < n; ++i) free(a[i]);
	free(a);
	system("pause");
	return 0;
}
*/
/*
Lab9-Ex1
int main() {
	unsigned short tablitere[256] = { 0 };
	char sir[1000];
	puts("Dati un sir format din mai multe cuvinte: ");
	gets_s(sir);
	for (int i = 0; i<strlen(sir); ++i)
		tablitere[sir[i]]++;
	for (int i = 0; i<256; ++i)
		if(tablitere[i]!=0)
		{
			printf("%c a aparut de %hu ori\n",i, tablitere[i]);
		}
	system("pause");
	return 0;
}
*/

int main() {
	//Lab9-Ex5
	//se citeste sirul
	//se traverseaza sirul daca pe poz i este cifra si pe pozitia i+1 e tot cifra
	//se alcatuieste vectorul de cifre ==> se termina vect. daca suntem la o poz i, i+1 alt ceva
	//se sterge numarul -> se alcauiteste nr. de st. --> se insereaza stelutele
	char sir[100], sirnumar[10];
	puts("Dati sirul");
	gets_s(sir);
	char rez[1000] = "";
	unsigned i = 0, k, pozincep, pozsf;
	while (sir[i] != '\0')
	{
		if (sir[i] >= '0' && sir[i] <= '9') //daca poz curenta contine cifra
		{
			if (sir[i + 1] >= '0' && sir[i + 1] <= '9')//urm alta cifra
			{
				sirnumar[k] = sir[i]; k++;
			}
			else //urm. alta litera(non-cifra)
			{
				sirnumar[k] = sir[i];//cifra
				//sir[i+1] litera
				k++;
				sirnumar[k] = '\0';
				pozsf = i;
				//printf("Pozsf numar %u ", pozsf);
				//se sterge numarul [pozincep, pozsf]
				strcpy(sir + pozincep, sir + pozsf+1);//aici se pune +1, pozsf este poz ultimei cifre, +1 se refera la ceea ce este dupa numar
				//se insereaza ******
				//cum alc. 12 stelute
				int nrst = atoi(sirnumar); //"12\0"=> 12
				char stelute[100];
				memset(stelute, '*', nrst);
				stelute[nrst] = '\0'; //"*******\0"
				//se insereaza in sir 
				memcpy(sir + pozincep + strlen(stelute), sir + pozincep, strlen(sir) - pozincep + 1);//se pune +1 ca sa se copieze si \0
				memcpy(sir + pozincep, stelute, strlen(stelute));
				i = i - (pozsf - pozincep) + strlen(stelute);
				
				//in loc de inserare se pune in rez
				/*strncpy(rez, sir, pozincep);
				strcat(rez, stelute);
				strcat(rez, sir + pozincep+1);
				i = i - (pozsf - pozincep)+ strlen(stelute);//intre paranteze
				strcpy(sir, rez);//rezultatul se copiaza inapoi in sirul initial
				*/
			}
		}
		else
		{//non-cifra
			if (sir[i + 1] >= '0' && sir[i + 1] <= '9')
			{
				k = 0;
				pozincep = i + 1;
				//printf("Pozinc numar %u\n", pozincep);

			}
		}

		++i;
	}
	printf("%s\n", sir);
	system("pause");
	return 0;
}