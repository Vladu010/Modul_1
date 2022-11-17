#include <stdio.h>

int contor;

int hanoi(int n, int s, int d, int i){
  if(n==1){
    contor++;
    printf("%d. Mutati de pe %d pe %d\n",contor,s,d);
  }else{
    hanoi(n-1,s,i,d);
    contor++;
    printf("%d. Mutati de pe %d pe %d\n",contor,s,d);
    hanoi(n-1,i,d,s);
  }
}

int hanoi_1(int n, int s, int d, int i, unsigned *AddrCnt){
  if(n==1){
    (*AddrCnt)++;
    printf("%u. Mutati de pe %d pe %d\n",*AddrCnt,s,d);
  }else{
    hanoi_1(n-1,s,i,d,AddrCnt);
    (*AddrCnt)++;
    printf("%u. Mutati de pe %d pe %d\n",*AddrCnt,s,d);
    hanoi_1(n-1,i,d,s,AddrCnt);
  }
}

int main(void) {
  unsigned cnt = 0;

  //apel hanoi
  hanoi_1(8,1,3,2,&cnt);
  printf("\n%d",cnt);

  return 0;
}