#include<stdio.h>
#include<stdlib.h>

struct node{
    int num;
    struct node *link;
}*head,*temp=NULL,*node;

void insert();
void show();

void insert(){
    char ch;
    do {
        node = (struct node*)malloc(sizeof(struct node));
        printf("Enter a number to store: ");
        scanf("%d",&node->num);
        node -> link = NULL;
        if(head == NULL){
            temp = node;
            head = node;
        }
        else{
            temp ->link = node;
            temp = node;
        }
        fflush(stdin);
        printf("Do you want to add more numbers?\nType Y/y for yes and any other key to print and exit.");
        scanf("%c",&ch);
    }while(ch=='y'||ch=='Y');
    temp->link = head;
}
void show(){
    printf("The linked list is :\n");
    temp = head;
    char ch;
    while(1){
        printf("%d \n",temp->num);
        fflush(stdin);
        printf("Enter M/m to print more values, any other key to exit.->\n");
        scanf("%c",&ch);
        if(ch=='m'||ch=='M')
        {
            temp=temp->link;
        }
        else if(ch!='m'||ch!='M'){
            break;
        }
    }
}


int main(){
    char ch;
    insert();
    show();
}