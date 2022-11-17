#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void convfloattobinary(float numar, char* formabinara)
{
	unsigned masca = 1 << 8 * sizeof(numar) - 1;//1 este sub MSB
	for (int i = 8 * sizeof(numar)-1; i>=0;--i) {
		char bit;
		if ((masca & (*((unsigned*)&numar))) == 0) bit = '0';
		             //numarul float considerat ca un unsigned 
		else bit = '1';
		formabinara[8 * sizeof(numar)-1-i] = bit;
		masca = masca >> 1;
	}
	formabinara[8 * sizeof(numar)] = '\0';//dupa ultimul bit char '0' sau '1' se inchide sirul \0
										//se pune terminatorul de siruri
}
void binstrtohex(char* binarray) {
	for (int i = 0; i < strlen(binarray); i += 4) {
		char group4[5];
		strncpy(group4, binarray + i, 4);
		group4[4] = '\0';
		if (strcmp(group4, "0000") == 0)
			printf("0");
		else if (strcmp(group4, "0001") == 0)
			printf("1");
		else if (strcmp(group4, "0010") == 0)
			printf("2");
		else if (strcmp(group4, "0011") == 0)
			printf("3");
		else if (strcmp(group4, "0100") == 0)
			printf("4");
		else if (strcmp(group4, "0101") == 0)
			printf("5");
		else if (strcmp(group4, "0110") == 0)
			printf("6");
		else if (strcmp(group4, "0111") == 0)
			printf("7");
		else if (strcmp(group4, "1000") == 0)
			printf("8");
		else if (strcmp(group4, "1001") == 0)
			printf("9");
		else if (strcmp(group4, "1010") == 0)
			printf("A");
		else if (strcmp(group4, "1011") == 0)
			printf("B");
		else if (strcmp(group4, "1100") == 0)
			printf("C");
		else if (strcmp(group4, "1101") == 0)
			printf("D");
		else if (strcmp(group4, "1110") == 0)
			printf("E");
		else if (strcmp(group4, "1111") == 0)
			printf("F");
	}
}

int main()
{
	float numar; //4 bytes=32biti
	printf("numar=");
	scanf("%f", &numar);
	unsigned short nrbiti = 8 * sizeof(numar);
	char* formabinara = (char*)malloc(nrbiti+1*sizeof(char)); //101010010101..111.10
	convfloattobinary(numar, formabinara);
	printf("Forma binara=%s", formabinara);
	printf("\n Valoare in hexa:");
	binstrtohex(formabinara);
	printf("\n");
	//TEMA de convertit un double in binar pt. AVANSATI
        system("pause");
        return 0;