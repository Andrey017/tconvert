#include <QCoreApplication>

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);
    float t=atof(argv[1]);
    int input, x, y;
    input = (int)(argv[2][0]);
        switch ( input ) {
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
    //return a.exec();
    return 0;
}
