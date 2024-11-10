#include <stdio.h>
int main() 
{
    int x = 4, y = 5,m = 0;
    for (int i = 0; i < y; i++)
    {
        m = (m + x);
    }
    printf("product = %d", m);
    return 0;
}