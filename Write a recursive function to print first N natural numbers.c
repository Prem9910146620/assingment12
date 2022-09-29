void naturalnumb();
int main()
{
    int i;
    printf("enter the number ");
    scanf("%d",&i);
    naturalnumb(i);
    return 0;
}

void naturalnumb(int n)
{
    if(n>0)
     {
        naturalnumb( n-1);
        printf(" %d",n);
     }
}
