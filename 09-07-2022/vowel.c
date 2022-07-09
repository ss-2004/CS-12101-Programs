// 09-07-22 Q10

#include <stdio.h>
int main()
{
	char ch;
	scanf("%c", &ch);
	
	switch(ch)
	{
		case 'a' : 	
		case 'e' : 
		case 'i' : 
		case 'o' : 
		case 'u' :
		case 'A' :
		case 'E' :
		case 'I' :
		case 'O' :
		case 'U' :
			printf("VOWEL\n");break;
		default : printf("CONSONANT\n");
	}
	return 0;
}
