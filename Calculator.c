#include <stdio.h>

//gak ngoding gak makan

int main()
{
    float x, y, hasil;
    char op;
start:
    printf("\nkalkulator\n");
awal:
    printf("angka 1 : ");
    scanf("%f", &x);
    printf("angka 2 : ");
    scanf("%f", &y);
    printf("masukkan op : + - x / : ");
    scanf(" %c", &op);

    if (op == '+')
        hasil = x + y;
    else if (op == '-')
        hasil = x - y;
    else if (op == 'x')
        hasil = x * y;
    else if (op == '/')
        hasil = x / y;

    else
    {
        printf("not valid operator ! \n ");
        goto awal;
    }

    printf("hasil = %2.f", hasil);
    goto start;
    return 0;
}
