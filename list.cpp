#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(void);
void display(void);

int main() {
    int a;

    while(1) {
        printf("\n1. Insert at beginning\n");
        printf("2. Display\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &a);

        switch(a) {
            case 1:
                insert();
                display();
                break;

            case 2:
                display();
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

void insert() {
    struct node *temp;

    temp = (struct node*)malloc(sizeof(struct node));

    if(temp == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter data: ");
    scanf("%d", &temp->data);

    temp->next = NULL;

    if(head == NULL) {
        head = temp;
    }
    else {
        temp->next = head;
        head = temp;
    }
}

void display() {
    struct node *temp;
    temp = head;
    while(temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
