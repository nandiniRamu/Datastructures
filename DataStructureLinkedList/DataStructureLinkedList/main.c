//
//  main.c
//  DataStructureLinkedList
//
//  Created by avinash on 9/10/17.
//  Copyright © 2017 abc. All rights reserved.
//

#include <stdio.h>
#include <malloc/malloc.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node *next;
};

typedef struct node Node ;

Node* getNode()
{
    Node *p = (Node *)malloc(sizeof(Node));
    
    if (p== NULL) {
        printf("Out of memory\n");
    }
    return p;
}
Node* insertNode(Node *list)
{
    Node *current = getNode();
    
    if (current != NULL) {
        int item;
        printf("Enter the item to insert\n");
        scanf("%d",&item);
        current->item = item;
        current->next = list;
    }
    return current;
           // list = current;
}



Node* insertNodeRear(Node *first)
{
    Node *temp = getNode();
    
    if (temp!= NULL) {
        
        int item;
        printf("Enter the item to insert\n");
        scanf("%d",&item);
        temp->item = item;
        temp->next = NULL;
        
        if (first!= NULL) {
        // navigate to the last node
            Node * cur = first;
            while (cur->next  != NULL) {
                cur = cur->next;
            }
            cur->next = temp;
           return first;
        }
        else
        {
            // this is first node
           return  temp;
        }
    }
    
    return temp;
}

void removeNode(Node *list)
{
    Node* temp = list->next;
    free(list);
    list = temp;
}

void displayNode(Node *list)
{
    Node *temp = list;
    while (temp!= NULL) {
    
        printf("%d\n",temp->item);
        temp = temp->next;
    }
}


Node* insertAtHead(Node *head , int data)
{
    Node *p = (Node*)malloc(sizeof(Node));
    
    p->item =data;
    if (head == NULL) {
        p->next = NULL;
        return p;
    }else {
        
        p->next = head;
        return p;
    }
    
}

Node* Reverse(Node *head)
{
    if(head){
        Node *prev, *cur, *next;
        prev = NULL;
        cur = head;
        while(cur->next != NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return head;
    }
    return head;
}

int main(int argc, const char * argv[]) {
   
    int choice;
    Node *list = NULL;
    Node *first ;
    
    
   
    printf("Linear linked list operations\n");
    printf("1.Insert Node front End\n");
    printf("2.Insert Node rear End\n");
    printf("3.Display node contents\n");
    printf("4.Exit\n");
    
    for (; ;) {
        printf("Enter choice\n");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                
            list =   insertNode(list);
                break;
            case 2:
               //list = insertNodeRear(list);
              list = Reverse(list);
                break;
            case 3:
                displayNode(list);
                break;
            default:
                return 0;
                break;
        }
    }
    return 0;
}












