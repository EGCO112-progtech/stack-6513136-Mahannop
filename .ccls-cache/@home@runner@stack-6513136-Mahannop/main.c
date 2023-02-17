#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

int main(int argc, char **argv){
  
  int i,N,j;
  NodePtr top;
  top = NULL; //top pointing to NULL
  push(&top,6);
  push(&top,87);
  push(&top,54);
  printf("Push Elements : ");
  while(top != NULL) {
    printf("%d ",top->data);
    pop(&top);
  }
  for(int i=1;i<argc;i++) {
    push(&top,atoi(argv[i]));
  }
  printf("\n");
  while(top) {
   printf("Pop back %d\n",pop(&top)); 
  }
 
/*
 Stack s;
 printf("Checking the parentheses in argv arguments\n");
  for(i=1;i<argc;i++) {
     for(j=0;j<strlen(argv[i]);j++){
       Use stack to help with the parentheses 
    }
  }
*/



   return 0;
}
