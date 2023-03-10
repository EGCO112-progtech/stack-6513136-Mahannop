/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

int main(int argc, char **argv){
  
  int i,N,j;
  NodePtr top;
  top = NULL; //top pointing to NULL
  size = 0; 
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



   //return 0;
//} 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "stack.h"

int main(int argc, char **argv) {
  Stack s;
  int i,N,j;
  NodePtr top;
  s.top = NULL; //top pointing to NULL
  s.size = 0; 
  
  /* for(int i=1;i<argc;i++) {
    push(&s,atoi(argv[i]));
  }
  printf("\n");
  pop_all(&s); */
  
  printf("Checking the parentheses in argv arguments\n");
  int type = 0,isempty=0; 
  for(i=1;i<argc;i++) {
     for(j=0;j<strlen(argv[i]);j++) {
      switch(argv[i][j]) { //arrays of string 2 dimension 
        case '[': push(&s,argv[i][j]); 
           type = 0;
        break;
        case '{': push(&s,argv[i][j]);
           type = 0;
        break;
        case ']': if(s.top == NULL) {
             isempty++;
             type--; 
        }
        else if(pop(&s) != '[') { 
             type = 1; 
           }
        break;
        case '}': if(s.top == NULL) {
            isempty++;
            type--;
        }
        else if(pop(&s) != '{') { 
             type = 1;
          }
        break;
        default: printf("Invalid !\n"); 
      }
       if(type == 1) break;
    } 
    if(s.size>0 && s.top!=NULL) { printf("argv %d incorrect: too many open parentheses\n",i);
       pop_all(&s);
    }
    else if(type == 0) printf("argc %d: correct\n",i);
    else if(type == 1 || s.top!=NULL) printf("argv %d incorrect: mismatch\n",i);
    else if(isempty>0) printf("argv %d incorrect: too many closed parentheses\n",i); 
    
  }
  //{[]}[] {[]] [] {{ }} 
  //{]] {] [} }{ ][ [[}} [[]] 
   return 0;
}
