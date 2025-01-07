#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

float findMean(struct Node *head)
{
    // if (head == NULL) {
    //     printf("List is empty.\n");
    //     return 0;
    // }

    int sum = 0, count = 0;
    struct Node *temp = head;

    while (temp != NULL)
    {
        sum += temp->data;
        count++;
        temp = temp->next;
    }
    return (float)sum / count;
}

int findMax(struct Node *head)
{
    // if (head == NULL) {
    //     printf("List is empty.\n");
    //     return -1;
    // }

    int max = head->data;
    struct Node *temp = head->next;

    while (temp != NULL)
    {
        if (temp->data > max)
        {
            max = temp->data;
        }
        temp = temp->next;
    }
    return max;
}

long long findProduct(struct Node *head)
{
    // if (head == NULL) {
    //     printf("List is empty.\n");
    //     return 0;
    // }

    long long product = 1;
    struct Node *temp = head;

    while (temp != NULL)
    {
        product *= temp->data;
        temp = temp->next;
    }
    return product;
}

void displayList(struct Node *head)
{
    struct Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;
    struct Node *temp = NULL;
    int n, value;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);

        struct Node *newNode = createNode(value);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            temp->next = newNode;
        }
        temp = newNode;
    }

    displayList(head);

    printf("Maximum Value (MAX): %d\n", findMax(head));
    printf("Average (MEAN): %f\n", findMean(head));
    printf("Product (PROD): %ld\n", findProduct(head));

    return 0;
}
