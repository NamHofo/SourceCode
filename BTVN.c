#include <stdio.h>
#include <math.h>

void nhapMang(float a[], int n){
    for(int i=0; i<n; i++){
        printf("a[%d]: ",i);
        scanf("%f",&a[i]);
    }
}

void xuatMang(float a[], int n){
    printf("\n");
    for(int i=0; i<n; i++){
        printf("%.2f ",a[i]);
    }
}

int findTheClosestNumber(float a[], int n, int m){
    //Dat mot so k lam gia tri khoang cach cua m va a[1]
    float k=abs(a[1]-m);
    int index;
    for(int i=0; i<n; i++){
        if( k > abs(a[i]-m)){
            k=abs(a[i]-m);
            index=i;
        }
    }
    return index;
}




int main(){
    float a[100];
    int n;
    int m;
    do{
    printf("Nhap so luong phan tu (0<n<100): ");
    scanf("%d",&n);
    }while(n<=0 || n>100);
    nhapMang(a,n);
    //Reading
    xuatMang(a,n);
    //Nhap vao gia tri cua so nguyen m:
    printf("\nNhap gia tri cua m: ");
    scanf("%d", &m);
    printf("%.2f at index %d nearest to %d",a[findTheClosestNumber(a,n,m)], findTheClosestNumber(a,n,m), m);





    return 0;
}