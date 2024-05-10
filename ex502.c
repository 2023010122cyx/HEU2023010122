#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[100]={0},b[100]={0},c[100]={0},i=0,j=0,n=0,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d,",&a[i]);
	}
	for(i=0;i<n;i++){
		b[i]=a[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		int temp=0;
		if(b[i]>b[j]){
			temp=b[i];
			b[i]=b[j];
			b[j]=temp;
		}
	}
	}
	for(i=0;i<(n-1);i++){
		if(b[i]!=b[i+1]){
			c[k]=b[i];
			k++;
		}
	}
	c[k]=b[n-1];
	for(i=0;i<n;i++){
		int x=0;
		for(j=0;j<k+1;j++){
			if(a[i]==c[j]&&x==0){
				a[i]=j+1;
				x++;
//				printf("c[%d]=%d",j,c[j]);
//				printf("\n");
//				printf("a[%d]=%d",i,a[i]);
//				printf("\n");
		}
	}
}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}