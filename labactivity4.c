// Program square.c
#include <stdio.h>

// Fungsi prototype dengan nama fungsi square dan argument bertipe data integer
int square(int x);

// Fungsi main untuk memulai eksekusi program
int main()
{
    // Menugaskan variabel a bertipe data integer dengan nilai 10
    int a = 10;

    // Mencetak output dengan memanggil fungsi square
    printf("Persegi dengan sisi %d, luasnya adalah: %d\n", a , square(a));
} // Mengakhiri fungsi main()

// Mendefinisikan fungsi square
int square(int x)
{
    // Gunakan statement return x * x untuk mengembalikan nilai
    return x * x;
} // Mengakhiri fungsi square()


// Program maximum.c
#include <stdio.h>

// Fungsi prototype dengan nama fungsi maximum dan tiga parameter (x, y, z) bertipe data integer
int maximum(int x,int y,int z);

// Fungsi main untuk memulai eksekusi program
int main()
{
    // Deklarasikan tiga variabel bertipe data integer dengan nama variabel angka1, angka2, angka3
    int angka1;
    int angka2;
    int angka3;
    // Menginput tiga angka intger
    printf("%s", "Masukkan tiga angka: \n");
    scanf("%d%d%d", &angka1,&angka2,&angka3);
    // Mencetak output dengan memanggil fungsi maximum
     printf("Maximumnya adalah %d\n", maximum(angka1, angka2, angka3));
} // Mengakhiri fungsi main()

// Definisi fungsi maximum
int maximum(int x,int y,int z)
{
    // Menugaskan variabel max untuk nilai x dengan tipe data integer
    int max = x;
    // Membuat statement if jika variabel y lebih besar dari max
    if ( y > max)
    {
    // Menugaskan variabel max dengan variabel y
       max = y;
    }
// Membuat statement if jika z lebih besar dari variabel max
    if ( z > max)
    {
// Menugaskan variabel max untuk nilai z
        max = z;
    }
// Mengembalikan nilai max
return max;
}// Mengakhiri fungsi maximum()
