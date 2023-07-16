#include <stdio.h>
    int main()
    {
        int i = 1, j = 1;
        j1: 
        while (i != 16)
        {
            i*= 2;
            while ( j )
            {
                printf("DESD\n");
                goto j1;
                printf("after jump statement goto\n");
            }
        }
    }

// in c language flow of program goes to the line represented by the jump statement rest all below of  statements of jump statement being un executed