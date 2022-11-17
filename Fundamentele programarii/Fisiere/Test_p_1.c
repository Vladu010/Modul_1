#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main(){
 
 /*   int v[100],i,k=0;
    unsigned int n;
    printf("n=");
    scanf("%d",&n);

    for(i=0;i<=n-1;i++){
        printf("v[%d]=",i);
        scanf("%d",&v[i]);
    }

    for(i=0;i<=n;i++){
        if(v[i]%2!=0){
            k++;
        }}
    printf("%d",k);
    getchar();

//2.
    int n,i;
    printf("n=");
    scanf("%d",&n);
    int* v=(int*)malloc(n*sizeof(int));

    for(i=0;i<=n-1;i++){
        printf("v[%d]=",i);
        scanf("%d",&v[i]);
    }

    for(i=0;i<=n-1;i++){
        if((v[i]%10)%2!=0 && v[i]%3==0){
        printf("v=%d",v[i]);
    }}
    getchar();
    
//3.
    int n,i;
    printf("n=");
    scanf("%d",&n);
    int* v=(int*)malloc((n+2)*sizeof(int));
    v[0]=1; v[1]=1;
    i=2;
    int contor=0;
    while(contor<n)
    {
        v[i]=v[i-1]+v[i-2];
        contor++;
        i++;
    }
    for(i=0;i<=n+1;i++){
        printf("%d ",v[i]);
    }
    printf("Vectorul este Fibonacci");
    free(v);
    

//4.

   int a[100][100],n,i,j;
    srand(time(NULL));
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            a[i][j]= (rand() % (750-250+1))+250;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("\n");
    for(j=1;j<n;j=j+2)
        {
            for(i=0;i<n;i++)
                printf("%d ",a[i][j]);
        }
    

    getchar();

*/

//5.

int n,i;
    scanf("%d",&n);
    for(i=31;i>=0;i--)
    {
        if(n&(1<<i))
            printf("1");
        else
            printf("0");
        if(i%4==0)
            printf(" ");
    }
    for(i=30;i>=0;i=i-2)
    {
            n=n&(~(1<<i));
    }
    printf("\n");
    
    for(i=31;i>=0;i--)
    {
        if(n&(1<<i))
            printf("1");
        else
            printf("0");
        if(i%4==0)
            printf(" ");
    }
    printf("\n%d",n);

    return 0;
}