#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#define n 40

void preencheVetor(int V1[n],int V2[n]);
int verificaCondicao(int V1[n],int V2[n], int x,int y);

int main (){
	setlocale(LC_ALL,"Portuguese");
	int V1[n], V2[n],x, y, i;
	printf("Defina um valor inteiro para x\n");
	scanf("%d", &x);
	printf("Defina um valor inteiro para y\n");
	scanf("%d", &y);
	preencheVetor(V1,V2);
	if(verificaCondicao(V1,V2,x,y) == 1)
	printf("Condição verdadeira");
	else
	printf("Condição falsa");
	
}

void preencheVetor(int V1[n], int V2[n]){
	int i;
	for(i=0;i<n;i++){
		printf("\nInsira um valor pra posição [%d] do vetor 1\n", i);
		scanf("%d", &V1[i]);
	}
	for(i=0;i<n;i++){
		printf("\nInsira um valor pra posição [%d] do vetor 2\n", i);
		scanf("%d", &V2[i]);
	}
	printf("\nVetor 1:\n");
	for(i=0;i<n;i++){
		printf("%d ", V1[i]);
	}
	printf("\nVetor 2:\n");
	for(i=0;i<n;i++){
		printf("%d ", V2[i]);
	}
}
int verificaCondicao(int V1[n],int V2[n], int x,int y){
	int i,j, produtorio=1, somatorio=0;
	printf("\nX: %d, Y: %d\n", x,y);
	for(i=0;i<n;i++){
		if(i % 2 != 0)
		somatorio += x * V1[i];
	}
	for(j=0;j<n;j++){
		if(j % 2 == 0)
		produtorio *= y * V2[j];
	}
	printf("\nSomatório: %d, Produtório: %d\n", somatorio, produtorio);
	if(somatorio<=produtorio)
	return 1;
	else
	return 0;
}

