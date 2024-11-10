#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='a' &&ch<='z'){
    ch=ch+('a'-'A');
    printf("%ch",ch);
}
else if (ch>='A' &&ch<='Z'){
  ch=ch+('a'-'A') ;
   printf("%ch",ch);
}
else{
printf("invalid input");
}
return 0;
}