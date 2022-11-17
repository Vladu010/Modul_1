#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<string.h>
int main() {
	//Ex4/L09
	char sircif[100], sircaract[100], rezultat[255];
	//citire siruri
	//gets_s(sircif); gets_s(sircaract);
	strcpy(sircif, "5123");
	strcpy(sircaract, "abcd");
	//citiri sircif, sircaract
	//se trece prin amble siruri "5123" "abcd"
	/*//varianta1
	int k = 0;
	for (int i = 0; i < strlen(sircif); ++i) {
		//sircif[i] //cifra 5
		//sircaract[i] //caracterul a
			//trebuie repetat de 5 ori caracterul a si se copiaza in rez.
								//sircif de ori
		for (int j = 0; j < sircif[i]-'0'; ++j)
		//for (int j = 0; j < int(sircif[i]) -48; ++j)
		{
			rezultat[k] = sircaract[i];
			k++;
		}
	}
	rezultat[k] = '\0';
	printf("%s\n", rezultat);*/
	/*
	char caractcopiat[10];
	strcpy(rezultat, ""); //rezultat=""
	for (int i = 0; i < strlen(sircif); ++i)
	{
		//copiere caracter de sircif[i]-'0'-ori
		memset(caractcopiat, sircaract[i], sircif[i] - '0');
		//aaaaa, bbbbbbbbb
		caractcopiat[sircif[i] - '0'] = '\0';
		strcat(rezultat, caractcopiat); //rezultat="aaaaabbbbbbbbb"
	}
	printf("%s\n", rezultat);
	*/
	//sa se mute sirul incepand cu caracterul i+1 la dreapta cu 
	//sircif[i]-'0 '-1-ori, apoi se alc. sircif[i]-'0 '-1 buc. caracterul respectiv
	//si se insereaza pe pozitie
	//abcd  -> a----bcd -> aaaa -> aaaaabcd
	//varianta3
	for (int i = 0,j=0; i < strlen(sircaract); ++i,++j)
	{
		char caractcopiat[10];
		unsigned nr = (sircif[j] - '0');
		memmove(sircaract + i + nr, sircaract + i+1, strlen(sircaract) - i);
		memset(caractcopiat, sircaract[i], nr-1);
		memcpy(sircaract + i + 1, caractcopiat, nr-1);
		i += (nr-1);
		
	}
	printf("%s\n", sircaract);
	system("pause");
	return 0;
}