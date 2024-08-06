struct snode
{
    int data;
    struct snode *next;
};

struct dnode
{
    struct dnode *prev;
    int data;
    struct dnode *next;
};

void display(struct snode *head);
struct snode* push(struct snode *head, int data);
struct snode* pop(struct snode *head);
struct snode* insert_node(struct snode *head, int pos, int data);
struct snode* delete_node(struct snode *head, int pos);