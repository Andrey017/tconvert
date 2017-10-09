//#include <QCoreApplication>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);
    float t=atof(argv[1]);      //Преобразуем из строки в число
    int input, x, y, r, e, w, s;
    input = (int)(argv[2][0]);
    if (argc==1)            //Если нет ни одного параметра
    {
        printf("Few parameters");
    }
    if (argc==2)           //Если задано только число
    {
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
    if (argc==3)           //Если задано число с единицей измерения
    {
        switch ( input ) {          //Разбор по единице измерения
            case 'c':
                x=t+273;
                y=9*t/5+32;
                printf("%dK", x);
                printf("\n%dF", y);
            break;
            case 'k':
                x=t-273;
                y=9*(t-273)/5+32;
                printf("%dC", x);
                printf("\n%dF", y);
            break;
            case 'f':
                x=5*(t-32)/9;
                y=5*(t-32)/9+273;
                printf("%dC", x);
                printf("\n%dK", y);
            break;
            default:
                printf("-1");
        }
    }
    //return a.exec();
    return 0;
}
