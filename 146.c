#include <stdio.h>
#include<conio.h>

voidmain() {
	int m,n,o;
	scanf("%d %d %d",&m,&n,&o);
	
	if(m>n)
	{
		if(m<o)
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
  getch();
}
