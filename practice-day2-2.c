#include <stdio.h>

int main(void)
{
    char str[8];
    //��@�r���J
    scanf("%s",str);
    //��@�r���X
    printf("%s\n",str);
    //��@�r����X
    for (int i=0;i<8;i++)
    {

        printf("%c",str[i]);
    }
    printf("\n");
    //��@�Ʀr��X
    for (int i=0;i<8;i++)
    {

        printf("%d",str[i] - '0');
    }
    printf("\n");
    return 0;
}
