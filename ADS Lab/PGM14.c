#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*top, *ptr;

void push(){
    ptr = malloc(sizeof(struct node));
    printf("Enter the item : ");
    scanf("%d",&ptr->data);
    ptr->next=top;
    top=ptr;
}

void pop(){
    if(top==NULL){
        printf("Stack Underflow");
    }
    else{
        ptr=top;
        printf("%d is deleted",ptr->data);
        top=top->next;
        free(ptr);
    }
}

void display(){
    ptr=top;
    if(ptr==NULL){
        printf("Stack Empty");
    }
    else{
        printf("Stack : ");
        while(ptr!=NULL){
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
    }
}

void main(){
    int ch;
    do{
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice(1-4) : ");
        scanf("%d",&ch);
        switch(ch){
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
        }
    }while(ch>0&&ch<4);
}

OUTPUT

1. Push
2. Pop
3. Display
4. Exit
Enter your choice(1-4) : 1
Enter the item : 10

1. Push
2. Pop
3. Display
4. Exit
Enter your choice(1-4) : 1
Enter the item : 20

1. Push
2. Pop
3. Display
4. Exit
Enter your choice(1-4) : 1
Enter the item : 30

1. Push
2. Pop
3. Display
4. Exit
Enter your choice(1-4) : 3
Stack : 30	20	10	

1. Push
2. Pop
3. Display
4. Exit
Enter your choice(1-4) : 2
30 is deleted

1. Push
2. Pop
3. Display
4. Exit
Enter your choice(1-4) : 2
20 is deleted

1. Push
2. Pop
3. Display
4. Exit
Enter your choice(1-4) : 2
10 is deleted

1. Push
2. Pop
3. Display
4. Exit
Enter your choice(1-4) : 3
Stack Empty

1. Push
2. Pop
3. Display
4. Exit
Enter your choice(1-4) : 4
