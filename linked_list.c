#include <stdlib.h>
#include <strings.h>
#include <stdio.h>
#include "linked_list.h"

node *createList(int firstData)
{
    node *head = (node *)malloc(sizeof(node));
    head->data = firstData;
    head->n = NULL;
    return head;
};

void add_element(node *head, int a)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = a;
    newNode->n = NULL;
    node *iter = head;
    while (iter->n != NULL)
        iter = iter->n;
    iter->n = newNode;
};

void remove_element(node **head, int d)
{
    if ((*head)->data == d)
    {
        node *old = (*head);
        (*head) = (*head)->n;
        free(old);
        return;
    }
    else
    {
        node *prior = (*head);
        node *iter = (*head)->n;
        while (iter != NULL)
        {
            if (iter->data == d)
            {
                node *removalNode = iter;
                prior->n = iter->n;
                free(removalNode);
                return;
            }
            prior = iter;
            iter = iter->n;
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
        iter = iter->n;
    }
};