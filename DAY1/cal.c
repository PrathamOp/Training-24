/*This is a caclulator program taking input from the user*/
/*PROBLEM 10*/

#include<stdio.h>
#include<float.h>

int main()
{
	int num1,num2,ans;
	char op;


	printf("Enter two numbers : \n");
	scanf("%d %d",&num1, &num2);

	printf("Enter the operation to perform : \n");
	scanf(" %c",&op);


		if(op =='+')
		{
			ans = num1 + num2;
			printf("%d\n",ans);
		}
		else if(op =='-')
		{
			ans = num1 - num2;
			printf("%d\n", ans);
		}
		else if(op =='*')
		{
			ans = num1*num2;
			printf("%d\n", ans);
		}
		else if(op =='/')
		{
			ans = num1/num2;
			printf("%d\n", ans);
		}
		else 
		{
			printf("Enter valid operator \n");
		}

		return(0);
}
