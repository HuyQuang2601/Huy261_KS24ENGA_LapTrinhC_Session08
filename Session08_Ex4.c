#include <stdio.h>

int main(){
	int i,j;
	int number[3][3]= {{3,4,9},{10,7,8}};
	int max = number[0][0];
	for (int i=0; i<3; i++){
		for (j=0; j<3; j++){
			
		if(number[i][j] > max){
		max = number[i][j];
	

		}
		}
	}
		printf("So lon nhat la %d\n", max);
}
	

