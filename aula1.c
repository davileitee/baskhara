#include <stdio.h>
int main(){
	float NF;
	printf("Digite s nota final:");
	scanf("%f", &NF);
	
	if (NF >=7){
		printf("aprovado\n");
	} else if ( NF > 4){
		printf("recuperacao\n");
	}
	 else {
	 	printf("reprovado\n");
	 }
	return 0;
}
