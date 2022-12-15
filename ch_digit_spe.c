//1.check it is alphabet,digit,special character

#include<stdio.h>
main()
{
	char ch;
	
	printf("enter value :");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
		{
			printf("this is character %c",ch);
	
		}
	else if(ch>='0'&&ch<='9')
		{
			printf("this is digit %c",ch);

		}
		else
		{
		printf("this is special character %c",ch);
		}
}
