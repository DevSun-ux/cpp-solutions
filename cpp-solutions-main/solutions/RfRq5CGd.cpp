
struct sophuc
{
    float thuc;
    float ao;
};
typedef struct sophuc SOPHUC;

struct node
{
    SOPHUC Info;
    struct node* pNext;
};
typedef struct node NODE;

struct list
{
    NODE* pHead;
    NODE* pTail;
};
typedef struct list LIST;