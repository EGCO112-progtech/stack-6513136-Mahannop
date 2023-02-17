//
//  linkedlist.h
//  LinkedList_Stack_simple
//
//  Created by Mingmanas Sivaraksa
//

#ifndef linkedlist_h
#define linkedlist_h
struct node
{
    int data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;
//NodePtr is a pointer that was declared as typedef
/* void push(NodePtr *top,int x);
int pop(NodePtr *top);

void push(NodePtr *top,int x) {
   Node *add = (NodePtr)malloc(sizeof(Node));
   if(add) {
      add->data = x;
      add->nextPtr = *top;
      *top = add;
   }
} 

int pop(NodePtr *top) {
   NodePtr t = *top; 
   if(t) {
     int x = t->data; // (*top)->data
     *top = t->nextPtr; // (*top)->nextPtr
     free(t); //delete t !
     return x;
    }
    printf("Empty Stack\n");
    return 0; 
} */

#endif
