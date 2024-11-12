#include<stdio.h>
struct s1{
    char a;
    double b;
};

int main()
{
    printf("%d",sizeof(struct s1));
    return 0;
}