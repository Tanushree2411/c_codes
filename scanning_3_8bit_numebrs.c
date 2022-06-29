

#include <stdio.h>

int getInput(){
    int in;
    printf("enter a value:");
    scanf("%d",&in);
    return in;
}
int main()
{
	unsigned char val=0;

	val=val | getInput();
	printf("the value of first input is %d\n",val);
	val=val & 0;
	// printf("the value of val now is %d",val);
	val=val | getInput();
	printf("the value of 2nd input is %d\n",val);
	val=val & 0;
	//   printf("the value of val now is %d\n",val);
	val=val | getInput();
	printf("the value of 3rd input is %d\n",val);









	return 0;
}
