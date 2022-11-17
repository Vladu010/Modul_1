#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void convbinary(unsigned short numar, char* formabinara)
{
	unsigned masca = 1 << 8 * sizeof(numar) - 1;//1 este sub MSB
	for (int i = 8 * sizeof(numar) - 1; i >= 0; --i) {
		char bit;
		if ((masca & numar) == 0) bit = '0';
		//numarul float considerat ca un unsigned 
		else bit = '1';
		formabinara[8 * sizeof(numar) - 1-i] = bit;
		//formabinara[i] = bit;
		masca = masca >> 1;
	}
	formabinara[8 * sizeof(numar)] = '\0';//dupa ultimul bit char '0' sau '1' se inchide sirul \0
										  //se pune terminatorul de siruri
}
int main()
{
	unsigned short nr1 = 0;
	unsigned masca = 1 << sizeof(short) * 8 - 1;
	for (int i = 15; i >= 0; i=i-2) {
		//setare fiecare al doilea bit
		nr1 = nr1|masca;
		masca=masca >> 2;
	}
	unsigned nr2 = nr1 >> 1;
	char* formabinara = (char*)malloc(sizeof(short)*8 + 1 * sizeof(char));
	while (!_kbhit()) {
		convbinary(nr1, formabinara);
		printf("%s\n", formabinara);
		Sleep(1000);
		system("cls");
		convbinary(nr2, formabinara);
		printf("%s\n", formabinara);
		Sleep(1000);
		system("cls");
	}
	

	system("pause");
	return 0;
}