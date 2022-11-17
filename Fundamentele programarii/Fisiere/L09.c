#include <stdio.h>
#include <string.h>


/*
//Exercitiul 1.
char s[256];
int i, v[127];

int main(){

    printf("Introduceti o propozitie:\n");
    gets(s);
    for(i=0; i<strlen(s); i++){
        v[s[i]]++;
    }

    for(i=65; i<=90; i++){
        if(v[i] != 0)
            if(v[i] == 1)
                printf("Caracterul %c apare 1 data\n", i);
            else
                printf("Caracterul %c apare de %d ori\n", i, v[i]);
    }

    for(i=97; i<=122; i++){
        if(v[i] != 0)
            if(v[i] == 1)
                printf("Caracterul %c apare 1 data\n", i);
            else
                printf("Caracterul %c apare de %d ori\n", i, v[i]);
    }

    if(v[32] != 0)
        printf("Caracterul spatiu apare de %d ori", v[32]);

    getchar();
    getchar();


//Exercitiul 2.

char s[256];
int i, j, ok=1;

int verif(char a, char b){
    int oktemp;
    if((a == b) || ((char)(a + 32) == b) || (a == (char)(b + 32)))
        oktemp = 1;
    else
        oktemp = 0;
    return oktemp;
}

int main(){
    printf("Introduceti o propozitie:\n");
    gets(s);

    i=0; j=strlen(s)-1;
    while(i<=j){
        if(s[i] == ' ') i++;
        if(s[j] == ' ') j--;
        if(verif(s[i], s[j]) == 0){
            ok=0; 
        }
        i++;
        j--;
    }

    if(ok)
        printf("palindrom");
    else 
        printf("nu este palindrom");

    getchar();
    getchar();


//Exercitiul 3.

char n1[51], n2[51];
int i, j, k, s[52], m, carry;

int main(){
    printf("n1=");
    scanf("%s", n1);
    printf("n2=");
    scanf("%s", n2);

    m = ((strlen(n1) > strlen(n2))? strlen(n1) : strlen(n2));

    i = strlen(n1) - 1;
    j = strlen(n2) - 1;
    for(k=0; k<m && (i>=0 || j>=0); k++){
        if(i>=0) s[m-k-1] += n1[i] - 48;
        if(j>=0) s[m-k-1] += n2[j] - 48;
        if(carry == 1){
            s[m-k-1]++;
            carry=0;
        }
        if(s[m-k-1] >= 10){
            s[m-k-1] -= 10;
            carry = 1;
        }
        i--; j--;
    }

    printf("Numarul rezultat este: ");
    if(carry == 1)
        printf("1");
    for(i=0; i<m; i++)
        printf("%d", s[i]);

    getchar();
    getchar();

//Exercitiul 4.

char s1[101], s2[101];
int i, j;

int main(){
    printf("s1 = ");
    scanf("%s", s1);
    printf("s2 = ");
    scanf("%s", s2);

    for(i=0; i<strlen(s1); i++){
        for(j=1; j<=s2[i] - 48; j++)
            printf("%c", s1[i]);
    }

    getchar();
    getchar();



//Exercitiul 5.

char s[256], r[256];
int nr, p1, p2, i, j, poz, ok, k;

int main(){
    printf("Introduceti un sir:\n");
    gets(s);

    for(i=0; i<strlen(s); i++){
        if(strchr("1234567890", s[i]) == NULL)
            r[k++] = s[i];
        else{
            //printf("%d %c\n", s[i], s[i]);
            if((i == 0) || (strchr("1234567890", s[i-1]) == NULL))
                p1 = p2 = i;
                
            if((i == strlen(s)-1) || (strchr("1234567890", s[i+1]) == NULL)){
                p2 = i;
                //printf("%d %d   ", p1, p2);
                poz = 1;
                nr = 0;
                for(j=p2; j>=p1; j--){
                    nr += poz * (s[j] - 48);
                    poz *= 10;
                }
                //printf("%d\n", nr);
                for(j=0; j<nr; j++){
                    r[k++] = '*';
                }
            }
        }
    }
    r[k] = '\0';

    printf("\n%s", r);

    getchar();


//Exercitiu 6.

char s[256], cuv[128][256], *p, nrcuv, i, j;

int main(){
    printf("Introduceti o fraza:\n");
    gets(s);//int a;

    p = strtok(s, " .,;!?");
    while(p != NULL){
        //printf("\n%s", p);
        strcpy(cuv[nrcuv], p);
        p = strtok(NULL, " .,;!?"); 
        // se pune null pt continuarea lui strtok in s 
        nrcuv++;
    }

    for(i=0; i<nrcuv; i++){
        for(j=strlen(cuv[i])-1; j>=0; j--)
            printf("%c", cuv[i][j]);
        printf(" ");
    }

    getchar();
    getchar();


//Exercitiul 7.

char s1[256], cuv[128][256], *p;
int i, j, nrcuv, k[128], verif[128];

int main(){
    printf("s1: ");
    gets(s1);

    p = strtok(s1, " .,;!?");
    while(p != NULL){
        strcpy(cuv[nrcuv], p);
        nrcuv++;
        p = strtok(NULL, " .,;!?");
    }

    for(i=0; i<nrcuv-1; i++){
        //printf("%s\n", cuv[i]);
        if(verif[i] == 0){
            k[i] = 1;
            for(j=i+1; j<nrcuv; j++){
                if(strcmp(cuv[i], cuv[j]) == 0){
                    verif[j] = 1;
                    k[i]++;
                }
            }
        }
    }
    
    for(i=0; i<nrcuv; i++){
        if(verif[i] == 0){
            printf("\nCuvantul \"%s\" apare de %d ori", cuv[i], k[i]);
        }
    }

    getchar();

//Exercitiul 8.

char s1[256], s2[256], cuv[128][256], *p;
int i, nrcuv;

int main(){
    printf("s1: ");
    gets(s1);
    printf("s2: ");
    gets(s2);

    p = strtok(s1, " .,;!?");
    while(p != NULL){
        strcpy(cuv[nrcuv], p);
        nrcuv++;
        p = strtok(NULL, " .,;!?");
    }

    printf("Cuvintele comune sunt:\n");
    for(i=0; i<nrcuv; i++){
        //printf("%s\n", cuv[i]);
        if(strstr(s2, cuv[i]) != NULL)
            printf("%s, ", cuv[i]);
    }
    printf("\b\b");

    getchar();


//Exercitiul 9.

char s[256], c[256], *p;
int i, d;

int main(){
    printf("Introduceti un sir:\n");
    gets(s);
    printf("Introduceti un subsir:\n");
    gets(c);

    p = strstr(s, c);
    if(p != NULL){
        d = p - s;
        printf("Prima aparitie: %d\n", d);
        p = strstr(s + d + strlen(c), c);
        while(p != NULL){
            d = p - s;
            p = strstr(s + d + strlen(c), c);
        }
        printf("Ultima aparitie: %d\n", d);
    }
    else 
        printf("Nu a fost gasit!\n");

    getchar();
*/

//Exercitiul 10.

char s[256], l, j;

void codificare(){
    int i=0;
    while(i < strlen(s)){
        if(strchr("aeiou", s[i]) != NULL){
            l=strlen(s)+2;
            j=l;
            while(j>i+2){
                s[j] = s[j-2];
                j--;
            }
            s[l] = '\0';
            s[i+1] = 'p';
            s[i+2] = s[i];
            i+=3;
        }
        else
            i++;
        //printf("%s\n", s);
    }
}

void decodificare(){
    int i=0;
    while(i < strlen(s)){
        if(strchr("aeiou", s[i]) != NULL){
            l=strlen(s);
            strcpy(s+i+1, s+i+3);
            s[l-2] = '\0';
        }
        i++;
    }

}

int main(){
    printf("Introduceti un sir:\n");
    gets(s);

    //printf("%s\n", s);
    codificare();
    printf("%s\n", s);
    decodificare();
    printf("%s\n", s);

    getchar();

    return 0;
}