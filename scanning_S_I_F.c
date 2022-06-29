#include <stdio.h>

int main()
{
  
    unsigned int val;
    printf("enter a number");
    scanf("%d",&val);
    printf("the first value represents status,2nd value represnts  interrupts and 3rd value represents flag\n");
      for(int i=0;i<=6;i+=3)
    {
        
        if(val & (7<<i))
        {
            printf("value is %d\n",(val &(7<<i))>>i);
        }
        else
        printf("value is 0\n");
    }
    return 0;
}




