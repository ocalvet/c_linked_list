#include <stdlib.h>
#include <strings.h>
#include <stdio.h>
#include "linked_list.h"

node *createList(int firstData)
{
    node *head = (node *)malloc(sizeof(node));
    head->data = firstData;
    head->next = NULL;
    return head;
};

void add_element(node *head, int a)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = a;
    newNode->next = NULL;
    node *iter = head;
    while (iter->next != NULL)
        iter = iter->next;
    iter->next = newNode;
};

void remove_element(node **head, int d)
{
    if ((*head)->data == d)
    {
        node *old = (*head);
        (*head) = (*head)->next;
        free(old);
        return;
    }
    else
    {
        node *prior = (*head);
        node *iter = (*head)->next;
        while (iter != NULL)
        {
            if (iter->data == d)
            {
                node *removalNode = iter;
                prior->next = iter->next;
                free(removalNode);
                return;
            }
            prior = iter;
            iter = iter->next;
        }
    }
}

void print_list(node *head)
{
    node *iter = head;
    printf("\nPrinting List\n\n");
    while (iter != NULL)
    {
        printf("%d\n", iter->data);
        iter = iter->next;
    }
};