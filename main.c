#include<stdio.h>

int main(){
	int vector[10], i, contador, j, k,n;
	printf("dame diez numeros\n");
	for(i=0;i<=9;i++){
		scanf("%d", &vector[i]);
		
	}
	
	for(i=0;i<=9;i++){
		contador=0;
				n=vector[i];
		for(j=0;j<=9;j++){
		
			
			if(n==vector[j]){
				
				contador=contador+1;
			printf("numero %d ", n);
			printf("contador %d \n", contador);
			
			
			}
		
	}
	
	}
	
	printf("numero %d", n);
	return(0);
}
