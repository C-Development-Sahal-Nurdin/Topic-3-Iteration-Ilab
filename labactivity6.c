/*// Program deklarasi typedef
#include <stdio.h>

// Deklarasi typedef dengan tipe data awal integer dan nama alias age
typedef int age;

int main()
{
    // Deklarasi variabel a1 dan a2 dengan nama alias
    age a1, a2;

    a1 = 123456;
    // Pemanggilan variabel a1
    printf("Isi variabel a1: %d \n",a1);

    a2 = 234513;
    // Pemanggilan variabel a2
    printf("Isi variabel a2: %d \n",a2);

    return 0;

}
*/

// Program deklarasi typedef struct
#include <stdio.h>
#include <string.h>

// Deklarasi typedef dengan tipe data awal struct dan nama alias Date
typedef struct
{
    int day;
    char month[3];
    int year;
} Date;


int main()
{
    // Deklarasi variabel dob dengan nama alias
    Date dob;

    // Inisialisasi variabel day dengan nilai yang ditugaskan adalah 14
    dob.day = 14;


    // Inisialisasi variabel month dengan nilai yang ditugaskan adalah "Nov" menggunakan fungsi strcpy

    strcpy(dob.month, "Nov");

    // Inisialisasi variabel year dengan nilai yang ditugaskan adalah 2015

     dob.year = 2015;

   // Mencetak nilai month, day, dan year
     printf("%s %d, %d", dob.month, dob.day, dob.year);

    return 0;

}
