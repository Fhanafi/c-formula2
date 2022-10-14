#include <iostream>

using namespace std;

int main()
{
    int f,m,a;
   printf("masukan masa benda : ");
   scanf("%d",&m);
   printf("masukan kecepatan : ");
   scanf("%d",&a);
   if(!m && !a) {
      printf("salah memasukan angka");
   }
   f = (m * a);
   printf("hasilnya adalah %d newton",f);
}