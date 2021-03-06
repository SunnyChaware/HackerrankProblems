#include <stdio.h>
#include <string.h>

int main (void) {

    int hh, mm, ss;
    char tt[3] = "";

    printf (" enter time in HH:MM:SS AM/PM: ");
    if (scanf ("%d:%d:%d %[^\n]%*c", &hh, &mm, &ss, tt) != 4) {
        fprintf (stderr, "error: invalid read of time.\n");
    }

    hh = (strcmp (tt, "PM") == 0 && hh != 12) ? hh + 12 : hh;
    if (strcmp (tt, "AM") == 0 && hh == 12) hh = 0;
    printf ("%02d:%02d:%02d\n", hh, mm, ss);

    return 0;
}
