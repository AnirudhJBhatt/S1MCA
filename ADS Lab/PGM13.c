#include<stdio.h>
#include<stdlib.h>
int c=0;
struct node{
    int data;
    struct node *l, *r;
}*head, *ptr, *temp;

void ins_beg(){
    ptr = malloc(sizeof(struct node));
    printf("Enter the item : ");
    scanf("%d",&ptr->data);
    c++;
    if(head==NULL){
        ptr->r=ptr->l=NULL;
        head=ptr;
    }
    else{
        ptr->l=NULL;
        ptr->r=head;
        head=ptr;
    }
}

void ins_end(){
    ptr =  malloc(sizeof(struct node));
    printf("Enter the item : ");
    scanf("%d",&ptr->data);
    c++;
    if(head==NULL){
        ptr->r=ptr->l=NULL;
        head=ptr;
    }
    else{
        temp=head;
        while(temp->r!=NULL){
            temp=temp->r;
        }
        temp->r=ptr;
        ptr->l=temp;
        ptr->r=NULL;
    }
}

void del_beg(){
    if(head==NULL){
        printf("List Empty");
    }
    else{
        c--;
        printf("%d is deleted",head->data);
        if(head->r==NULL){
            free(head);
            head=NULL;
        }
        else{
            ptr=head;
            head=head->r;
            head->l=NULL;
            free(ptr);
        }
    }
}

void del_end(){    
    if(head==NULL){
        printf("List Empty");
    }
    else{
        c--;
        if(head->r==NULL){
            printf("%d is deleted",head->data);
            free(head);
            head=NULL;
        }
        else{
            ptr=head;
            while(ptr->r!=NULL){
                ptr=ptr->r;
            }
            printf("%d is deleted",ptr->data);
            ptr->l->r=NULL;
            free(ptr);
        }
    }
}

void display(){
    ptr=head;
    if(ptr==NULL){
        printf("List Empty");
    }
    else{
        printf("Doubly Linked List : ");
        while(ptr!=NULL){
            printf("%d\t",ptr->data);
            ptr=ptr->r;
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
        for(ptr=head; ptr!=NULL; ptr=ptr->r){
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
        printf("\n1. Insert at front\n2. Insert at rear\n3. Delete at front\n4. Delete at rear\n5. Display\n6. Search\n7. Count\n8. Exit\nEnter your choice(1-8) : ");
        scanf("%d",&ch);
        switch(ch){
            case 1: ins_beg();
                    break;
            case 2: ins_end();
                    break;
            case 3: del_beg();
                    break;
            case 4: del_end();
                    break;
            case 5: display();
                    break;
            case 6: search();
                    break;
            case 7: printf("Number of nodes : %d",c);
                    break;
        }
    }while(ch>0&&ch<8);
}

OUTPUT

1. Insert at front
2. Insert at rear
3. Delete at front
4. Delete at rear
5. Display
6. Search
7. Count
8. Exit
Enter your choice(1-8) : 1
Enter the item : 10

1. Insert at front
2. Insert at rear
3. Delete at front
4. Delete at rear
5. Display
6. Search
7. Count
8. Exit
Enter your choice(1-8) : 1
Enter the item : 20

1. Insert at front
2. Insert at rear
3. Delete at front
4. Delete at rear
5. Display
6. Search
7. Count
8. Exit
Enter your choice(1-8) : 1
Enter the item : 30

1. Insert at front
2. Insert at rear
3. Delete at front
4. Delete at rear
5. Display
6. Search
7. Count
8. Exit
Enter your choice(1-8) : 5
Doubly Linked List : 30	20	10	

1. Insert at front
2. Insert at rear
3. Delete at front
4. Delete at rear
5. Display
6. Search
7. Count
8. Exit
Enter your choice(1-8) : 2
Enter the item : 40

1. Insert at front
2. Insert at rear
3. Delete at front
4. Delete at rear
5. Display
6. Search
7. Count
8. Exit
Enter your choice(1-8) : 2
Enter the item : 50

1. Insert at front
2. Insert at rear
3. Delete at front
4. Delete at rear
5. Display
6. Search
7. Count
8. Exit
Enter your choice(1-8) : 5
Doubly Linked List : 30	20	10	40	50	

1. Insert at front
2. Insert at rear
3. Delete at front
4. Delete at rear
5. Display
6. Search
7. Count
8. Exit
Enter your choice(1-8) : 6
Enter the item : 10

Element found at node 3
1. Insert at front
2. Insert at rear
3. Delete at front
4. Delete at rear
5. Display
6. Search
7. Count
8. Exit
Enter your choice(1-8) : 7
Number of nodes : 5

1. Insert at front
2. Insert at rear
3. Delete at front
4. Delete at rear
5. Display
6. Search
7. Count
8. Exit
Enter your choice(1-8) : 3
30 is deleted

1. Insert at front
2. Insert at rear
3. Delete at front
4. Delete at rear
5. Display
6. Search
7. Count
8. Exit
Enter your choice(1-8) : 5
Doubly Linked List : 20	10	40	50	

1. Insert at front
2. Insert at rear
3. Delete at front
4. Delete at rear
5. Display
6. Search
7. Count
8. Exit
Enter your choice(1-8) : 4
50 is deleted

1. Insert at front
2. Insert at rear
3. Delete at front
4. Delete at rear
5. Display
6. Search
7. Count
8. Exit
Enter your choice(1-8) : 5
Doubly Linked List : 20	10	40	

1. Insert at front
2. Insert at rear
3. Delete at front
4. Delete at rear
5. Display
6. Search
7. Count
8. Exit
Enter your choice(1-8) : 8
