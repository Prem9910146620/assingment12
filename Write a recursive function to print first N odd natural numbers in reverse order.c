void oddreverse();
int main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);
    oddreverse(i);
    return 0;
}
void oddreverse(int n)
{
    if(n==0)
        return;
        printf(" %d",2*n-1);
     oddreverse(n-1);
}
