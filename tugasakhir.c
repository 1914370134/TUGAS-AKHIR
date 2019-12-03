#include <stdio.h>
#include <math.h>

int main ()
{
    int a,b,c,D,x1,x2;

    printf ("NAMA MAISYA FITRI ANUGRAH\n\n");
    printf("NPM = 1914370134\n");
    printf("KELAS = Reguler 1D\n");


    printf ("masukan nilai a");
    scanf("%d", &a);
    printf ("masukan nilai b");
    scanf("%d", &b);
    printf ("masukan nilai c");
    scanf ("%d", &c);

    //a = 13;
    //b = 10;
    //c = 25;

    if (a > 0){
      D = (pow(b, 2) - (4 * a * c));

    if (D >= 0){
     x1 = ( -b + sqrt(D)) / 2*a;
     x2 = (-b - sqrt (D)) / 2*a;
     printf ("x1: %d", x1);
     printf ("\n");
     printf ("x2; %d", x2);
     printf("\n");

 } else{
     printf("akar imajiner");
        }
    }


      printf ("\n\nprogram_1914370116_2.c\n\n");

    return (0);

    char str1[20], str2[30];

    printf ("enter name: ");
    scanf("%s", str1);

    printf ("enter your website name: ");
    scanf ("%s", str2);

    printf ("enter name: %s\n, str1");
    printf ("enter website:%s\n, str2");

    return (0);
  }
