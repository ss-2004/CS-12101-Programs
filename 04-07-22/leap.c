// 04-07-2022 Q2

#include <stdio.h>

int main()
{
	  int year;
	  printf("Enter year : ");
	  scanf("%d", &year);
	
	  if(year%400 == 0 || year % 4 == 0)
		    printf("LEAP\n");
	  else
		    printf("NOT LEAP\n"); 
	  return 0;
}
