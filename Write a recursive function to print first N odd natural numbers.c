#include<stdio.h>
void oddn();
int main()
{
    int i;
    printf("enter the number ");

    scanf("%d",&i);
    oddn(i);
    return 0;
}
void oddn(int n)
{
    if(n==0)
     return;
    oddn(n-1);
    printf(" %d",2*n-1);

}
