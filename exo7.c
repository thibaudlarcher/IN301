#include <stdio.h>
#include <stdlib.h>

int main()
{
	float Epsilon,n,i;
	float res;
	scanf("%f",&Epsilon);
	n=2;
	i=1;
	res=0;
	while(1/((i+1)*(i+1))+res-res>Epsilon){
		
			res=res+1/(i*i);
			i++;
	}
	printf("%f\n",res);
	return 0;
	
	
	
	}
