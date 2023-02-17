//struct of stack
#ifndef stack_h
#define stack_h
#include "node.h"

typedef struct {
	NodePtr top;
	int size;
}Stack;

typedef Stack * StackPtr;
void push(StackPtr s, int value);
char pop(StackPtr s);
void pop_all(StackPtr s);

void push(StackPtr s, int value) {
  NodePtr new_node = (NodePtr)malloc(sizeof(Node)); 
  if(new_node) {
       new_node->data = value;
       new_node->nextPtr = top; 
    
    
    }
}

void pop()

#endif
