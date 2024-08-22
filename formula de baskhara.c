#include <stdio.h>
#include <math.h>

int main (){
	float a, b ,c , delta, x1, x2;
	printf("de um valor para A:\n");
	scanf("%f",&a);
	
	printf("de um valor para B:\n");
	scanf("%f",&b);
	
    printf("de um valor para C:\n");
	scanf("%f",&c);
	
	delta= b*b - 4*a*c;
	
	x1=(-b + sqrt(delta))/(2*a);
	x2=(-b - sqrt(delta))/(2*a);
	
	if(a==0){
		printf("o coeficiente A nao pode ser igual a 0 em equacao de segunda grau");
		return 1;
	}
	
	if(delta>0){
		printf("X1= %.2f\n X2=%f ", x1, x2);
	}else if (delta==0){
		printf("X= %.3f\n",x1);
	}else {
		printf("nulo");
	}
	
	
	return 0;
}
