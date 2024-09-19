#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int front ;
    int rear;
    int *arr;
    int size;
}circQueue;
circQueue *cQ;
void enqueue(circQueue *cQ,int item){
    if ((cQ->rear + 1) % cQ->size == cQ->front){
        printf("Queue OVERFLOW");
    }else{
        cQ->rear = (cQ->rear + 1) % cQ->size;
        cQ->arr[cQ->rear] = item;

    }


}

int dequeue(circQueue *cQ){
    int item = -1;
    if(cQ->front == cQ->rear){
        printf("QUEUE UNDERFLOW");
    }else{
        cQ -> front  = (cQ -> front+1)% cQ -> size;
        
    }
    return item = cQ ->arr[ cQ -> front];
}

void display(circQueue *cQ){
    
if(cQ->front == cQ->rear){
        printf("QUEUE UNDERFLOW");
    }else{
        int temp = cQ ->front;
        printf("Queue Elements:");
        while(temp!= cQ ->rear){
            temp = (temp +1)%cQ -> size;
        }
        printf("%d",cQ ->arr[temp]);
    }
}

int main() {
int queueSize = 5;
circQueue *cQ = (circQueue *)malloc(sizeof(circQueue));
cQ->arr = (int *)malloc(queueSize * sizeof(int));
cQ->front = -1;
cQ ->rear = -1;



int choice, item;
while(1){
    printf("1.Enqueue \n");
    printf("2.Dequeue \n");
    printf("3.Display \n");
    printf("4.Exit \n ");
    printf("Enter your choice \n");
    scanf("%d",&choice);

    switch (choice){
        case 1:
            printf("Enter Element");
            scanf("%d",&item);
            enqueue(cQ,item);
            break;
        case 2:
            printf("Dequeued item: %d \n",dequeue(cQ));
            display(cQ);
            break;
        case 3:
            printf("Displaying all Elements \n");
            display(cQ);
            break;
        case 4:
            return 0;
            break;
        default:
            printf("Invalid Choice");


    }
}
}

