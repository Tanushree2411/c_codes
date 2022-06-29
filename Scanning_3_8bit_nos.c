#include <stdio.h>

int main()
{
    unsigned int temp;
    unsigned char val=0;

    for(int i=0;i<3;i++)
    {
        scanf("%d",&temp);
        val|=1<<temp;
         printf("%d",val);
        getchar();
    }

    printf("out of first loop");

    for(int i=0;i<8;i++)
    {

        if(val & (1<<i))
        {
            printf("value is %d",i);
        }
    }













    return 0;
}


