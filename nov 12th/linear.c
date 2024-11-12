#include<stdio.h>
int main()
{
    int array[100],n,search,c;
    printf("Enter the number of ele in array:");
    scanf("%d,&n");
printf("Enter %d integer(s)\n", n);
 for (c = 0; c < n; c++)
 scanf("%d", &array[c]);
 printf("Enter a number to search\n");
 scanf("%d", &search);
 for (c = 0; c < n; c++)
 {
 if (array[c] == search) 
 {
 printf("%d is present at location%d.\n", search, c+1);
 break;
 }
 }
 if (c == n)
 printf("%d isn't present in thearray.\n", search);
 return 0;

}