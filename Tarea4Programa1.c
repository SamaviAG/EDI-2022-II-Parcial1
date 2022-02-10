#include <stdio.h>
int main()
{
    float Subtotal, Descuento, Precio;
    printf("Introduzca precio del producto: \n");
    scanf("%f", &Precio);
    printf("Introduzca el descuento: \n");
    scanf("%f", &Descuento);

    Subtotal = Precio - (Precio * Descuento / 100);
    printf("Precio total: %.2f", Subtotal);

    return 0;
}


