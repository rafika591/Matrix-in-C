//Sparse Matrix
#include<stdio.h>
int main(){
	int mat[3][3]={
	{0,1,0},
	{2,0,0},
	{1,1,0}
	};
	int zeroscount=0;
	int totalelements=3*3;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(mat[i][j]==0){
				zeroscount++;
			}
		}
	}
	if(zeroscount>totalelements/2){
		printf("Sparse Matrix");
	}
		else{
			printf("Not Sparse Matrix");
		}
	return 0;
}
