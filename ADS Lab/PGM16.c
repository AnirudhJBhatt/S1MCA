#include<stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *l,*r;
}*root, *ptr, *succ, *succparent;

struct node* create(int x){
    ptr=malloc(sizeof(struct node));
    ptr->data=x;
    ptr->l=ptr->r=NULL;
    return ptr;
}

struct node* insert(struct node* root, int x){
    if(root==NULL){
        return create(x);
    }
    if(x>root->data){
        root->r=insert(root->r,x);
    }
    else{
        root->l=insert(root->l,x);
    }
    
    return root;
}

struct node* del(struct node* root, int x){
    if(root==NULL){
        return root;
    }
    
    if(x>root->data){
        root->r=del(root->r,x);
        return root;
    }
    else if(x<root->data){
        root->l=del(root->l,x);
        return root;
    }
    
    if(root->l==NULL){
        ptr=root->r;
        free(root);
        return ptr;
    }
    else if(root->r==NULL){
        ptr=root->l;
        free(root);
        return ptr;
    }
    
    succparent=root;
    succ=root->r;
    while(succ->l!=NULL){
        succparent=succ;
        succ=root->l;
    }
    
    if(succparent!=root){
        succparent->l=succ->r;
    }
    else{
        succparent->r=succ->r;
    }
    
    root->data=succ->data;
    
    free(succ);
    return root;
}

void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->l);
        printf("%d\t",root->data);
        inorder(root->r);
    }
}

void preorder(struct node* root){
    if(root!=NULL){
        printf("%d\t",root->data);
        inorder(root->l);
        inorder(root->r);
    }
}

void postorder(struct node* root){
    if(root!=NULL){
        inorder(root->l);
        inorder(root->r);
        printf("%d\t",root->data);
    }
}
void main(){
    int ch,x;
    do{
        printf("\n1. Insert\n2. Delete\n3. Inorder Traversal\n4. Preorder Traversal\n5. Postorder Traversal\n6. Exit\nEnter your choice(1-6) : ");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("Enter the element : ");
                    scanf("%d",&x);
                    root=insert(root,x);
                    break;
            case 2: printf("Enter the element : ");
                    scanf("%d",&x);
                    root=del(root,x);
                    break;
            case 3: printf("Inorder Traversal : ");
                    inorder(root);
                    break;
            case 4: printf("Preorder Traversal : ");
                    preorder(root);
                    break;
            case 5: printf("Postorder Traversal : ");
                    postorder(root);
                    break;
        }
    }while(ch>0&&ch<6);
}

OUTPUT


1. Insert
2. Delete
3. Inorder Traversal
4. Preorder Traversal
5. Postorder Traversal
6. Exit
Enter your choice(1-6) : 1
Enter the element : 10

1. Insert
2. Delete
3. Inorder Traversal
4. Preorder Traversal
5. Postorder Traversal
6. Exit
Enter your choice(1-6) : 1
Enter the element : 5

1. Insert
2. Delete
3. Inorder Traversal
4. Preorder Traversal
5. Postorder Traversal
6. Exit
Enter your choice(1-6) : 1
Enter the element : 15

1. Insert
2. Delete
3. Inorder Traversal
4. Preorder Traversal
5. Postorder Traversal
6. Exit
Enter your choice(1-6) : 3
Inorder Traversal : 5	10	15	

1. Insert
2. Delete
3. Inorder Traversal
4. Preorder Traversal
5. Postorder Traversal
6. Exit
Enter your choice(1-6) : 4
Preorder Traversal : 10	5	15	

1. Insert
2. Delete
3. Inorder Traversal
4. Preorder Traversal
5. Postorder Traversal
6. Exit
Enter your choice(1-6) : 5
Postorder Traversal : 5	15	10	

1. Insert
2. Delete
3. Inorder Traversal
4. Preorder Traversal
5. Postorder Traversal
6. Exit
Enter your choice(1-6) : 2
Enter the element : 15

1. Insert
2. Delete
3. Inorder Traversal
4. Preorder Traversal
5. Postorder Traversal
6. Exit
Enter your choice(1-6) : 3
Inorder Traversal : 5	10	

1. Insert
2. Delete
3. Inorder Traversal
4. Preorder Traversal
5. Postorder Traversal
6. Exit
Enter your choice(1-6) : 6
