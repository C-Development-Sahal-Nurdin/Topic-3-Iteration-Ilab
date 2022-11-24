/*#include<stdlib.h>

int main(){
    enum anjing
{
PODDLE, TERRIER, BOXXER
};
printf("%d , %d, dan %d", PODDLE, BOXXER, TERRIER);
}


#include <stdio.h>

enum months
{
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main ()
{
    const char *monthName[] = {
         "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October","November", "December"
    };

    printf("%11s, %11s, %11s", monthName[1], monthName[8], monthName[12]);

}


#include <stdio.h>

enum months

{
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main ()
{
    const char *monthName[] = {
         "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October","November", "December"
    };

    for (enum months month = APR; month <= AUG; ++month)

    {
        printf("%d\n", month);
    }

}



#include <stdio.h>

enum months

{
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main ()
{

    printf("%d, %d, %d", FEB, APR, MAY);

}
*/
#include <stdio.h>
int main() {
    enum namaHari {senin, selasa, rabu,
kamis, jumat, sabtu, minggu};
enum namaHari hari1, hari2;
hari1 = senin;
hari2 = sabtu;
int selisih;
selisih = hari2 - hari1;
printf("selisih hari = %d\n", selisih);
printf("selisih hari1 = %d\n", hari1);
return 0;
}

