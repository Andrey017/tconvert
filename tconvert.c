#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float t=atof(argv[1]);  /*Convert a number from a string*/
    int x, y, r, e, w, s;
    /*input = (int)(argv[2][0]);*/
    if (argc==1)    /*If there are no parameters*/
    {
        printf("Few parameters");
    }
    if (argc==2)    /*If only a number is given*/
    {
        if(t<=-273.15 || t<=-459.7){
            printf("There is no set temperature");
        }

    else {
        printf("%.0fC", t);
        x=t+273;
        y=9*t/5+32;
        printf("\n%dK", x);
        printf("\n%dF", y);

        printf("\n\n%.0fK", t);
        r=t-273;
        e=9*(t-273)/5+32;
        printf("\n%dC", r);
        printf("\n%dF", e);

        printf("\n\n%.0fF", t);
        w=5*(t-32)/9;
        s=5*(t-32)/9+273;
        printf("\n%dC", w);
        printf("\n%dK", s);
        }
    }
    if (argc==3)    /*If a number is specified with a unit of measure*/

    {
        switch ( *argv[2] ) {  /*Analysis by unit of measure*/
            case 'C':
            case 'c':
            if (t<=-273.15){
                printf("There is no set temperature");
            }
            else{
                x=t+273;
                y=9*t/5+32;
                printf("%dK", x);
                printf("\n%dF", y);
            }
            break;
            case 'K':
            case 'k':
            if (t<=0){
                printf("There is no set temperature");
            }
            else{
                x=t-273;
                y=9*(t-273)/5+32;
                printf("%dC", x);
                printf("\n%dF", y);
            }
            break;
            case 'F':
            case 'f':
            if (t<=-459.7){
                printf("There is no set temperature");
            }
            else{
                x=5*(t-32)/9;
                y=5*(t-32)/9+273;
                printf("%dC", x);
                printf("\n%dK", y);
            }
            break;
            default:
            printf("-1");
        }
    }
    return 0;
}
