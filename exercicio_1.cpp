#include <stdio.h>
#include <stdlib.h>

main(){
	int num1=0;
	for(num1=1;num1<=2000;num1++){
	if(num1>=1 && num1<=500){
		printf("setor1:%d\n",num1);
	}
	if(num1>=501 && num1<=1000){
	    printf("setor2:%d\n",num1);
	}
	if(num1>=1001 && num1<=2000){
	    printf("nsetor3:%d\n",num1);
	}
	
}   
    
	system("Pause");
	return 0;
}
