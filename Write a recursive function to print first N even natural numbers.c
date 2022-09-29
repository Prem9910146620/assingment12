
void evennatural();
int main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);
    evennatural(i);
    return 0;
}
void evennatural(int n)
{
    if(n==0)
        return;
     evennatural(n-1);
     printf(" %d",2*n);
}
