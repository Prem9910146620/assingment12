void decimaltobinary();
int main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);
    decimaltobinary(i);
    return 0;
}
void decimaltobinary(int n)
{
    int r;
    if(n==0)
        return;
    r=n%2;
     decimaltobinary(n=n/2);
    printf("%d",r);
}
