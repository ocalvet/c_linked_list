typedef struct s_node
{
    int data;
    struct s_node *n;
    struct s_node *p;
} node;

node *createList();
void add_element(node *head, int a);
void remove_element(node **head, int d);
node *search_element(node *head, int d);
void print_list(node *);