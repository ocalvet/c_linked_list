#include <stdio.h>
#include "linked_list.h"

int main(int nargs, char **args)
{
    node *head = createList(20);
    add_element(head, 42);
    add_element(head, 10);
    add_element(head, 21);
    add_element(head, 56);
    add_element(head, 90);
    print_list(head);
    remove_element(&head, 21);
    remove_element(&head, 20);
    print_list(head);
    return 0;
}