#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char hten[100];
    int masv;
    float d1,d2,d3;
}SV;
void nhap(SV a[],int n){
    for(int i=0;i<n;i++){
        scanf("%s%d%f%f%f",a[i].hten,&a[i].masv,&a[i].d1,&a[i].d2,&a[i].d3);
    }
}void xuat(SV a[],int n){
    for(int i=0;i<n;i++){
        printf("%s ",a[i].hten);
        printf("%d ",a[i].masv);
        printf("%f %f %f\n",a[i].d1,a[i].d2,a[i].d3);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    SV *a=(SV*)malloc(n*sizeof(SV));
    nhap(a,n);
    xuat(a,n);
}
