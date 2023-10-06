#include"stdio.h"


int tinh_tong(int x,int y)
{
    int tong ;
    tong = x+y;
    return tong;

}
int tinh_hieu(int x,int y)
{
    float hieu ;
    hieu = x-y;
    return hieu;

}
int tinh_tich(int x,int y)
{
    float tich;
    tich = x * y;
    return  tich;
}
float tinh_thuong(int x ,int y)
{
    float thuong;
    thuong =(float )x / y;
    return thuong;
}
int main()
{
    int x,y;
    printf("nhap x=\n");
    scanf("%d",&x);
    printf("nhap y =\n");
    scanf ("%d",&y);
    int tong , tich;
    tong = tinh_tong(x,y);

    tich = tinh_tich(x,y);

    printf("tong = %d\n",tong);
    printf("tich =%d\n",tich);
    float hieu , thuong;
    hieu = tinh_hieu( x ,y);
    thuong = tinh_thuong(x ,y);
    printf("hieu = %f\n",hieu);
    printf("thuong =%f\n",thuong);
    return 0;

}