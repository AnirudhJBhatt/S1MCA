#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*top, *ptr, *f, *r;

void enqueue(){
    ptr = malloc(sizeof(struct node));
    printf("Enter the item : ");
    scanf("%d",&ptr->data);
    if(f==NULL){
        f=r=ptr;
    }
    else{
        r->next=ptr;
        r=ptr;
    }
}

void dequeue(){
    if(f==NULL){
        printf("Queue is empty");
    }
    else{
        ptr=f;
        printf("%d is deleted",ptr->data);
        f=ptr->next;
        free(ptr);
    }
}

void display(){
    if(f==NULL){
        printf("Queue is empty");
    }
    else{
        ptr=f;
        printf("Queue : ");
        while(ptr!=NULL){
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
    }
}

void main(){
    int ch;
    do{
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice(1-4) : ");
        scanf("%d",&ch);
        switch(ch){
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
        }
    }while(ch>0&&ch<4);
}

OUTPUT

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice(1-4) : 1
Enter the item : 10

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice(1-4) : 1
Enter the item : 20

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice(1-4) : 1
Enter the item : 30

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice(1-4) : 3
Queue : 10	20	30	

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice(1-4) : 2
10 is deleted

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice(1-4) : 2
20 is deleted

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice(1-4) : 2
30 is deleted

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice(1-4) : 3
Queue is empty

1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice(1-4) : 4
