#include <stdio.h>
#include <stdlib.h>

int main()
{
	int X,Y,res;
	
scanf("%d", &X);
scanf("%d", &Y);
while(X!=1){
	if(X%2==0){
	X=(X/2);
	Y=2*Y;
	printf("%d %d %d\n",X,Y,res);
}
	else{
		X=(X-1);
		res=res+Y;
		Y=Y;
			printf("%d %d %d\n",X,Y,res);

		}
}
	X=Y+res;
	printf("%d",X);
	
	return 0;
}
