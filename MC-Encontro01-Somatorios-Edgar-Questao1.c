#include<stdio.h>
#include<stdlib.h>
#define n 5
	
int somatorioa (int A[][n]);
int somatoriob (int A[][n]);
int somatorioc (int A[][n]);
int somatoriod (int A[][n]);
int somatorioe (int A[][n]);
int somatoriof (int A[][n]);
int somatoriog (int A[][n]);
void somatorioh (int A[][n], int X);
void somatorioi(int V[n], int A[][n]);
void produtorioj(int P[n],int A[][n]);
int main(){
	int A[n][n]={{0,2,8,1,7},{1,5,8,2,2},{3,4,0,8,1},{9,1,2,7,2},{3,0,1,0,4}};
	int V[n]={0,0,0,0,0};
	int P[n]={1,1,1,1,1};
	int i, j,x;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ", A[i][j]);
		}
		printf("\n");
    }
    printf("\nDigite um valor para ser usado no somatorio h\n");
	scanf("%d", &x);
	printf ("\n O resultado do somatorio a  e %d \n", somatorioa (A));
	printf ("\n O resultado do somatorio b e %d \n", somatoriob (A));
	printf ("\n O resultado do somatorio c e %d \n", somatorioc (A));
	printf ("\n O resultado do somatorio d e %d \n", somatoriod (A));
	printf ("\n O resultado do somatorio e e %d \n", somatorioe (A));
	printf ("\n O resultado do somatorio f e %d \n", somatoriof (A));
	printf ("\n O resultado do somatorio g e %d \n", somatoriog (A));
	somatorioh (A, x);
    somatorioi (V,A);
    produtorioj (P,A);
	return 0;
}
int somatorioa (int A[][n]){
	int i, j, S=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			S += A[i][j];
		}
	}
	return S;
}
int somatoriob (int A[][n]){
	int i, j, S=0;
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			S += A[i][j];
		}
	}
    return S;
}
int somatorioc (int A[][n]){
	int i, j, S=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		    if(i!=j)
		    S += A[i][j];
	    }
    }
return S;
}
int somatoriod (int A[][n]){
	int i, j, S=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j)
		    S += A[i][j];
		}
	}
	return S;
}
	int somatorioe (int A[][n]){
		int i, j, S=0;
		for(i=0;i<n;i++){
		    for(j=0;j<n;j++){
		        if(i<j)
			    S += A[i][j];
		}
	}
	return S;
}
int somatoriof (int A[][n]){
	int i, j, S=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		    if(i>j)
		    S += A[i][j];
	    }
	}
	return S;
}
int somatoriog (int A[][n]){
	int i, j, S=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		    if(i<j)
		    S+= A[i][j]*A[j][i];
		}
	}
	return S;
}
void somatorioh (int A[][n], int x){
		int i, j, S=0;
		for(i=0;i<n;i++){
		    for(j=0;j<n;j++){
	  	        S += x*A[i][j];
		    }
	    }
	printf("Valor final de S da questao h: %d\n", S);
	}
	void somatorioi (int V[n],int A[][n]){
		int i,j;
		for (i=0;i<n;i++){
			for(j=0;j<n;j++){
				V[i] += A[i][j];
			}
		}
		printf("Vetor questao i:\n");
		for (i=0;i<n;i++){
			printf("\n%d\n", V[i]);
		}
	}
	void produtorioj (int P[n], int A[][n]){
		int i,j,termo=0;
		for (i=0;i<n;i++){
			for(j=0;j<n;j++){
			P[j]=A[i][j]*P[j];
			}
		}
		printf("Vetor questao j:\n");
			for (j=0;j<n;j++){
			printf("%d\n", P[j]);
		}	
	}