/*
#include <stdio.h>

int main()
{
  // Deklarasi variabel bil, jumlah, dan angka bertipe data integer
  int bil, jumlah, angka ;

  printf("Masukkan angka: ");
  scanf("%d", &angka);

  // Menugaskan variabel jumlah dengan nilai 0
  jumlah = 0 ;

  // Menugaskan variabel bil dengan nilai 1
  bil = 1 ;

  // Memulai perulangan do
  do
  {
      // Menginisialisasikan variabel jumlah untuk ditugaskan dengan ekspresi jumlah + bil
      jumlah += bil ;

      // Gunakan post-increment pada variabel bil
      bil++ ;
  } while (bil <= angka); // Gunakan keyword while dengan kondisi bil <= angka

  printf("Jumlah = %d\n", jumlah);

  return 0;

}


#include <stdio.h>

int main()
{

   int bil = 10;



   do

   {

     printf("%d ", bil);

     bil++;

     }while (bil < 10);


  return 0;

}
*/

#include <stdio.h>

int main()

{

  int bil = 16;

  do

  {
    bil = bil + 2;

    printf ("%d\n", bil);

  } while (bil <= 16);


  return 0;

}

