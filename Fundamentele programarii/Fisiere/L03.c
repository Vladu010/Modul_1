#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ln(x) log(x)
int main(){
   /*
   // Exercitiul 1.


    printf("Dimensiunea char in byte =%d ", sizeof(char));
    printf("\n Dimensiunea unisgned char in byte = %d", sizeof(unsigned char));
    printf("\n Dimensiunea short int int byte = %d", sizeof(short int));
    printf("\n Dimensiunea int in byte = %d", sizeof(int));
    printf("\n Dimensiunea unsigned int in byte = %d", sizeof(unsigned int));
    printf("\n Dimensiunea signed int  in byte = %d", sizeof(signed int));
    printf("\n Dimensiunea long int in byte = %d", sizeof(long int));
    printf("\n Dimensiunea float in byte = %d", sizeof(float));
    printf("\n Dimensiuna double in byte = %d", sizeof(double));
    printf("\n Dimensiuna long double in byte = %d", sizeof(long double));
    printf("\n\n\n");

    getchar();
    printf(", Dimensiunea char in biti = %d", 8*sizeof(char));
    printf("\n Dimensiunea unisgned char in biti = %d", 8*sizeof(unsigned char));
    printf("\n Dimensiunea short int int biti = %d", 8*sizeof(short int));
    printf("\n Dimensiunea int in biti = %d", 8*sizeof(int));
    printf("\n Dimensiunea unsigned int in biti = %d", 8*sizeof(unsigned int));
    printf("\n Dimensiunea signed int  in biti = %d", 8*sizeof(signed int));
    printf("\n Dimensiunea long int in biti = %d", 8*sizeof(long int));
    printf("\n Dimensiunea float in biti = %d", 8*sizeof(float));
    printf("\n Dimensiuna double in biti = %d", 8*sizeof(double));
    printf("\n Dimensiuna long double in biti = %d", 8*sizeof(long double));
    getchar();
   
/*
// Exercitiul 2.

    int a , b ;
    printf("Introducem primul nr = ");
    scanf("%d",&a);
    printf("Introducem al doilea numar = ");
    scanf("%d",&b);
    getchar();

   //a)
    printf("Valoarea preincrementata = %d",++a);
    printf("\nValoarea postincrementata =%d ", a++);
    printf("\nValoarea lui a este : %d ", a);
    printf("\nValoarea predecrementata =%d", --a);
    printf("\nValoarea postdecrementata =%d", a-- );
    printf("\nValoarea lui a este : %d ", a);
    "\n\n";
    printf("\nValoarea preincrementata = %d", ++b);
    printf("\nValoarea postincrementata = %d", b++);
    printf("\nValoarea lui b este : %d ", b);
    printf("\nValoarea predecrementata = %d", --b);
    printf("\nValoarea postdecrementata = %d", b--);
    printf("\nValoarea lui b este : %d ", b);


   //b)
    printf("\nAdunarea cu 10: %d", a + 10);
    printf("\nScaderea cu 10: %d", a - 10);
    printf("\nInmultirea cu 10: %d", a * 10);
    printf("\nImpartirea cu 10: %d", a / 10);
    getchar();
    printf("\n\n\nAdunarea cu 10: %d", b + 10);
    printf("\nScaderea cu 10: %d", b - 10);
    printf("\nInmultirea cu 10: %d", b * 10);
    printf("\nImpartirea cu 10: %d", b / 10);
    getchar();

 //c)
    printf("Catul impartirii intregi : %d", a / b);
    printf("\nRestul impartirii intregi : %d", a % b);
    getchar();
    

   //d)
    printf("%.3lf",(double)a);
    printf("\n%.5lf",(double)a);
    printf("\n%.10lf",(double)a);
    getchar();
    printf("\n%.3lf",(double)b);
    printf("\n%.5lf",(double)b);
    printf("\n%.10lf",(double)b);

  //e)
   printf("\nValoarea expresiei este :%lf",pow(a,3) - pow(b,2) - (a * b) + 10);

/*
// Exercitiul 3.
//a)
    int x,y,z;
    printf("Introducem x = ");
    scanf("%d",&x);
    printf("Introducem y = ");
    scanf("%d",&y);
    printf("Introducem z = ");
    scanf("%d",&z);
    printf("x la puterea 2 = %.0lf\n", pow(x,2));
    getchar();
    printf("%lf",sqrt(x * x + y * y + z * z));
    getchar();
//b)
    printf("b) =%lf",exp(x * ln(y * z)));
    getchar();
//c)
    printf("|x-y-z| =%d",abs( x - y - z ));
    getchar();
//d)
    printf("(x+y+z)^2 = %.0lf",pow( x + y + z, 2));
    getchar();
//e)
    printf("Restul impartiri =%d",x % y);
    getchar();
//f)
    printf("Impartire =%d",x / z);
    getchar();


//Exercitiul 4.
    int n1;
    double n2;
    printf("Introducem n1 = ");
    scanf("%d",&n1);
    printf("Introducem n2 = ");
    scanf("%lf",&n2);
    getchar();
    printf("Valoarea de adevar pentru negat cu 2: %d", !(n1 == 2));
    getchar();
    printf("\nValoarea de adevar pentru n2 este diferit de 5 :%d", n2 != 5);
    getchar();
    printf("\nValoarea de adevar n1>2 si n2<=5.5:%d", (n1 > 2) && (n2 <= 5.5));
    getchar();
    printf("\nValoarea de adevar pentru n1 sau n2 :%d", (n1 > 0) || (n2 > 0));
    printf("\nValoarea expresiei:%lf", pow(n1,3) - pow(n2,2) - n1 * n1 +10);
    getchar();
    printf("\nn1^n2:%lf",pow(n1,(int)n2));
    getchar();
    printf("\nValoarea expresiei n1/n2:%d",n1 / (int)n2);





// Exercitiul 5.
    int x,y,z;
    printf("Introducem x = ");
    scanf("%d",&x);
    printf("Introducem y = ");
    scanf("%d",&y);
    printf("Introducem z = ");
    scanf("%d",&z);
    if(x==y && y==z){
        printf("\nTriunghiul este echilateral");
        getchar();}
    else if(x==y || x==z ||y==z){
        printf("Triunghiul este isoscel");
        getchar();}
    if(pow(x,2)==pow(y,2)+pow(z,2) || pow(y,2)==pow(x,2)+pow(z,2) || pow(z,2)==pow(y,2)+pow(x,2)) {
        printf("\nTriunghiul este dreptunghic");
    getchar();}

 



// Exercitiul 6.
    int a,b,c,d,e,f,x;
    double P3,P2;
    printf("Coeficientul a = ");
    scanf("%d",&a);
    printf("\nCoeficientul b = ");
    scanf("%d",&b);
    printf("\nCoeficientul c = ");
    scanf("%d",&c);
    printf("\nCoeficientul d = ");
    scanf("%d",&d);
    printf("\nCoeficientul e = ");
    scanf("%d",&e);
    printf("\nCoeficientul f = ");
    scanf("%d",&f);
    printf("\nIntroduceti x pt P(15):");
    scanf("%d",&x);
    printf("\nP(15) este egal cu:%lf", a * pow((double)x,(double)5) + b * pow((double)x,(double)4) + c * pow((double)x,(double)3) + d * pow((double)x,(double)2) + e * x + f);
    printf("\nIntroduceti x pt P(20):");
    scanf("%d",&x);
    printf("\nP(20) este egal cu:%lf", a * pow((double)x,(double)5) + b * pow((double)x,(double)4) + c * pow((double)x,(double)3) + d * pow((double)x,(double)2) + e * x + f);
    printf("\nIntroduceti x pt P(2):");
    scanf("%d",&x);
    printf("\nP(2) este egal cu:%lf",P2= a * pow((double)x,(double)5) + b * pow((double)x,(double)4) + c * pow((double)x,(double)3) + d * pow((double)x,(double)2) + e * x + f);
    printf("\nIntroduceti x pt P(3):");
    scanf("%d",&x);
    printf("\nP(3) este egal cu:%lf", P3= a * pow((double)x,(double)5) + b * pow((double)x,(double)4) + c * pow((double)x,(double)3) + d * pow((double)x,(double)2) + e * x + f);
    getchar();
    printf("\nP(2) la puterea P(3):%lf", pow(P2,P3));



 
// Exercitiul 7.
    int n;
    float a,b,c,d,e,f;
    printf("Coeficientul a = ");
    scanf("%lf",&a);
    printf("\nCoeficientul b = ");
    scanf("%lf",&b);
    printf("\nCoeficientul c = ");
    scanf("%lf",&c);
    printf("\nCoeficientul d = ");
    scanf("%lf",&d);
    printf("\nCoeficientul e = ");
    scanf("%lf",&e);
    printf("\nCoeficientul f = ");
    scanf("%lf",&f);
    printf("f(x)=(a*x^2+3*b*x+6*c)/(d*x-e)\n");
    printf("alegeti n pt f(n):");
    scanf("%d",&n);
    getchar();
    printf("f(n)=(a*n^2+3*b*n+6*c)/(d*n-e) este egal cu: %lf", a * pow((double)n, (double)2) + 3 * b * n + 6 * c);
    getchar();



// Exercitiul 8.
    int a,b;
    printf("Primul numar = ");
    scanf("%d",&a);
    printf("Al doilea numar = ");
    scanf("%d",&b);
    printf("Media aritmetica este : %d", (a + b) / 2);
    printf("\nMedia geometrica este :%f", sqrt(a * b));
    printf("\nMedia armonica este :%d", (2 * a * b) / (a + b));
    getchar();


// Exercitiul 9.
    unsigned int n;
    printf("Se citeste numarul de la tastatura : ");
    scanf("%d",&n);
    if((sqrt(n)==(int)sqrt(n)) == 1){printf("\nNumarul %d este patrat perfect", n);}
    else{printf("\nNumarul %d nu este patrat perfect", n );}
    getchar();

    return 0;
}
*/