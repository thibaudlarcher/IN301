#include <stdio.h>
#include <stdlib.h>
 int main()
 {
	 int n,i;
	 i=2;
	scanf("%d",&n);
	while(i!=(n-1)){
		if(n%i==0){printf("faux\n"); return 0;}
		i++;
	}
	 printf("vrais\n");
	 return 0;
 }
