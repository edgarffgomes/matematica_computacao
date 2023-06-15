#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#define tam 5

void preencheVetor(int V[tam]);
void imprimeVetor (int V[tam]);
void modificaVetor(int V[tam]);
int main(){
	int V[tam];
	preencheVetor(V);
	printf("Vetor original:\n");
	imprimeVetor(V);
	modificaVetor(V);
	printf("Vetor Modificado:\n");
	imprimeVetor(V);
}
void preencheVetor(int V[tam]){
	int i;
	srand(time(NULL));
	for (i=0;i<tam;i++){
		V[i] = rand() % 100 + 1;
	}
}
void imprimeVetor(int V[tam]){
	int i;
	printf("\n");
	for(i=0;i<tam;i++){
		printf("%d ", V[i]);
	}
	printf("\n");
}
void modificaVetor(int V[tam]){
	int i, j;
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(i!=j){
			V[i]+=V[j];
			}
		}
	}
}