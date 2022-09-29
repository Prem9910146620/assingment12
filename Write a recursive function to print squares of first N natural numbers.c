void square();
int main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);
    square(i);
    return 0;
}
void square(int n)
{
    if(n==0)
        return;
    square(n-1);
    printf(" %d",n*n);
}
