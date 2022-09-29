void decimaltooctal();
int main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);
    decimaltooctal(i);
    return 0;
}
void decimaltooctal(int n)
{
    int r;
    if(n==0)
        return;
    r=n%8;
     decimaltooctal(n=n/8);
    printf("%d",r);
}
