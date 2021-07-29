#include<stdio.h>
int main(){
	int n;
	printf("nhap so can kiem tra:");
	scanf("%d",&n);
	if (n<2){printf("%d khong phai la so nguyen to",n);}
	else{
	int uoc =0;
	for(int i=1;i<=n;i++){if (n%i==0){uoc=uoc+1;}}
	if (uoc=2){printf("%d la so nguyen to",n);}
	else {printf("%d khong phai la so nguyen to",n);
	}}
	return 0;
}
