
void evenreverse();
int main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);
    evenreverse(i);
    return 0;
}
void evenreverse(int n)
{
    if(n==0)
        return;
        printf(" %d",2*n);
     evenreverse(n-1);

}
