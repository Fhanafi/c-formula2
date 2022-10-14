#include <stdio.h>

void luas() {
   int luasnya,panjang,lebar;
   printf("masukan panjang benda : ");
   scanf("%d", &panjang);
   printf("masukan lebar benda : ");
   scanf("%d", &lebar);
   if (!panjang) 
   {
      printf("angka yang dimasukan salah \n");
   } else if(!lebar) {
      printf("angka yang dimasukan salah \n");
   }
   luasnya = (panjang * lebar);
   printf("luas benda adalah %d m2", luasnya);
}

void main() {
  luas();
}