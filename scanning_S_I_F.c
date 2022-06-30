
#include <stdio.h>

/*
    1 0 1 0  1 0 1 0
    0XFF = 1111 1111
    
    i = val & 0x07;
    j = ((val & 0x28) >> 3);
    k = ((val & 0xB0) >> 6);
    
    if(ox10 & val)
    {

    }
*/


/*
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
*/

int main()
{
    unsigned int var;
    int flag,interuupt,status;
    printf("enter the value of a variable\n");
    scanf("%d",&var);

            status=7&var;
            printf("status value is %d\n",status);
            interuupt=((7<<3)&var)>>3;
            printf("interuupt value is %d\n",interuupt);
            flag=((7<<6)&var)>>6;
            printf("flag value is %d\n",flag);
         //   break;
     /*   case 2:
            interuupt=((7<<3)&var)>>3;
            printf("status value is %d",status);
            
            break;
        case 3:
            flag=((7<<6)&var)>>6;
            printf("status value is %d",status);
            break;
    }*/
    
    
    

    return 0;
}


// Read, Store, Process, Show
