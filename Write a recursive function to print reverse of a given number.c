
void reversenumb();
int main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);
    reversenumb(i);
    return 0;
}
void reversenumb(int n)
{
    if(n==0)
        return;
    printf("%d",n%10);
    reversenumb(n/10);
}
