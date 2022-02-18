#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<conio.h>
typedef struct sinhvien
{
	char ten[30];
	char gt[5];
	int tuoi;
	float dt, dl, dh;
	float dtb;
}SV;
void diem_tb( SV *sv)
{
	sv->dtb = (sv->dt + sv->dh + sv->dl) / 3;
}
void nhap(SV *sv)
{
	printf("\nnhap tuoi sinh vien");
	scanf_s("%d", sv->tuoi);
	printf("\nnhap ten sinh vien:");
	gets(sv->ten);
	printf("\nnhap gioi tinh sinh vien:");
	gets(sv->gt);
	printf("\n nhap diem 3 mon ");
	scanf_s("%f %f %f", &sv->dt, &sv->dl, &sv->dh);
	diem_tb(&sv);
}
void nhap_mang(SV sv[],int n)
{
	printf("    _______________________\n");
	for (int i = 0;i < n;i++)
	{
		printf("nhap hoc sinh thu %d\n", (i + 1));
		nhap(&sv[i]);
	}
	printf("    ________________________\n");
}
void xuat(SV sv)
{
	printf("ho va ten :%s\n", sv.ten);
	printf("gioi tinh:%s\n", sv.gt);
	printf("tuoi:%d\n", sv.tuoi);
	printf("diem 3 mon Toan Li Hoa:%f - %f - %f\n", sv.dt, sv.dl, sv.dh);
	printf("diem tb:%f\n", sv.dtb);
}
void xuat_mang(SV sv[],int n)
{
	printf("________________________");
	for (int i=0;i<n;i++)
	{
		printf("thong tin hoc sinh thu %d\n", i + 1);
		xuat(sv[i]);
	}
	printf("________________________");
}
void sap_xep(SV sv[], int n)
{
	SV temp;
	for (int i = 0;i < n-1;i++)
	{
		for (int j = 1;j < n;j++)
		{
			if (sv[i].dtb < sv[j].dtb)
			{
				temp = sv[i];
				sv[i] = sv[j];
				sv[j] = temp;
			}
		}
	}
}
void xep_loai(SV sv)
{
	if (sv.dtb >= 8.5)
		printf("gioi\n");
	if (sv.dtb >= 6.5 && sv.dtb < 8.5)
		printf("kha");
	if (sv.dtb < 6.5 && sv.dtb>5)
		printf("trung binh\n");
	else
		printf("yeu\n ");
}
void xep_loai_mang(SV sv[], int n)
{
	printf("________________________");
	for (int i = 0;i < n;i++)
	{
		printf("xep loai cua sinh vien thu %d\n", i + 1);
		xep_loai(sv[i]);
	}
	printf("________________________");
}
int main()
{
	SV sv[100];
	int n;
	int key;
	do
	{
		printf("nhap n=");
		scanf_s("%d", &n);
	} while (n <= 0);
	bool da_nhap = false;
	while (true)
	{
		printf("********************************************** \n");
		printf("**    Chuong Trinh Quan Li Sinh vien		** \n");
		printf("**			1.nhap ds sinh vien				** \n");
		printf("**			2.in ra ds sinh vien			** \n");
		printf("**			3.sap xep sinh vien theo dtb	** \n");
		printf("**			4.xep loai sinh vien			** \n");
		printf("**			5.xuat ra danh sach sinh vien	** \n");
		printf("*********************************************  \n");
		scanf_s("%d", &key);
		switch (key)
		{
		case 1:
			printf("ban da chon nhap danh sach sinh vien\n");
			nhap_mang(sv, n);
			printf("ban da nhap thanh cong\n");
			da_nhap = true;
			printf("nhan ban phim bat ky de tiep tuc");
			break;
		case 2:
			if (da_nhap)
			{
				printf("ban da chon in ra danh sach sinh vien\n");
				xuat_mang(sv, n);
			}
			break;
		case 3:
			if (da_nhap)
			{
				printf("ban da chon sap xep hoc sinh theo dtb\n");
				sap_xep(sv, n);
			}
			break;
		case 4:
			if (da_nhap)
			{
				printf("ban da chon xep loai sinh vien\n");
				xep_loai_mang(sv, n);
			}
			break;
		case 5:
			if (da_nhap)
			{
				printf("ban da chon in ra danh sach sau khi sap xep\n");
				xuat_mang(sv, n);
			}
			break;
		case 0:
			printf("ban da chon thoat chuong trinh\n");
			return 0;
		default:
			printf("hay bam lai phim so de tiep tuc\n ");
			break;
		}
	}
}