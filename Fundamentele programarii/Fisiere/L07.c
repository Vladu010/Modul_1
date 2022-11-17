#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
#include<time.h>

/*
int main(){
//Exercitiul 1.

//----------------Suma, Produs, Max, Min -----------------------------------------------
    int total=0, n=0, prod=1,j, y, max,aux ,k , min ;
    int *v ,*p;
    printf("Capacitatea vectorului :");
    scanf("%d",&n);
    getchar();
    free(v);

    v = (int*) malloc(n * sizeof(int));

    for(int i=0; i<n; i++){
        printf("v[%d]=", i);
        scanf("%d", v+i);
        total =total + *v;
        prod = prod**v;
    }
    printf("total continut vagoane : %d\n",total);
    printf("Produs continut vagoane : %d\n",prod);
    
    max=*v;
    min=*v;

    for(j=0;j<=n-1;j++){
        if(*(v+j) < min) min = *(v+j);
        if(*(v+j) > max) max = *(v+j);

    }
    printf("\nmax = %d",max);
    printf("\nmin = %d\n",min);

    for(j=0;j<=n-1;j++){
        printf("%d ",*(v+j));
    }
	
//-------------Scoatem vagon-------------------------------------------------------------------------------
    printf("\nscoatem vagonul :");
    scanf("%d",&k);

    for(j=k;j<n-1;j++){
        *(v+j) = *(v+j+1);
    	n--;
    }

	printf("\n\nVectorul cu n=%d este: \n", n);
    for(j=0;j<=n-1;j++){
        printf("%d ",*(v+j));}
	printf("\n\n");
	
//---------------Inseram Vagonul inlocuitor--------------------------------------------------------------

 	printf("\nIntroducem pozitie :");
    scanf("%d",&k);
	printf("\nPrecizati Valoarea inlocuitoare : ");
    scanf("%d",&y);
	v = (int*)realloc(v, (n+1) * sizeof(int));
     for(j=n-1;j>=k;j--){
        *(v+j+1) = *(v+j);
    	n++;
    *(v+k) = y;
    }
		printf("\n\nVectorul cu n=%d este: \n", n);
    for(int i=0; i<n; i++){
		printf("%d ", *(v+i));
		}
    printf("\n");
	
//------------------Permutare la dreapta

    int temp = *(v+1);
    for(int i=n-1; i>0; i--){
        *(v+i) = *(v+i-1);}
    *v = temp;

	printf("\n Permutare la dreapta :");
    *(v-1)=temp;

    for(j=0;j<=n-1;j++){
        printf("%d ",*(v+j));}
	printf("\n\n");
//----------------Permutare la stanga

    
        temp = *v;
    for(int i=0; i<n-1; i++)
        *(v+i) = *(v+i+1);
    *(v+n-1) = temp;

    
    printf("\n Permutare la stanga :");
    *(v-1)=temp;

    for(j=0;j<=n-1;j++){
        printf("%d ",*(v+j));}


//Exercitiul 2.

    int n=0 , m , i , s=0 ,ns=0;
    int *v;

    printf("Capacitatea vectorului :");
    scanf("%d",&n);
    getchar();
    m=n;

	v = (int*) malloc(n * sizeof(int));

    for(int i=0;i<=n-1;i++){
        printf("v[%d] :",i);
        scanf("%d",v+i);
    }
    for(i=0;i<=n-1;i++){
        if(*(v+i)==*(v+n-1-i)){
            s=s+1; 
        }
        else{ns=ns+1;}
        m=m-1;
    }
    if(s!=0 && ns==0){printf("sir simetric");}
    else{printf("sir nesimetric");}

    getchar();    


//Exercitiul 3.

    int n=0 ,x, i ,g=0;
    int *v;

    printf("Capacitatea vectorului :");
    scanf("%d",&n);

	v = (int*) malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        printf("v[%d] :",i);
        scanf("%d", v+i);
    }

    printf("Numarul cautat : ");
    scanf("%d",&x);

    for(i=0; i < n && g == 0; i++){
        if(*(v+i) == x){
            g = 1;
            printf("Prima aparitie este pe pozitia: %d\n", i+1);
        }}
    
    if(g){
        g = 0;
        for(i=n-1; i >= 0 && g == 0; i--){
        if(*(v+i) == x){
            g = 1;
            printf("Ultima aparitie este pe pozitia: %d\n", i+1);
        }}
    }
    else
        printf("Nu a fost gasit!");

	free(v);
	getchar();
	getchar();


//Exercitiul 4.

    int n=0 , i, j ,m=0 ;
    int *v ;

    printf("Capacitatea vectorului :");
    scanf("%d",&n);
    getchar();

	v=(int*) malloc(n*sizeof(int));

    for(int i=0;i<=n-1;i++){
        printf("v[%d] :",i);
        scanf("%d",v+i);

    }

    
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            if(*(v+i)==*(v+j)){
                m=*(v+i);
                
            }
        }
    }

    printf("\n%d",m);
    printf("\nA = ");

    for(i=0;i<=n;i++){
        if(*(v+i)==m){*(v+i)=0;}
    
    if(*(v+i)!=0){printf("%d ", *(v+i));}
    }

  getchar();

//Exercitiul 5.

    int *a, *b, n, m;

	a=(int*) malloc(n*sizeof(int));
	b=(int*) malloc(m*sizeof(int));

    printf("n=");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        //printf("a[%d]=", i);
        scanf("%d", a+i);
    }
	
    printf("m=");
    scanf("%d", &m);
    for(int i=0; i<m; i++){
        //printf("b[%d]=", i);
        scanf("%d", b+i);
    }

    printf("\nA = {");
    for(int i=0; i<n; i++)
        printf("%d, ", *(a+i));
    printf("\b\b};");

    printf("\nB = {");
    for(int j=0; j<m; j++)
        printf("%d, ", *(b+j));
    printf("\b\b};");


    printf("\nReuniunea este:\n");
    for(int i=0; i<n; i++)
        printf("%d ", *(a+i));
    for(int j=0; j<m; j++){
        int ok=1;
        for(int i=0; i<n && ok; i++)
            if(*(b+j) == *(a+i))
                ok = 0;
        if(ok)
            printf("%d ", *(b+j));

    }


    printf("\nIntersectia este:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            if(*(a+i) == *(b+j)){
                printf("%d ", *(a+i));
            }
    }


    printf("\nA-B este:\n");
    for(int i=0; i<n; i++){
        int ok=1;
        for(int j=0; j<m && ok; j++)
            if(*(b+j) == *(a+i))
                ok = 0;
        if(ok)
            printf("%d ", *(a+i));

    }

    printf("\nB-A este:\n");
    for(int j=0; j<m; j++){
        int ok=1;
        for(int i=0; i<n && ok; i++)
            if(*(b+j) == *(a+i))
                ok = 0;
        if(ok)
            printf("%d ", *(b+j));

    }
        

    getchar();
    getchar();


//Exercitiul 6.


int n, *v, *verif, i, j, k;

int main(){
    printf("n=");
    scanf("%d", &n);
    v=(int*)malloc(n*sizeof(int));
    verif=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        //printf("v[%d]=", i);
        scanf("%d", v+i);
    }
    
    for(i=0; i<n; i++){
        k=1; // elementul curent
        if(*(verif+i) == 0){
            printf("\nNumarul de aparitii al lui %d este: ", *(v+i));
            for(j=i+1; j<n; j++)
                if(*(v+i) == *(v+j)){
                    *(verif+j)=1;
                    ++k;
                }
            printf("%d", k);
        }
    }

    getchar();
    getchar();



//Exercitiul 7.


int n1, n2, ns, np, i, j, *p1, *p2, *s, *prod;

int main(){
    printf("n1=");
    scanf("%d", &n1);
    p1 = (int*) malloc(n1 * sizeof(int));
    for(i=n1-1; i>=0; i--)
        scanf("%d", p1+i);

    printf("n2=");
    scanf("%d", &n2);
    p2 = (int*) malloc(n2 * sizeof(int));
    for(i=n2-1; i>=0; i--)
        scanf("%d", p2+i);


    s = (int*) calloc(n1+n2, sizeof(int));
    printf("\nSuma este:\n");
    for(i=0; i<n1 || i<n2; i++){
        if(i<n1) *(s+i) += *(p1+i);
        if(i<n2) *(s+i) += *(p2+i);
    }
    ns = ((n1 > n2)? n1 : n2);
    for(i=ns-1; i>=0; i--)
        printf("%d ", *(s+i));


    prod = (int*) calloc(n1+n2, sizeof(int));
    printf("\nProdusul este:\n");
    for(i=0; i<n1; i++){
        for(j=0; j<n2; j++)
            *(prod+i+j) += *(p1+i) * *(p2+j);
    }
    np = n1 + n2 - 1;
    for(i=np-1; i>=0; i--)
        printf("%d ", *(prod+i));

    free(p1);
    free(p2);
    free(s);
    free(prod);

    getchar();
    getchar();


//Exercitiul 8.

int n, m, i, j, **a, maxim, i_max, j_max, minim, i_min, j_min;

int main(){

    //citire simplu
    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);
    a = (int**) malloc(n * sizeof(int*));
    for(i=0; i<n; i++){
        a[i] = (int*) malloc(m * sizeof(int));
        for(j=0; j<m; j++)
            scanf("%d", &a[i][j]);
    }

    minim = maxim = a[0][0];
    for(i=0; i<n; i++)
        for(j=0; j<m; j++){
            if(a[i][j] < minim){
                minim = a[i][j];
                i_min = i;
                j_min = j;
            }
            if(a[i][j] > maxim){
                maxim = a[i][j];
                i_max = i;
                j_max = j;
            }
        }
    
    //afisare
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("\nMaximul este: %d, pe pozitiile: i=%d j=%d", maxim, i_max, j_max);
    printf("\nMinimul este: %d, pe pozitiile: i=%d j=%d", minim, i_min, j_min);

    for(i=0; i<n; i++)
        free(a[i]);
    free(a);
    
    getchar();
    getchar();


//Exercitiul 9.

    int n, i, j, **a;
    int main(){
    printf("n=");
    scanf("%d", &n);
    a = (int**) malloc(n * sizeof(int*));
    for(i=0; i<n; i++){
        a[i] = (int*) malloc(n * sizeof(int));
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);
    }

    printf("\nDiagonala principala (i==j) este: \n");
    for(i=0; i<n; i++)
        printf("a[%d][%d]=%d\n", i, i, a[i][i]);

    printf("\nDiagonala secundara (i+j==n-1) este: \n");
    for(i=0; i<n; i++)
        printf("a[%d][%d]=%d\n", i, n-1-i, a[i][n-1-i]);

    getchar();
    getchar();


//Exercitiul 10.

    int n, i, j, **a;
    int main(){
    printf("n=");
    scanf("%d", &n);
    a=(int**)malloc(n*sizeof(int*));
    for(i=0; i<n; i++){
        a[i]=(int*)malloc(n*sizeof(int));
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("\nTriunghiul superior este: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            if(i <= j)
                printf("%d ", a[i][j]);
            else 
                printf("  ");
        printf("\n");
    }

    printf("\nTriunghiul inferior este: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            if(i >= j)
                printf("%d ", a[i][j]);
            else 
                printf("  ");
        printf("\n");
    }


//Exercitiul 11.

    int n, i, j, **a, k;
int main(){
    printf("n=");
    scanf("%d", &n);
    a=(int**)malloc(n*sizeof(int*));
    for(i=0; i<n; i++){
        a[i]=(int*)malloc(n*sizeof(int));
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);
    }
    for(j=0; j<n; j++)
        for(i=0; i<n; i++){
            for(k=0; k<j; k++)
                printf("  ");
            printf("%d\n", a[i][j]);
        }

    getchar();
    getchar();


//Exercitiul 12.

    int n, m, i, j, **a;
int main(){
    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);
    a=(int**)malloc(n*sizeof(int*));
    for(i=0; i<n; i++){
        a[i]=(int*)malloc(m*sizeof(int));
        for(j=0; j<m; j++)
            scanf("%d", &a[i][j]);
    }
    printf("\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++)
            if((i == 0) || (i == n-1) || (j == 0) || (j == m-1))
                printf("%d ", a[i][j]);
            else
                printf("  ");
        printf("\n");
    }

    getchar();
    getchar();


//Exercitiul 13.

      int aux, n, m, i, j, **a;
int main(){
    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);
    a=(int**)malloc(n*sizeof(int*));
    for(i=0; i<n; i++){
        a[i]=(int*)malloc(m*sizeof(int));
        for(j=0; j<m; j++)
            scanf("%d", &a[i][j]);
    }
 
    for(j=0; j<=m-1; j++){
        aux=a[0][j];
        a[0][j]=a[n-1][j];
        a[n-1][j]=aux;}
    for(i=0; i<=n-1; i++){
        aux=a[i][0];
        a[i][0]=a[i][m-1];
        a[i][m-1]=aux;}
    printf("\n");

    for(i=0; i<n; i++){
        for(j=0; j<m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    getchar();
    getchar();


//Exercitiul 14.

 int n, m, i, j, **a, *maxim, *minim;
int main(){
    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);
    a = (int**) malloc(n * sizeof(int*));
    for(i=0; i<n; i++){
        a[i] = (int*) malloc(m * sizeof(int));
        for(j=0; j<m; j++)
            scanf("%d", &a[i][j]);
    }

    minim = (int*) malloc(m * sizeof(int));
    maxim = (int*) malloc(n * sizeof(int));

    for(j=0; j<m; j++)
        minim[j] = a[0][j];

    for(i=0; i<=n-1; i++)
        for(j=0; j<=m-1; j++){
            if(a[i][j] < minim[j])
                minim[j] = a[i][j];
            if(a[i][j] > maxim[i])
                maxim[i] = a[i][j];
        }

    printf("\n");
    for(i=0; i<n; i++)
        printf("Maximul pe linia %d este: %d\n", i, maxim[i]);

    printf("\n");
    for(j=0; j<m; j++)
        printf("Minimul pe coloana %d este: %d\n", j, minim[j]);

    getchar();
    getchar();


//Exercitiul 15.

    int n, m, i, j, **a, l, c;
int main(){
    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);
    a=(int**)malloc(n*sizeof(int*));
    for(i=0; i<n; i++){
        a[i]=(int*)malloc(m*sizeof(int));
        for(j=0; j<m; j++)
            scanf("%d", &a[i][j]);
    }
    printf("l=");
    scanf("%d", &l);
    printf("c=");
    scanf("%d", &c);

    for(i=0; i<n; i++)
        for(j=c; j<=m-2; j++)
            a[i][j] = a[i][j+1];
    m--;

    for(j=0; j<m; j++)
        for(i=l; i<=n-2; i++)
            a[i][j] = a[i+1][j];
    n--;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    getchar();
    getchar();


//Exercitiul 16.

    int n, i, j, k, **a, **b, **p;
int main(){
    printf("n=");
    scanf("%d", &n);
    a=(int**)malloc(n*sizeof(int*));
    for(i=0; i<n; i++){
        a[i]=(int*)malloc(n*sizeof(int));
            for(j=0; j<n; j++){
                scanf("%d", &a[i][j]);
                }
    }
    b=(int**)malloc(n*sizeof(int*));
    for(i=0; i<n; i++){
        b[i]=(int*)malloc(n*sizeof(int));
        for(j=0; j<n; j++){
            scanf("%d", &b[i][j]);
            }
    }
    printf("\nSuma matricilor este:\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", a[i][j] + b[i][j]);
            }
        printf("\n");
    }

    p=(int**)malloc(n*sizeof(int*));
    for(i=0; i<n; i++)
        p[i] = (int*) calloc(n , sizeof(int));

    printf("\nProdusul este:\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            for(k=0; k<n; k++){
                p[i][j] += a[i][k] * b[k][j];
                }
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ",  p[i][j]);
            }
        printf("\n");
    }

    getchar();
    getchar();

//Exercitiul 17.

    int n, i, j, **a, k;
int main(){
    srand(time(NULL));
    printf("n=");
    scanf("%d", &n);
    
    a = (int**) malloc(n * sizeof(int*));
    for(i=0; i<n; i++){
        a[i] = (int*) malloc(n * sizeof(int));
        for(j=0; j<n; j++)
            a[i][j] = rand()%10; 
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("\na)\n");
    for(j=0; j<n; j++){
        for(i=j; i<=n-1; i++){
            printf("%d, ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nb)\n");
    for(i=0; i<=n-1; i++){
        for(j=n-1-i; j>=0; j--){
            printf("%d, ", a[i][j]);
        }
        printf("\n");
    }


    printf("\nc)\n");

    for(i=0; i<n; i++){
        if(i % 2 == 0){
            k = i; j = 0;
            while(k>=0 && j<n){
                printf("%d, ", a[k][j]);
                k--;
                j++;
            }
            
        }
        else{
            k = 0; j = i;
            while(k<n && j>=0){
                printf("%d, ", a[k][j]);
                k++;
                j--;
            }
            printf("\n");
        }
    }
    if(n % 2 == 0){
        for(j=1; j<n; j++){
            if(j % 2 == 0){
                i = j; k = n-1;
                while(i<n && k>=0){
                    printf("%d, ", a[i][k]);
                    i++;
                    k--;
                }
                printf("\n");
            }
            else{
                i = n-1; k = j;
                while(i>=0 && k<n){
                    printf("%d, ", a[i][k]);
                    i--;
                    k++;
                }
                printf("\n");
            }
        }
    }
    else{
        for(j=1; j<n; j++){
            if(j % 2 == 1){
                i = j; k = n-1;
                while(i<n && k>=0){
                    printf("%d, ", a[i][k]);
                    i++;
                    k--;
                }
                printf("\n");
            }
            else{
                i = n-1; k = j;
                while(i>=0 && k<n){
                    printf("%d, ", a[i][k]);
                    i--;
                    k++;
                }
                printf("\n");
            }
        }
    }

    
    printf("\nd)\n");
    int st=-1, dr=n, sus=-1, jos=n;
    while((st <= dr) && (sus <= jos)){
        for(j=st+1; j<dr; j++)
            printf("%d, ", a[sus+1][j]);
        sus++;
        for(i=sus+1; i<jos; i++)
            printf("%d, ", a[i][dr-1]);
        dr--;
        for(j=dr-1; j>st; j--)
            printf("%d, ", a[jos-1][j]);
        jos--;
        for(i=jos-1; i>sus; i--)
        printf("%d, ", a[i][st+1]);
        st++;
    }


    for(i=0; i<n; i++)
        free(a[i]);
    free(a);

    getchar();
    getchar();


return 0;
}*/