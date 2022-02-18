#include<stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<stdbool.h>
typedef struct sinhvien
{
	char ten[30];
	char gt[5];
	int tuoi;
	float dt, dh, dl;
	float dtb;
}SV;
void nhap_ds(int n, SV sv[])
{
	for (int i = 0;i < n;i++)
	{
		printf("\nnhap sinh vien thu %d", i + 1);
		gets(sv[i].ten);
		fflush(stdin);
		printf("\nnhap ten sinh vien:");
		gets(sv[i].ten);
		printf("\nnhap gioi tinh sinh vien:");
		gets(sv[i].gt);
		printf("\n nhap tuoi:");
		scanf_s("%d", &sv[i].tuoi);
		printf("\n nhap diem 3 mon:");
		scanf_s("%f %f %f", &sv[i].dt, &sv[i].dh, &sv[i].dl);
		sv[i].dtb = (sv[i].dt + sv[i].dh + sv[i].dl) / 3;
		printf("diem trung binh:%f", sv[i].dtb);
	}
}
void in_ds(int n,SV sv[])
{
	for (int i = 0;i < n;i++)
	{
		printf("\nten:%s", sv[i].ten); 
		printf("\ngioi tinh:%s", sv[i].gt);
		printf("\ntuoi:%d", sv[i].tuoi);
		printf("\ndiem 3 mon:%f %f %f", sv[i].dt,sv[i].dh,sv[i].dl);
		printf("\ndiem tb:%f", sv[i].dtb);
	}
}
void sap_xep(int n, SV sv[])
{
	SV temp;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (sv[i].dtb < sv[j].dtb)
			{
				temp  = sv[i];
				sv[i] = sv[j];
				sv[j] = temp;
			}
		}
	}
}
void xep_loai(int n, SV sv[100])
{
	for (int i = 0;i < n;i++)
	{
		printf("xep loai cua sinh vien thu %d", i + 1);
		if (sv[i].dtb >= 8.5)
			printf("\ngioi");
		if (sv[i].dtb >= 6.5 && sv[i].dtb < 8.5)
			printf("\nkha");
		if (sv[i].dtb < 6.5 && sv[i].dtb>=5)
			printf("\ntrung binh");
		if (sv[i].dtb<5)
			printf("\nyeu");
	}
}
int main()
{
	int n;
	SV sv[100];
	int key;
	printf("nhap n=");
	scanf_s("%d", &n);
	bool da_nhap = false;
	while (true)
	{
		printf("\n1.nhap danh sach");
		printf("\n2.in ra danh sach");
		printf("\n3.xep sinh vien theo diem tb");
		printf("\n4.xep loai sinh vien");
		scanf_s("%d", &key);
		switch (key)
		{
		case 1:
			printf("ban chon nhap ds");
			nhap_ds(n, sv);
			da_nhap = true;
			break;
		case 2:
			if (da_nhap)
			{
				printf("ban chon in ds");
				in_ds(n, sv);
			}
			break;
		case 3:
			if (da_nhap)
			{
				printf("ban chon sap xep danh sach theo diem tb");
				sap_xep(n,sv);
			}
			break;
		case 4:
			if (da_nhap)
			{
				printf("ban chon xep loai sinh vien");
				xep_loai(n, sv);
			}
			break;
		default:
			break;
		}
	}
}