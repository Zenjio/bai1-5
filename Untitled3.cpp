
#include<stdio.h>
int main(){
	float a,b,c;
	printf("nhap diem TB HKII: ");
	scanf("%f",&a);
	printf("nhap diem TB toan: ");
	scanf("%f",&b);
	printf("nhap diem TB van: ");
	scanf("%f",&c);
    if(a>10||b>10||c>10||a<0||b<0||c<0){printf("diem khong hop le");}
	else if(a>=8 && (b>=8||c>=8)){printf("la hoc sinh gioi");}
	else if(a>=6.5 && (b>=6.5||c>=6.5)){printf("la hoc sinh khac");}
	else if(a>=5 && (b>=5||c>=5)){printf("la hoc sinh TB");}
	else if(a<5){printf("la hoc sinh yeu");}
    return 0;
}
