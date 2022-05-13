#include <stdio.h>

int main()
{
    unsigned char i = 1;
    while (i!=0)
    {
        printf("%hhu\n", i);
        i <<= 1;
    }
    return 0;
}