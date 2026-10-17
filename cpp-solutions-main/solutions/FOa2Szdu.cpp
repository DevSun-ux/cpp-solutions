
NODE* getnode(PHANSO x)
{
    NODE* p;
    p = new NODE;
    if(p == NULL)
        return NULL;

    p->info = x;
    p->pNext = NULL;

    return p;
}