#include <stdio.h>

int main(){
	int m,n,arr[m][n];
	printf("Nhap vao kich thuoc ma tran vuong: ");
	scanf("%d", &m);
	for(int i =0; i<m; i++){
		for(int j =0; j<m; j++){
		printf("Phan tu o vi tri hang %d, cot %d", i+1, j+1);
		scanf("%d", &arr[i][j]);
		}
	}
	for(int i =0; i<m; i++){
		for(int j =0; j<m; j++){
			printf("%3d", arr[i][j]);
		}
	printf("\n");
	}
	
}
