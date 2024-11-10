#include<stdio.h>
#include<string.h>
int main()
{
   char arr[100];
   scanf("%[^\n]s",arr);
   for(int i=0;arr[i]!='\0';i++)
   {
     if(!((arr[i]>='a'&&arr[i]<='z')||(arr[i]>='A'&&arr[i]<='Z')))
       {
           int j=1;
           while(!((arr[i+j]>='a'&&arr[i+j]<='z')||(arr[i+j] >='A'&&arr[1+j]<='Z')))j++;
           strcpy(&arr[1],&arr[i+j]);
      }
   }
   printf("%s",arr);
   return 0;
}