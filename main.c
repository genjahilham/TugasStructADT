#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct koleksi {
 char nomer [50];
 char nama [50];
 char merk [50];
 char tahun [50];
 char jenis  [50];
 char kapasitas[50];
};

void main() {

 struct koleksi mobil;

 printf("mobil \n");
 printf("Masukan nomer mobil : ");
 scanf("%[^\n]%*c",mobil.nomer);
 printf("Masukan nama mobil : ");
 scanf("%[^\n]%*c",mobil.nama);
 printf("Masukan merk mobil : ");
 scanf("%[^\n]%*c",mobil.merk );

 printf("Masukan tahun pembuatan mobil : ");
 scanf("%[^\n]%*c",mobil.tahun );
 printf("Masukan jenis mobil : ");
 scanf("%[^\n]%*c",mobil.jenis);
 printf("Masukan kapasitas mesin : ");
 scanf("%[^\n]%*c",mobil.kapasitas);

printf("\nData Mobil \n");
 printf( "mobil nomer mobil : %s\n",mobil.nomer);
 printf( "mobil nama mobil : %s\n",mobil.nama);
 printf( "mobil merk mobil : %s\n", mobil.merk);
 printf( "mobil Tahun pembuatan mobil : %s\n",mobil.tahun);
 printf( "mobil jenis mobil : %s\n",mobil.jenis);
 printf( "mobil kapasitas mesin : %s\n",mobil.kapasitas );
 
 return 0;
}	
