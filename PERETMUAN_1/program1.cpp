#include <stdio.h>

int main()
{
    char NAMA [50];
    int NIM;
    char KOM;
    float IP;

    printf("Hello World\n");

    printf("Masukkan Nama : ");
    //scanf("%s",&NAMA);
    gets(NAMA);     //gets : get string

    printf("Masukkan NIM : ");
    scanf("%d",&NIM);

    printf("masukkan KOM : ");
    scanf(" %c",&KOM);

    printf("Masukkan IP : ");
    scanf(" %f",&IP);

    //printf("NAMA    : %s\n", NAMA);
    puts(NAMA); //puts:put string
    printf("NIM     : %d\n", NIM);
    printf("KOM     : %c\n", KOM);
    printf("IP      : %.2f\n", IP);
    printf("Hello World");
}