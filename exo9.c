#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,m,Sn,Sm,i;
	printf("n:");
	scanf("%d",&n);
	printf("m:");
	scanf("%d",&m);
i=1;
while(i!=(n-1)){
	
	if (n%i==0){
	Sn=Sn+i;
	printf("Sn: %d\n",i);
	}
	i++;
}
i=1;
while(i!=(m-1)){
	
	if (m%i==0){
	Sm=Sm+i;
	printf("Sm: %d\n",i);
	}
	i++;
}
		if(Sn==m && Sm==n) {printf("ils sont bien amis\n"); return 0;}
		else{ printf("ils ne sont pas amis\n"); return 0;}
	
	}
