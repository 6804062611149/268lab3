#include <stdio.h>
int main() {
    int x=1,y=1,z=0;
    if (x>0) {
        printf("Black ");
        if (y>0)
            printf("Red ");
        else
            if (z>0)
                printf("Blue ");
            else
                printf("Green ");
    }
    else
        if (y>0)
            printf("Pink ");
        printf("White ");
}


