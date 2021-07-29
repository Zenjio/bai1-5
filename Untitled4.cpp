#include<stdio.h>
int main(){
	int a;
	printf("nhap tong doanh thu cua cong ty:");
	scanf("%d",&a);
	int thue=0;
	if (a<0){printf("0");}
	else if(a<=200000000){printf("thue phai tra la %d VND",thue=thue+(a*0.03));}
	else if(a<=500000000&&a>200000000){printf("thue phai tra la %d VND",thue=thue+(a*0.05));}
	else if(a>1000000000){printf("thue phai tra la %d VND",thue=thue+(a*0.1));}
	return 0;
}
