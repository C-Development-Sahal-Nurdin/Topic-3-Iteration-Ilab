/*#include <stdio.h>

int main()
{
    char st[] = "JACK";
    int i;
    for(i = 0; st[i]; i++)
        st[i] = tolower(st[i]);
    printf("%s\n", st);
    return 0;

}*/

/*#include <stdio.h>

int main()
{
    char teks[2]="OK";
    printf("%s", teks);
    return 0;

}
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    // Mendeklarasikan string s2 dan beri variabel yang sesuai
    char s2[] = "jill";
    char vomel[]="AIUEO";
    printf(vomel);

    // Menugaskan string s2 dengan fungsi toupper disertai dengan variabel yang sesuai
    s2[2] = toupper(s2[2]);

    // Mencetak string s2
    printf("%s\n", s2);
    return 0;

}


