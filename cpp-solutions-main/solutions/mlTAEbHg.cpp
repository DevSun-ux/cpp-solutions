
void input(LIST &l)
{
    int n;
    printf("\nNhap so luong node: ");
    scanf("%d", &n);
    init(l);
    for(int i = 1; i <= n; i++)
    {
        KieuDuLieu x;
        nhap(x);
        NODE* p = getnode(x);
        addHead(l, p);
    }
}