#include <stdio.h>
#include <stdlib.h>
int main(){
	int sh,sc;
	scanf("%d%d",&sh,&sc);
	float **a=(float**)calloc(sh,sizeof(float*));
	for(int i=0;i<sh;i++){
		a[i]=(float*)calloc(sc,sizeof(float));
	}
	for(int i=0;i<sh;i++){
		for(int j=0;j<sc;j++){
			scanf("%f",&a[i][j]);
		}
	}
	for(int i=0;i<sh;i++){
		for(int j=0;j<sc;j++){
			printf("%.2f ",a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<sh;i++){		
		free(a[i]);
	}
	free(a);
}
