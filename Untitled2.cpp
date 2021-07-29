#include<stdio.h>
int main(){
	int n;
	printf("nhap so can kiem tra:");
	scanf("%d",&n);
	int uoc =0;
	for(int i=2;i<n;i++){uoc=uoc+1;}
	if (uoc=0){printf("%d la so nguyen to",n);}
	else {printf("%d khong phai la so nguyen to",n);
	}
	return 0;
}
