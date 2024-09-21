#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int data;
    struct NODE *next;
    int prev;
}NODE;


void LLTraversal(NODE *ptr){

    while(ptr!=NULL){
        printf("Element: %d \n",ptr->data);
        ptr = ptr->next;
    }
}
NODE* insertBegg(NODE *head,int value){
    NODE *nptr = (NODE*) malloc(sizeof(NODE));
    
    nptr->data = value;
    nptr->next = head;
    return nptr;
}
NODE* insertBTW(NODE *head,int value,int index){
    NODE *nptr = (NODE*) malloc(sizeof(NODE));
    NODE *temp = head;
    int i = 0;
    while(i!=index-1){
        temp = temp->next;
        i++;
    }
    nptr->data = value;
    nptr->next = temp->next;
    temp->next = nptr;
    return head;
}

NODE* insertEnd(NODE *head,int value){
    NODE *nptr = (NODE*) malloc(sizeof(NODE));
    nptr->data = value;
    NODE *temp = head;
    while(temp->next != NULL){
        temp = temp ->next;
    }
    temp->next = nptr;
    nptr->next = NULL;
    return head;
}

int main(){
NODE *head = (NODE*) malloc(sizeof(NODE));

NODE *first = (NODE*) malloc(sizeof(NODE));

NODE *second = (NODE*) malloc(sizeof(NODE));

NODE *third = (NODE*) malloc(sizeof(NODE));

NODE *nptr = (NODE*) malloc(sizeof(NODE));



head->data = 50;
head->next = first;

first->data = 60;
first->next = second;

second->data = 70;
second->next = third;

third->data = 80;
third->next = NULL;

LLTraversal(head);
printf("\n");
// head = insertBegg(head,40);
// printf("Inserted at  First NODE \n");

// head = insertBTW(head,40,2);
// printf("Inserted a NODE at INDEX of choice \n");
head = insertEnd(head,69);
printf("Inserted a NODE at the END of the LL \n");

LLTraversal(head);
return 0;

}