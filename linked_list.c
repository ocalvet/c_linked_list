#include <stdlib.h>
#include <strings.h>
#include <stdio.h>
#include "linked_list.h"

node *createList(int firstData)
{
    node *head = (node *)malloc(sizeof(node));
    head->data = firstData;
    head->n = NULL;
    head->p = NULL;
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
    newNode->p = iter;
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
        node *iter = (*head)->n;
        while (iter != NULL)
        {
            if (iter->data == d)
            {
                node *removalNode = iter;
                iter->p->n = iter->n;
                free(removalNode);
                return;
            }
            iter = iter->n;
        }
    }
}

node *search_element(node *head, int d)
{
    node *iter = head;
    while (iter != NULL)
    {
        if (iter->data == d)
        {
            return iter;
        }
        iter = iter->n;
    }
    return NULL;
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