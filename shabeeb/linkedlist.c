#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

};
 
void display(struct node *head){
    struct node *temp=head;
    if(head==NULL){
        printf("Linked list is empty");

    }
    else{
        while(temp!=NULL){
            printf("%d\t ", temp->data);
            temp=temp->next;
        }
    }
}
struct node* insertAtBeginning(struct node *head, int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL){
        printf("Memory allocate failed!\n");
        return head;
    }
    newnode->data = val;
    newnode->next = head; 
    head = newnode;      
    return head;
}
struct node* insertAtEnd(struct node *head, int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allopcation failed!\n");
        return head;
    }
    newnode->data = val;
    newnode->next = NULL;
    if (head == NULL){
        return newnode;
    }

    struct node *temp = head;
    while (temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}
struct node* insertAfterNode(struct node *head, int targetValue, int val) {
    struct node *temp = head;
    while (temp != NULL && temp->data != targetValue) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Node with value %d not found in the list!\n", targetValue);
        return head;
    }
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation faild!\n");
        return head;
    }
    newnode->data = val;
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}
struct node* deletingFromBeginning(struct node *head){
    if (head == NULL) {
        printf("list is already empty! nothing to delete.\n");
        return NULL;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);

    printf("first node deleted succwssfully.\n");
    return head;
}
int main(){
    struct node *head=NULL,*newnode,*temp;
    int choice=1;
    while (choice){
        newnode =(struct node*)malloc(sizeof(struct node));
        if (newnode == NULL){
            printf("Memory allocation failed\n");
            break;
        }

        printf("Enter data:");
        scanf("%d",&newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = head;
        }
        else {
            temp->next = newnode;
            temp = newnode;

        }
        printf("do you want to insert more data? (1 for yes, 0 for no):");
        scanf("%d",&choice);
    }
    printf("the linked list is: ");
    display(head);
    printf("\nThe linked list after inserting 99 at the beginning is: ");
    head = insertAtBeginning(head, 99);
    display(head);
    printf("\nThe linked list after inserting 200 at the end is: ");
    head = insertAtEnd(head, 200);
    display(head);
    printf("\nthe linked list after inserting in between is: ");
    head = insertAfterNode(head,12,900);
    display(head);
    printf("\n the linked list after deleting from the beginning is: ");
    head = deletingFromBeginning(head);
    display(head);
    return 0;
}

