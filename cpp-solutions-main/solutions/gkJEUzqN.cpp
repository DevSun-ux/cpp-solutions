
void XoaDau(LIST &l)
{
    if(l.pHead != NULL)
    {
        NODE *p = l.pHead;
        l.pHead = l.pHead ->pNext;
        delete p;
    }
}