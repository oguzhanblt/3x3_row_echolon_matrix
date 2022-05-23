#include<stdio.h>
#include<conio.h>
#include<math.h>
int i,j,k,a,b;
float tem;
int main()
{
	int row,col;
	float mat[3][3];	
	row=3;
    col=3;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Eleman %d,%d 'i giriniz : ",i+1,j+1);
			scanf("%f",&mat[i][j]);
		}
	}
	printf("Matrixiniz :: \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
		{
			printf("%.1f\t",mat[i][j]);
		}
		printf("\n");
	}
	for(k=0;k<row;k++){
		if( (mat[k][k]) != 1){
			float temp = mat[k][k];
			if(temp == 0)
				continue;
			for(j=0;j<col;j++){
				mat[k][j] = ( (mat[k][j]) / temp );
			}
		}
		for(i=k+1;i<row;i++){
			tem = mat[i][k];
			for(j=k;j<col;j++){
				mat[i][j] = mat[i][j] - ( mat[k][j] * tem );
			}
		}
		printf("\n**********\n");
		if(k==row-1)
			printf("Indirgenmis Eselon Form : \n\n");
		else
			printf("Adim %d\n\n",k+1);
		for(a=0;a<row;a++){
			for(b=0;b<col;b++){
				if(mat[a][b] == -0)
					mat[a][b] = 0;
				printf("%.1f\t",mat[a][b]);
			}
			printf("\n");
		}
	}
	getch();
}