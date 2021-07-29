#include<stdio.h>
int main(){
	int a;
	printf("nhap so dien ho gia dinh tieu thu (kWh):");
	scanf("%d",&a);
	int tien=0;
	if (a<0){printf("so dien nhap khong hop le");}
    else if(a>0&&a<=50){printf("so tien dien ho gia dinh phai tra thang nay la: %d", tien=a*1000);}
    else if(a>50&&a<=100){printf("so tien dien ho gia dinh phai tra thang nay la: %d", tien=50*1000+(a-50)*1300);}
    else if(a>100&&a<=200){printf("so tien dien ho gia dinh phai tra thang nay la: %d", tien=50*1000+50*1300+(a-100)*1500);}
    else if(a>200&&a<=300){printf("so tien dien ho gia dinh phai tra thang nay la: %d", tien=50*1000+50*1300+100*1500+(a-200)*1800);}
    else if(a>300&&a<=400){printf("so tien dien ho gia dinh phai tra thang nay la: %d", tien=50*1000+50*1300+100*1500+100*1800+(a-300)*2000);}
    else if(a>400){printf("so tien dien ho gia dinh phai tra thang nay la: %d", tien=50*1000+50*1300+100*1500+100*1800+100*2000+(a-400)*2500);}
	return 0;
}
