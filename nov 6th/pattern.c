#include <stdio.h>
int main() 
{
    int i,j;
    scanf("%d%d",&i,&j);
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>=1;j--){
        printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}