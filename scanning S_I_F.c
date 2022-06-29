/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  //  unsigned int temp; 
    unsigned int val=172;

    //for(int i=0;i<3;i++)
  //  {
      //  scanf("%d",&temp);
     //   val|=1<<temp;
        // printf("%d",val);
     //   getchar();
 //   }
   
  // printf("out of first loop");
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
  //  val=val<<6;
//    printf("value is %d",val);
    
    return 0;
}




