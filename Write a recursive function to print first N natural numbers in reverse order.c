void nreverse();
int main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);
    nreverse(i);
    return 0;
}
void nreverse(int n)
{    printf(" %d",n);
    if(n>=2)
   {
     nreverse( n-1);
   }
}

