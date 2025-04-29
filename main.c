#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define dimension 20

int cargarArreglo(int bundles[dimension], char names[dimension][30], int years[dimension]);
void mostrarArreglosParalelos(int bundles[dimension], char names[dimension][30], int years[dimension], int val);
int buscarPosicionLegajos(int bundles[dimension], int val);
void buscarNombrePorLegajo(int bundles[dimension], char names[dimension][30], int years[dimension], int val, int position);

int main()
{

    int tamPalabras = 30;

    int bundles[dimension];
    char names[dimension][tamPalabras];
    int years[dimension];
    int validos;
    int pos;

    int seguir = 's';
    int opcion;
    while(seguir == 's')
    {
    printf("\n Que punto desea ejecutar?: ");
    fflush(stdin);
    scanf("%i", &opcion);

    switch(opcion)
    {
    case 1:
    validos = cargarArreglo(bundles, names, years);
    break;

    case 2:
    mostrarArreglosParalelos(bundles, names, years, validos);
    break;

    case 3:
        pos = buscarPosicionLegajos(bundles, validos);
        if(pos > -1){
            printf("\n El legajo se encuentra en la posicion: %i", pos);
        }else {
            printf("\n No se encontró el legajo");
        }
    break;
    case 4:
            buscarNombrePorLegajo(bundles, names, years, validos, pos);
}

    printf("\n Deseas continuar?");
    fflush(stdin);
    scanf("%c", &seguir);
}

    return 0;
}

int cargarArreglo(int bundles[dimension], char names[dimension][30], int years[dimension]){

    int i=0;
    char seguir = 's';

    while(seguir == 's')
    {
        printf("Cargue el legajo:");
        scanf(" %i", &bundles[i]);

        printf("Cargue el nombre: ");
        fflush(stdin);
        scanf(" %s", &names[i]);

        printf("Cargue los a%cos: ", 164);
        fflush(stdin);
        scanf(" %i", &years[i]);

        i++;

        printf("Deseas continuar? (s/n)");
        fflush(stdin);
        scanf(" %c", &seguir);
    }
    return i;

}

void mostrarArreglosParalelos(int bundles[dimension], char names[dimension][30], int years[dimension], int val)
{
    int i=0;

    while(i < val){

        printf("\n [Legajo: %i ", bundles[i]);

        printf("Nombre: %s ", names[i]);

        printf("A%cos: %i ]", 164, years[i]);

        i++;
    }
}

int buscarPosicionLegajos(int bundles[dimension], int val)
{
    int i = 0;
    int legajo;
    int pos = -1;

    printf("\n Ingrese el nombre del legajo que desea buscar?");
    fflush(stdin);
    scanf(" %i", &legajo);

    while(i < val) {
        if(bundles[i] == legajo){
        pos = i;
        }
        i++;
    }

    return pos;
}

void buscarNombrePorLegajo(int bundles[dimension], char names[dimension][30], int years[dimension], int val, int position){

    printf("El legajo N%c %i pertenece a: %s", 248, bundles[position], names[position]);
}
