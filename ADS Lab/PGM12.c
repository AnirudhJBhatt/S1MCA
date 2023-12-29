#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head, *ptr, *temp;

void ins_beg(){
    ptr = malloc(sizeof(struct node));
    printf("Enter the item : ");
    scanf("%d",&ptr->data);
    if(head==NULL){
        ptr->next=NULL;
        head=ptr;
    }
    else{
        ptr->next=head;
        head=ptr;
    }
}

void ins_spec(){
    int p;
    ptr =  malloc(sizeof(struct node));
    printf("Enter the item and it's position : ");
    scanf("%d %d",&ptr->data,&p);
    temp=head;
    for(int i=1;i<p;i++){
        temp=temp->next;
        if(temp==NULL){
            printf("Invalid Position");
            break;
        }
    }
    ptr->next=temp->next;
    temp->next=ptr;
}

void del_beg(){
    if(head==NULL){
        printf("List Empty");
    }
    else{
        printf("%d is deleted",head->data);
        if(head->next==NULL){
            free(head);
            head=NULL;
        }
        else{
            ptr=head;
            head=ptr->next;
            free(ptr);
        }
    }
}

void del_end(){    
    if(head==NULL){
        printf("List Empty");
    }
    else{
        if(head->next==NULL){
            printf("%d is deleted",head->data);
            free(head);
            head=NULL;
        }
        else{
            ptr=head;
            while(ptr->next!=NULL){
                temp=ptr;
                ptr=ptr->next;
            }
            printf("%d is deleted",ptr->data);
            temp->next=NULL;
            free(ptr);
        }
    }
}

void display(){
    if(head==NULL){
        printf("List Empty");
    }
    else{        
        ptr=head;
        printf("Linked List : ");
        while(ptr!=NULL){
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
    }
}

void search(){
    int x,i=1,f=0;
    if(head==NULL){
        printf("List Empty");
    }
    else{
        printf("Enter the item : ");
        scanf("%d",&x);
        for(ptr=head; ptr!=NULL; ptr=ptr->next){
            if(ptr->data==x){
                printf("Element found at node %d",i);
                f=1;
            }
            i++;
        }
        if(f==0){
            printf("Element not found");
        }
    }
}

void main(){
    int ch;
    do{
        printf("\n1. Insert at front\n2. Insert at Specific Position\n3. Delete at front\n4. Delete at rear\n5. Search\n6. Display\n7. Exit\nEnter your choice(1-7) : ");
        scanf("%d",&ch);
        switch(ch){
            case 1: ins_beg();
                    break;
            case 2: ins_spec();
                    break;
            case 3: del_beg();
                    break;
            case 4: del_end();
                    break;
            case 5: search();
                    break;
            case 6: display();
                    break;
        }
    }while(ch>0&&ch<7);
}

OUTPUT

1. Insert at front
2. Insert at Specific Position
3. Delete at front
4. Delete at rear
5. Search
6. Display
7. Exit
Enter your choice(1-7) : 1
Enter the item : 10

1. Insert at front
2. Insert at Specific Position
3. Delete at front
4. Delete at rear
5. Search
6. Display
7. Exit
Enter your choice(1-7) : 1
Enter the item : 20

1. Insert at front
2. Insert at Specific Position
3. Delete at front
4. Delete at rear
5. Search
6. Display
7. Exit
Enter your choice(1-7) : 1
Enter the item : 30

1. Insert at front
2. Insert at Specific Position
3. Delete at front
4. Delete at rear
5. Search
6. Display
7. Exit
Enter your choice(1-7) : 6
Linked List : 30	20	10	

1. Insert at front
2. Insert at Specific Position
3. Delete at front
4. Delete at rear
5. Search
6. Display
7. Exit
Enter your choice(1-7) : 2
Enter the item and it's position : 25 1

1. Insert at front
2. Insert at Specific Position
3. Delete at front
4. Delete at rear
5. Search
6. Display
7. Exit
Enter your choice(1-7) : 6
Linked List : 30	25	20	10	

1. Insert at front
2. Insert at Specific Position
3. Delete at front
4. Delete at rear
5. Search
6. Display
7. Exit
Enter your choice(1-7) : 2
Enter the item and it's position : 15 3

1. Insert at front
2. Insert at Specific Position
3. Delete at front
4. Delete at rear
5. Search
6. Display
7. Exit
Enter your choice(1-7) : 6
Linked List : 30	25	20	15	10	

1. Insert at front
2. Insert at Specific Position
3. Delete at front
4. Delete at rear
5. Search
6. Display
7. Exit
Enter your choice(1-7) : 5
Enter the item : 20
Element found at node 3

1. Insert at front
2. Insert at Specific Position
3. Delete at front
4. Delete at rear
5. Search
6. Display
7. Exit
Enter your choice(1-7) : 3
30 is deleted

1. Insert at front
2. Insert at Specific Position
3. Delete at front
4. Delete at rear
5. Search
6. Display
7. Exit
Enter your choice(1-7) : 6
Linked List : 25	20	15	10	

1. Insert at front
2. Insert at Specific Position
3. Delete at front
4. Delete at rear
5. Search
6. Display
7. Exit
Enter your choice(1-7) : 4
10 is deleted

1. Insert at front
2. Insert at Specific Position
3. Delete at front
4. Delete at rear
5. Search
6. Display
7. Exit
Enter your choice(1-7) : 6
Linked List : 25	20	15	

1. Insert at front
2. Insert at Specific Position
3. Delete at front
4. Delete at rear
5. Search
6. Display
7. Exit
Enter your choice(1-7) : 5
Enter the item : 30
Element not found

1. Insert at front
2. Insert at Specific Position
3. Delete at front
4. Delete at rear
5. Search
6. Display
7. Exit
Enter your choice(1-7) : 7
