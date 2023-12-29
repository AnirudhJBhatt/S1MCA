#include<stdio.h>
#define n 5
int a[50],f=-1,r=-1;
void enqueue(){
    if(r==n-1){
        printf("Queue is full");
    }
    else{
        if(f==-1)
            f=r=0;
        else
            r++;
        printf("Enter the element to be inserted : ");
        scanf("%d",&a[r]);
    }
}
void dequeue(){
    if(f==-1){
        printf("Queue is empty");
    }
    else{
        printf("%d is deleted",a[f]);
        if(f==r)
            f=r=-1;
        else
            f++;
    }
}
void display(){
    if(f==-1){
        printf("Queue is empty");
    }
    else{
        printf("Queue : ");
        for(int i=f;i<=r;i++){
            printf("%d \t",a[i]);
        }
    }
}
void main(){
    int ch;
    do{
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice(1-4) :");
        scanf("%d",&ch);
        switch(ch){
            case 1 : enqueue();
                     break;
            case 2 : dequeue();
                     break;
            case 3 : display();
                     break;
        }
    }while(ch>0&&ch<4);
}
