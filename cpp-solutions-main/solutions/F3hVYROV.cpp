
#include<iostream>
using namespace std;

struct Node
{
    float data;
    struct Node* pNext;
};
typedef struct Node NODE;

struct List
{
    NODE *pHead, *pTail;
};
typedef struct List LIST;