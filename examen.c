#include <stdio.h>
//PROBLEMA 1 EXPONENCIACION ENTERA
float exponenciacion(float b, float e){
	int res;
	if(e ==0)
		res=1.0;
	else if(e >0)
	{
		res=b * exponenciacion(b, e -1);
		}
		else if(e < 0){
			res = 1.0 / b *exponenciacion(b, e + 1);
		}
		return res;
	} 
int main(){
	float b = 0;
	float e = 0;
	float res; 
	printf("Ingresa el numero base: ");
	scanf("%f", &b);
	printf("Ingresa el exponente: ");
	scanf("%f", &e);
	res=exponenciacion(b, e);
	printf("Resultado = %.0f\n", res);
	return 1;
}
