//4.disply monday to sunday usig switch


#include<stdio.h>
main()
{
	char c;
	
	printf("m.monday\n");
	printf("t.tuesday\n");
	printf("w.wednesday\n");
	printf("T.thursday\n");
	printf("f.friday\n");
	printf("s.saturday\n");
	printf("S.sunday\n\n\n");
	
	
	printf("enter value c:");
	scanf("%c",&c);
	switch(c)
	{
	
	
		case 'm':
			printf("monday");
			break;
			
		case 't':
			printf("tuesday");
			break;
			
		case 'w':
			printf("wednesday");
			break;
			
		case 'T':
			printf("thursday");
			break;
			
		case 'f':
			printf("friday");
			break;
			
		case 's':
			printf("saturday");
			break;
			
		case 'S':
			printf("sunday");
			break;
			
		default:
			printf("Invalid Input");
			break;
	}
}
