#include<stdio.h>
struct s1{
    int a;
    float b;
};

int main()
{
    printf("%d",sizeof(struct s1));
    return 0;
}