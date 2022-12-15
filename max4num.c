//3.max form 4 number


#include<stdio.h>
main()
{
	int a,b,c,d;
	
	printf("enter value a:");
	scanf("%d",&a);
	printf("enter value b:");
	scanf("%d",&b);
	printf("enter value c:");
	scanf("%d",&c);
	printf("enter value d:");
	scanf("%d",&d);
	
	if(a>b)
		{
			if(a>c)
				{
					if(a>d)
						{
							printf("a is max %d",a);
						}
					else
						{
							printf("d is max %d",d);
						}
						
				}
			else
			{
				if(c>d)
					{
						printf("c is max %d",c);
					}
				else
					{
						printf("d is max %d",d);
					}
			}
		}
	else
		{
			if(b>c)
				{
					if(b>d)
						{
							printf("b is max %d",b);
						}
					else
						{
							printf("d is max %d",d);
						}
				}
			else
			{
				if(c>d)
					{
						printf("c is max %d",c);
					}
				else
					{
						printf("d is max %d",d);
					}
			}
		}
	
}

