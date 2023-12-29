#include<stdio.h>
#include <stdbool.h>
int a[11], b[11], res[11];
int U[11]={1,2,3,4,5,6,7,8,9,10};

void display(int bs[]){
    for(int i=1;i<11;i++){
        printf("%d\t",bs[i]);
    }    
}

void input(int bs[], int n){
    int x;
    printf("Enter the elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        bs[x]=1;
    }
}

void set_union(){
    for(int i=1;i<11;i++){
        res[i]=a[i] | b[i];
    }
    
    printf("\nUnion Set : ");
    display(res);
}

void set_intersection(){
    for(int i=1;i<11;i++){
        res[i]=a[i] & b[i];
    }
    
    printf("\nIntersection Set : ");
    display(res);
}

void set_difference(){
    for(int i=1;i<11;i++){
        res[i]=a[i] & ~b[i];
    }
    
    printf("\nDifference Set : ");
    display(res);
}

bool set_equality(){
    for(int i=1;i<11;i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

void main(){
    int s1,s2,ch;
    printf("\nEnter the size of bit-string 1 : ");
    scanf("%d",&s1);
    input(a,s1);
    printf("Set A : ");
    display(a);

    printf("\nEnter the size of bit-string 2 : ");
    scanf("%d",&s2);
    input(b,s2);
    printf("Set B : ");
    display(b);
    
    do{
        printf("\n1. Union\n2. Intersection\n3. Difference\n4. Equality\n5. Exit\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1 : set_union();
                     break;
            case 2 : set_intersection();
                     break;
            case 3 : set_difference();
                     break;
            case 4 : if(set_equality()){
                        printf("\nBit strings are equal");
                     }
                     else{
                         printf("\nBit strings are not equal");
                     }
                     break; 
        };
    }while(ch>0&&ch<5);
}

OUTPUT

Enter the size of bit-string 1 : 5
Enter the elements : 1 3 5 7 9
Set A : 1	0	1	0	1	0	1	0	1	0	

Enter the size of bit-string 2 : 5
Enter the elements : 2 4 6 8 10
Set B : 0	1	0	1	0	1	0	1	0	1	

1. Union
2. Intersection
3. Difference
4. Equality
5. Exit
Enter your choice : 1
Union Set : 1	1	1	1	1	1	1	1	1	1	

1. Union
2. Intersection
3. Difference
4. Equality
5. Exit
Enter your choice : 2
Intersection Set : 0	0	0	0	0	0	0	0	0	0	

1. Union
2. Intersection
3. Difference
4. Equality
5. Exit
Enter your choice : 3
Difference Set : 1	0	1	0	1	0	1	0	1	0	

1. Union
2. Intersection
3. Difference
4. Equality
5. Exit
Enter your choice : 4
Bit strings are not equal

1. Union
2. Intersection
3. Difference
4. Equality
5. Exit
Enter your choice : 5