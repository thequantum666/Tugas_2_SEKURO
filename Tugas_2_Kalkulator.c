
#include <stdio.h>
//Program kalkulator sederhana
//Fungsi Integral disini diasumsikan fungsinya 3x^2 +2x +1
double f(double x){
    return 3*x*x + 2*x +1;
} 
//Menu Utama
int main()
{    
    int a,b,c, menu,dasar,n,i;
    double atas,bawah,h,sum,integral,x;
    //Tampilan menu:
    printf("Hallo\n");
    printf("Berikut menu untuk Kalkulator kami:\n");
    printf("1. Operasi Tambah Kurang Bagi Kali\n");
    printf("2. Operasi Pemangkatan\n");
    printf("3. Operasi Integral Riemann Trapezoid\n");
    printf("Ketikan angka pada menu diatas!!\n");
    scanf("%d", &menu);
    if (menu==1){
        printf("Pilih operasi yang diinginkan:\n");
        printf("1.Tambah\n2.Kurang\n3.Kali\n4.Bagi");
        printf("Ketikan angka pada opsi diatas!!\n Opsi:");
        scanf("%d", &dasar);
        switch(dasar){
            case 1:
                printf("Angka pertama = ");
                scanf("%d",&a);
                printf("Angka kedua = ");
                scanf("%d",&b);
                printf("Hasil =%d",tambah(a,b));
                break;
        
            case 2:
                printf("Angka pertama = ");
                scanf("%d",&a);
                printf("Angka kedua = ");
                scanf("%d",&b);
                printf("Hasil =%d",kurang(a,b));
                break;
        
            case 3:
                printf("Angka pertama = ");
                scanf("%d",&a);
                printf("Angka kedua = ");
                scanf("%d",&b);
                printf("Hasil =%d",kali(a,b));
                break;
            case 4:
                printf("Angka pertama = ");
                scanf("%d",&a);
                printf("Angka kedua = ");
                scanf("%d",&b);
                printf("Hasil =%d",bagi(a,b));
                break;
            default :
                printf("tidak sesuai format");
        }
       
    }
    else if(menu==2){
        printf("Angka basis = ");
        scanf("%d", &a);
        printf("Pangkat = ");
        scanf("%d", &c);
        printf("Hasil = %d", pangkat(a,c));
    }
    else if(menu==3){
        
        printf("Masukkan batas atas = ");
        scanf("%lf",&atas);
        printf("Masukkan batas bawah = ");
        scanf("%lf",&bawah);
        printf("Masukkan panjang sub interval = ");
        scanf("%d",&n);
        h=(atas-bawah)/n;
        sum = 0;
        for(i=1;i<n;i++){
            x = bawah+i*h;
            sum = sum +f(x);
        }
        integral = h/2.0*(f(bawah)+2*sum+f(atas));
        printf("Hasil Integral = %lf",integral);
    }

    return 0;
}
//Fungsi Penambahan
int tambah(int a, int b){
    int hasil;
    hasil=a+b;
    return hasil;
}
//Fungsi Pengurangan
int kurang(int a, int b){
    int hasil;
    hasil=a-b;
    return hasil;
}
//Fungsi Perkalian
int kali(int a, int b){
    int hasil;
    hasil=a*b;
    return hasil;
}
//Fungsi Pembagian
int bagi(int a, int b){
    int hasil;
    hasil=a/b;
    return hasil;
}
//Fungsi Pemangkatan
int pangkat(int a, int c){
    int count, hpang;
    count = 0;
    hpang = 1;

    for (count=0; count<c; count++){
        hpang = hpang*a;
    }
    return hpang;
}





