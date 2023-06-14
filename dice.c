#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

  int i,num;

  int sum=0;

  srand(time(NULL));
  
  printf("Rolling dice...\n");

  for(int i=1;i<=2;i++){

    num=rand()%6+1;

    printf("Die %d: %d\n",i,num);

    sum=sum+num;

  }

  printf("total value: %d\n",sum);

  if(sum >= 8)printf("You won!\n");

  else printf("You lost!\n");

  return 0;

}
