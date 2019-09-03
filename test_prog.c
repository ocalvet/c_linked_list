#include <stdio.h>
#include "linked_list.h"

int main(int nargs, char **args)
{
    node *list = createList(20);
    add_element(list, 42);
    add_element(list, 10);
    add_element(list, 21);
    add_element(list, 56);
    add_element(list, 90);
    print_list(list);
    remove_element(&list, 21);
    remove_element(&list, 20);
    print_list(list);
    int searchInt = 33;
    node *element = search_element(list, searchInt);
    if (element != NULL)
    {
        printf("Found it! %d", element->data);
    }
    else
    {
        printf("Couldn't find element for %d", searchInt);
    }
    return 0;
}