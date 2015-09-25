#include <stdio.h>
#include <ctype.h>
int main()
{
	char c;
	while((c=getchar())!=EOF)
	{
	c = tolower(c);
		switch(c)
		{
			case 'a':
				printf(".- ");
				break;  
			case 'b':
				printf("-... ");
				break;
			case 'c':
				printf("-.-. ");
				break;
			case 'd':
				printf("-.. ");
				break;
			case 'f':
				 printf("..-. ");
				break;
			case 'g':
				 printf("--. ");
				break;
			case 'h':
				printf(".... ");
				break;
			case 'i':
				printf(".. ");
				break;
			case 'j':
				printf(".--- ");
				break;
			case 'k':
				printf("-.- ");
				break;
			case 'l':
				printf(".-.. ");
				break;
			case 'm':
				printf("-- ");
				break;
			case 'n':
				printf("-. ");
				break;
			case 'o':
				printf("--- ");
				break;
			case 'p':
				printf(".--. ");
				break;
			case 'q':
				printf("--.- ");
				break;
			case 'r':
				printf(".-. ");
				break;
			case 's':
				printf("... ");
				break;
			case 't':
				printf("- ");
				break;
			case 'u':
				printf("..- ");
				break;
			case 'v':
				printf("...- ");
				break;
			case 'w':
				printf(".-- ");
				break;
			case 'x':
				printf("-..- ");
				break;
			case 'y':
				printf("-.-- ");
				break;
			case 'z':
				printf("--.. ");
				break;
		}
	}
}
