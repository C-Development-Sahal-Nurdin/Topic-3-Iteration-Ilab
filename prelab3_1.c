/*
#include <stdio.h>

int main()
{
    // Deklarasi variabel num1, num2, dan result bertipe integer
    int num1, num2, result;

    // Menugaskan num1 dengan 0
    num1 = 0;

    // Menugaskan num2 dengan 10
    num2 = 10;

    // Menugaskan result dengan hasil evaluasi num2 ditambah num1 pre-increment
    result = num2 + ++num1;
    // Mencetak hasil
    printf("hasil dari result adalah %d\n", result);

    return 0;
}




#include <stdio.h>

int main()
{
    int z, y, x = 5;
    y = ++x; // Menugaskan variabel y dengan nilai x pre-increment
    z = 10 + y;
    printf("%d", y);

    return 0;
}


*/

#include <stdio.h>

int main()
{
    int z, x = 5;
    z = 10 + x++;
    printf("%d",z);

    return 0;
}



