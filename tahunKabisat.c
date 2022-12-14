#include <stdio.h>
#include <stdlib.h>

int main() {

int tahun;
int bulan;
int nama_bulan;
int jumlah_hari;

  printf("Masukkan tahun :");
  scanf("%i", &tahun);
  printf("Masukkan bulan :");
  scanf("%i", &bulan);


if (bulan==1){
    nama_bulan="januari";
    jumlah_hari=31;
}else if(bulan==2){
    nama_bulan="februari";
    jumlah_hari=28;
}else if(bulan==3){
    nama_bulan="maret";
    jumlah_hari=31;
}else if(bulan==4){
    nama_bulan="april";
    jumlah_hari=30;
}else if(bulan==5){
    nama_bulan="mai";
    jumlah_hari=31;
}else if(bulan==6){
    nama_bulan="juni";
    jumlah_hari=30;
}else if(bulan==7){
    nama_bulan="juli";
    jumlah_hari=31;
}else if(bulan==8){
    nama_bulan="agustus";
    jumlah_hari=31;
}else if(bulan==9){
    nama_bulan="september";
    jumlah_hari=30;
}else if(bulan==10){
    nama_bulan="oktober";
    jumlah_hari=31;
}else if(bulan==11){
    nama_bulan="november";
    jumlah_hari=30;
}else if(bulan==12){
    nama_bulan="desember";
    jumlah_hari=31;
}
if(tahun %400 == 0){
    if (bulan==2){
        jumlah_hari=29;
    }
    printf("\n\nTahun %i adalah TAHUN KABISAT", tahun);
} else if (tahun %100 == 0){
    printf("\n\nTahun %i BUKAN TAHUN KABISAT", tahun);
} else if (tahun %4 == 0){
    if (bulan==2){
        jumlah_hari=29;
    }
    printf("\n\nTahun %i adalah TAHUN KABISAT", tahun);
} else{
  printf("\n\nTahun %i BUKAN TAHUN KABISAT", tahun);
}
printf("\nJumlah hari pada bulan %s tahun %i adalah %i\n", nama_bulan, tahun, jumlah_hari);

return 0;

}
