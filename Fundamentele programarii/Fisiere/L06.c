#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
#include<time.h>
int main(){

/*

//----------------Suma, Produs, Max, Min -----------------------------------------------
    int total=0, n=0, prod=1,j, y, max,aux ,k , min ;
    int vector[n];
    printf("Capacitatea vectorului :");
    scanf("%d",&n);
    getchar();
    for(int i=0;i<=n-1;i++){
        printf("Vagonul numarul %d :",i+1);
        scanf("%d",&vector[i]);
        total =total + vector[i];
        prod = prod*vector[i];
    }
    printf("total continut vagoane : %d\n",total);
    printf("Produs continut vagoane : %d\n",prod);
    
    max=vector[0];
    min=vector[0];

    for(j=0;j<=n-1;j++){
        if(vector[j]> max){max=vector[j];}
        else if(vector[j]< min){min=vector[j];}

    }
    printf("\nmax = %d",max);
    printf("\nmin = %d",min);

    for(j=0;j<=n-1;j++){
        printf("\n%d ",vector[j]);
    }
//-------------Scoatem vagon-------------------------------------------------------------------------------
    printf("\nscoatem vagonul :");
    scanf("%d",&k);

    for(j=0;j<=n-1;j++){
        if(j==k-1){
            vector[j]=0;
        }
        printf("%d ",vector[j]);
    }
//---------------Inseram Vagonul inlocuitor--------------------------------------------------------------
    printf("\nPrecizati vagonul inlocuitor : ");
    scanf("%d",&y);

     for(j=0;j<=n-1;j++){
        if(j==k-1){
            vector[j]=y;
        }
        printf("%d ",vector[j]);
    }
//------------------Permutare la dreapta

     aux=vector[n-1];

     for(j=n-1;j>0;j--){
         vector[j]=vector[j-1];
     }
     printf("\n Permutare la dreapta :");
     vector[0]=aux;
     for(j=0;j<=n-1;j++){
         printf("%d ",vector[j]);}

//----------------Permutare la stanga

    
    aux=vector[0];
    for(j=0;j<n;j++){
        vector[j]=vector[j+1];
    }
    vector[n-1]=aux;

    aux=vector[0];
    for(j=0;j<n;j++){
        vector[j]=vector[j+1];
    }
    
    printf("\n Permutare la stanga :");
    vector[n-1]=aux;

    vector[n-1]=aux;
    for(j=0;j<=n-1;j++){
        printf("%d ",vector[j]);}


//Exercitiul 2.

    int n=0 ,n1=0 , m , i , s=0 ,ns=0;
    int v[n];

    printf("Capacitatea vectorului :");
    scanf("%d",&n);
    getchar();

    m=n;

    for(int i=0;i<=n-1;i++){
        printf("v[%d] :",i);
        scanf("%d",&n1);
        v[i]=n1;
    }
    for(i=0;i<=n-1;i++){
        if(v[i]==v[m-1]){
            s=s+1; 
        }
        else{ns=ns+1;}
        m=m-1;
    }
    if(s!=0 && ns==0){printf("sir simetric");}
    else{printf("sir nesimetric");}

    getchar();



//Exercitiul 3.

    int n=0 , n1=0 ,x, i ,g=0;
    int v[n];

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
        if(v[i] == x){
            g = 1;
            printf("Prima aparitie este pe pozitia: %d\n", i+1);
        }}
    
    if(g){
        g = 0;
        for(i=n-1; i >= 0 && g == 0; i--){
        if(v[i] == x){
            g = 1;
            printf("Ultima aparitie este pe pozitia: %d\n", i+1);
        }}
    }
    else
        printf("Nu a fost gasit!");



//Exercitiul 4.

    int n=0 , n1=0 , x, i, j ,m=0 ,g=0 , f=0;
    int v[n] ;

    printf("Capacitatea vectorului :");
    scanf("%d",&n);
    getchar();

    for(int i=0;i<=n-1;i++){
        printf("v[%d] :",i);
        scanf("%d",&n1);
        v[i]=n1;
    }

    
    for(i=0;i<=n-1;i++){
        for(j=0;j<i;j++){
            if(v[i]==v[j]){
                m=v[i];
                
            }
        }
    }

    printf("\n%d",m);
    printf("\nA = ");

    for(i=0;i<=n-1;i++){
        if(v[i]==m){v[i]=0;}
    
    if(v[i]!=0){printf("%d ", v[i]);}
    }

  getchar();



//Exercitiul 5.

    int a[10], b[10], n, m;

    printf("n=");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        //printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    printf("m=");
    scanf("%d", &m);
    for(int i=0; i<m; i++){
        //printf("b[%d]=", i);
        scanf("%d", &b[i]);
    }

    printf("\nA = {");
    for(int i=0; i<n; i++)
        printf("%d, ", a[i]);
    printf("\b\b};");

    printf("\nB = {");
    for(int j=0; j<m; j++)
        printf("%d, ", b[j]);
    printf("\b\b};");


    printf("\nReuniunea este:\n");
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
    for(int j=0; j<m; j++){
        int ok=1;
        for(int i=0; i<n && ok; i++)
            if(b[j] == a[i])
                ok = 0;
        if(ok)
            printf("%d ", b[j]);

    }


    printf("\nIntersectia este:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            if(a[i] == b[j]){
                printf("%d ", a[i]);
            }
    }


    printf("\nA-B este:\n");
    for(int i=0; i<n; i++){
        int ok=1;
        for(int j=0; j<m && ok; j++)
            if(b[j] == a[i])
                ok = 0;
        if(ok)
            printf("%d ", a[i]);

    }

    printf("\nB-A este:\n");
    for(int j=0; j<m; j++){
        int ok=1;
        for(int i=0; i<n && ok; i++)
            if(b[j] == a[i])
                ok = 0;
        if(ok)
            printf("%d ", b[j]);

    }


        

    getchar();
    getchar();



//Exercitiul 6.

    int n, v[20], verif[20], i, j, k;

    printf("n=");
    scanf("%d", &n);

    for(int i=0; i<n-1; i++){
        //printf("v[%d]=", i);
        scanf("%d", &v[i]);
    }

    for(i=0; i<n; i++){
        k=1;
        if(verif[i] == 0){
            printf("\nNumarul de aparitii al lui %d este: ", v[i]);
            for(j=i+1; j<n; j++)
                if(v[i] == v[j]){
                    verif[j]=1;
                    k++;
                }
            printf("%d", k);
        }
    }

    getchar();
    getchar();



//Exercitiul 7.

    int n1, n2, ns, np, i, j, p1[20], p2[20], s[20], prod[40];

    printf("n1=");
    scanf("%d", &n1);
    for(i=n1-1; i>=0; i--)
        scanf("%d", &p1[i]);

    printf("n2=");
    scanf("%d", &n2);
    for(i=n2-1; i>=0; i--)
        scanf("%d", &p2[i]);

    printf("\nSuma este:\n");
    for(i=0; i<n1 || i<n2; i++){
        if(i<n1) s[i] += p1[i];
        if(i<n2) s[i] += p2[i];
    }
    ns = ((n1 > n2)? n1 : n2);
    for(i=ns-1; i>=0; i--)
        printf("%d ", s[i]);

    printf("\nProdusul este:\n");
    for(i=0; i<n1; i++){
        for(j=0; j<n2; j++)
            prod[i+j] += p1[i] * p2[j];
    }
    np = n1 + n2 - 1;
    for(i=np-1; i>=0; i--)
        printf("%d ", prod[i]);

    getchar();
    getchar();



//Exercitiul 8.

    int n, m, i, j, a[20][20], maxim, i_max, j_max, minim, i_min, j_min;

    
    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d", &a[i][j]);

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
  
    for(i=0; i<n; i++){
        for(j=0; j<m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("\nMaximul este: %d, pe pozitiile: i=%d j=%d", maxim, i_max, j_max);
    printf("\nMinimul este: %d, pe pozitiile: i=%d j=%d", minim, i_min, j_min);


    getchar();
    getchar();


//Exercitiul 9.

    int n, i, j, a[20][20];

    printf("n=");
    scanf("%d", &n);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
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

    int n, i, j, a[20][20];

    printf("n=");
    scanf("%d", &n);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);

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

    int n, i, j, a[20][20], k;

    printf("n=");
    scanf("%d", &n);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    for(j=0; j<n; j++)
        for(i=0; i<n; i++){
            for(k=0; k<j; k++)
                printf("  ");
            printf("%d\n", a[i][j]);
        }

    getchar();
    getchar();



//Exercitiul 12.

    int n, m, i, j, a[20][20];

    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d", &a[i][j]);
 
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
 
      int aux, n, m, i, j, a[20][20];

    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d", &a[i][j]);
 
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

    int n, m, i, j, a[30][30], maxim[30], minim[30];

    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d", &a[i][j]);

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

    int n, m, i, j, a[30][30], l, c;

    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d", &a[i][j]);
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

    int n, i, j, k, a[30][30], b[30][30], p[30][30];

    printf("n=");
    scanf("%d", &n);
    for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                scanf("%d", &a[i][j]);
                }
    }
    for(i=0; i<n; i++){
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
            printf("%d ", p[i][j]);
            }
        printf("\n");
    }

    getchar();
    getchar();


//Exercitiul 17.

    int n, i, j, a[30][30];

    srand(time(NULL));
    printf("n=");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            a[i][j] = rand()%51; 


    printf("\na)\n");
    for(j=0; j<n; j++){
        for(i=j; i<=n-1; i++){
            printf("%d \n", a[i][j]);
        }
        printf("\n");
    }

    printf("\nb)\n");
    for(j=0; j<n; j++){
        for(i=j; i<=n-1; i++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    getchar();
    getchar();

*/
    return 0;

}