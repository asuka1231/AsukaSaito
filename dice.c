#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

  int i,num;

  int sum=0;

  char name[10];

  srand(time(NULL));

  printf("What is your name?\n>");

  scanf("%s",name);

  printf("Hello,%s\n",name);
  
  printf("Rolling dice...\n");

  for(int i=1;i<=2;i++){

    num=rand()%6+1;

    printf("Die %d: %d\n",i,num);

    sum=sum+num;

  }

  printf("total value: %d\n",sum);

  if(sum >= 8)printf("%s won!\n",name);

  else printf("%s lost!\n",name);

  return 0;

}
