#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n,h,m,s;
h=0;m=0;s=0;
scanf("%d", &n);
	h=n/3600;
	n=n%3600;
	m=n/60;
	n=n%60;

printf("%d secondes correspond à %d heure %d minutes %d secondes",n,h,m,s);

return 0;
	
	
	
	
	
}
