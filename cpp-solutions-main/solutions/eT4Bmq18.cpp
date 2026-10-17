
#include<iostream>
using namespace std;

struct node
{
    KieuDuLieu Info;
    struct node* pnext;
};
typedef struct node NODE;

struct list
{
    NODE* pHead;
    NODE* pTail;
};
typedef struct list LIST;