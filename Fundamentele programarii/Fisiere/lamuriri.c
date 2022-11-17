#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char *sir;
    sir=(char*)malloc(sizeof(char));
    char *poz;
    gets(sir);
    poz=(char*)malloc(sizeof(char));
    char *d=" ";
    poz=strtok(sir,d);
    char *lung;
    lung=strchr(sir, ' ');
    while(poz!=NULL){
            if((int)strcmp(poz,lung)<0){
                strcpy(lung,poz);
            }
        
        poz=strtok(NULL,d);
    }
    printf("%s",lung);
    getchar();
 return 0;
}
