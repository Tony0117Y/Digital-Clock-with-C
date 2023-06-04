#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // for sleep function

int main()
{
    int h, m, s;
    int d = 1000; // add delay of 1000 ms
    printf("Set time: \n");
    scanf("%d:%d:%d", &h, &m, &s);

    if (h > 12 || m > 60 || s > 60)
    {
        printf("ERROR! Invalid time input. \n");
        exit(0);
    }

    while (1)
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 12)
        {
            h = 1;
        }
        printf("\n Clock: ");
        printf("\n %02d:%02d:%02d", h, m, s);

        usleep(d * 1000); // sleep in milliseconds
        system("clear");

        
    }

    return 0;
}

//gcc dclock.c -o test