#include <stdio.h>

main(){
	
	int x [] = {10,20,30,40,50};
	for(int i=0;i<5;i++){
		if(x[i]==30){
			continue;
		};
		printf("%d",x[i]);
	}
}
