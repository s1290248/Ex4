#include<stdio.h>
#include<stdlib.h>

int main(){
  int i, num;
  int heads=0;
  int tails=0;
  char name[10];
  
  printf("Who are you?\n> ");
  
  scanf("%s", name);

  printf("Hello, %s!\n",name);

  printf("Tossing a coin...\n");

  for( i=0 ; i < 3 ; i++){
    num = rand();
    
    if( num % 2 == 0){
      printf("Round %d: Head\n", i+1);
      heads++;
    }
    else {
      printf("Round %d: Tail\n", i+1);
      tails++;
    }
    
  }

  printf("Heads: %d, Tails: %d\n", heads, tails);
  
  return 0;
}
