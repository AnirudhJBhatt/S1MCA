#include<stdio.h>
#define n 5
int a[50],f=-1,r=-1;
void enqueue(){
    if((r+1)%n==f){
        printf("Queue is full");
    }
    else{
        if(f==-1)
            f=r=0;
        else
            r=(r+1)%n;
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
            f=(f+1)%n;
    }
}

void display(){
    int i;
    if(f==-1){
        printf("Queue is empty");
    }
    else{
        printf("Queue : ");
        for(i=f;i!=r;i=(i+1)%n){
            printf("%d \t",a[i]);
        }
        printf("%d \t",a[i]);
    }
}

void main(){
 int ch;
    do{
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice(1-4) : ");
        scanf("%d",&ch);

        switch(ch){
            case 1  :   enqueue();
                        break;
            case 2  :   dequeue();
                        break;
            case 3  :   display();
                        break;
        }
    }while(ch>0&&ch<4);
}

OUTPUT

1. Insert
2. Delete
3. Display
4. Exit
Enter your choice(1-4) : 1
Enter the element to be inserted : 10
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice(1-4) : 1
Enter the element to be inserted : 20
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice(1-4) : 1
Enter the element to be inserted : 30
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice(1-4) : 1
Enter the element to be inserted : 40
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice(1-4) : 1
Enter the element to be inserted : 50
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice(1-4) : 1
Queue is full
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice(1-4) : 3
Queue : 10 	20 	30 	40 	50 	
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice(1-4) : 2
10 is deleted
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice(1-4) : 2
20 is deleted
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice(1-4) : 1
Enter the element to be inserted : 60
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice(1-4) : 1
Enter the element to be inserted : 70
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice(1-4) : 3
Queue : 30 	40 	50 	60 	70 	
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice(1-4) : 4

