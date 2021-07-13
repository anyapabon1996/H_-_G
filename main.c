#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Wonder_Cat.h"

int main()
{
    time_t hora;

    time(&hora);

    struct tm *mi_tiempo=localtime(&hora);

    int opcion, option;

    FILE *archivoB;

    FILE *archivo_StockB;

    FILE *archivo_ventasB;

    FILE *archivo_rollosB;

    FILE *archivo_stock_R;

    FILE *archivo_egresoB;

    FILE *archivo_palletsB;

    FILE *archivoT;

    FILE *archivoTV;

    FILE *archivoTS;

    FILE *archivoTR;

    FILE *archivoTRS;

    FILE *archivoET;

    FILE *archivoPT;

    char nombreS[]="Wonder_Cat_Stock.H&G";

    char nombreB[]="Wonder_Cat.H&G";

    char nombreV[]="Wonder_Cat_Ventas.H&G";

    char nombreR[]="Wonder_Cat_bobinas.H&G";

    char nombreRS[]="Wonder_Cat_Suministros_Stcok.H&G";

    char nombreE[]="Wonder_Cat_Egresos.H&G";

    char nombreP[]="Wonder_Cat_Pallets.H&G";

    char nombreT[]="Control.H&G";

    char nombreTV[]="Control_venta.H&G";

    char nombreTS[]="Control_stok.H&G";

    char nombreTR[]="Control_bobinas.H&G";

    char nombreTRS[]="Control_Stock_Bobinas.H&G";

    char nombreTE[]="Control_Egresos.H&G";

    char nombrePT[]="Control_Pallets.H&G";

    do
    {
        printf("WONDER_CAT\n");
        printf("%d/%d/%d\n",mi_tiempo->tm_mday,mi_tiempo->tm_mon+1,mi_tiempo->tm_year+1900);
        printf("Buen d%ca, Enrique\n\n",161);

        printf("Ingrese la opci%cn a ejecutar\n\n",162);

        printf("1. Crear Archivos.\n");
        printf("2. Cargar Stock.\n");
        printf("3. Cargar Producci%cn Diaria.\n",162);
        printf("4. Cargar Venta.\n");
        printf("5. Cargar Egresos del mes.\n");
        printf("6. Cargar Ingreso de Big Bags.\n");
        printf("7. Cargar Ingreso de Bobinas.\n");
        printf("8. Baja de Bobinas.\n");
        printf("9. Mostrar Producci%cn Por Mes.\n",162);
        printf("10. Mostrar Producci%cn Por Rango.\n",162);
        printf("11. Mostrar Stock.\n");
        printf("12. Mostrar Ventas Mensuales.\n");
        printf("13. Mostrar Ventas Por Rango.\n");
        printf("14. Mostrar Egresos.\n");
        printf("15. Mostrar compra de Bobinas.\n");
        printf("16. Mostrar compra de Big Bags\n");
        printf("0. Terminar.\n");

        opcion=-1;

        while (opcion<0 || opcion>16) scanf("%d",&opcion);

        switch (opcion)
        {
            case 1:
                printf("ESTA SEGURO DE CREAR ARCHIVOS? BORRARA LOS DATOS GUARDADOS.\n");
                printf("(\"1\" para confirmar, \"0\" para cancelar): ");

                option=-1;

                while(option!=0 && option!=1) scanf("%d",&option);


                if (option)
                {
                    crea_archivo(archivo_StockB,nombreS);

                    crea_archivo(archivo_ventasB,nombreV);

                    crea_archivo(archivoB,nombreB);

                    crea_archivo(archivo_rollosB,nombreR);

                    crea_archivo(archivo_stock_R,nombreRS);

                    crea_archivo(archivo_palletsB,nombreP);

                    llenado_inicial(archivo_ventasB,nombreV);

                    llenado_inicial(archivo_StockB,nombreS);

                    llenado_inicial(archivoB,nombreB);

                    llenado_inicial(archivo_rollosB,nombreR);

                    llenado_inicial(archivo_stock_R,nombreRS);

                    llenado_inicial(archivo_egresoB,nombreE);

                    llenado_inicial(archivo_palletsB,nombreP);

                    printf("ARCHIVOS CREADOS CON EXITO\n");

                    printf("\n");

                    system("pause");

                    system("cls");

                    break;
                }
                else
                {
                    printf("OPERACION CANCELADA!\n\n");

                    system("pause");

                    system("cls");

                    break;
                }

            case 2:
                option=-1;

                printf("\n1. Cargar Stock de Productos.\n2. Cargar Stock de Suministros.\n0. Cancelar\n\n");

                while(option!=1 && option!=2 && option!=0) scanf("%d",&option);
                fflush(stdin);

                if (option==1) carga_stock(archivo_StockB,nombreS);
                else if (option==2) carga_stock_suministros(archivo_stock_R,nombreRS,archivoTRS,nombreTRS);
                else
                {
                    printf ("\tCANCELADO!!!!!\n\n");

                    system("pause");
                }

                system("cls");

                break;

            case 3:
                option=-1;

                printf("\n1. CONTINUAR.\n0. CANCELAR.\n");

                while (option!=1 && option!=0) scanf("%d",&option);

                if (option==1)
                {
                    carga(archivoB,nombreB,archivoTRS,nombreRS);

                    aumenta_stock(archivoB,nombreB,archivo_StockB,nombreS);
                }
                else
                {
                    printf("\n\tCANCELADO!!!!!!!!\n\n");

                    system("pause");
                }

                system("cls");

                break;

            case 4:
                option=-1;

                printf("\n1. CONTINUAR.\n0. CANCELAR.\n");

                while (option!=1 && option!=0) scanf("%d",&option);

                if (option==1) ventas(archivo_ventasB,nombreV,archivo_StockB,nombreS);
                else
                {
                    printf("\n\tCANCELADO!!!!!!!!\n\n");

                    system("pause");
                }

                system("cls");

                break;

            case 5:
                option=-1;

                printf("\n1. CONTINUAR.\n0. CANCELAR.\n");

                while (option!=1 && option!=0) scanf("%d",&option);

                if (option==1) carga_egresos(archivo_egresoB,nombreE);

                else
                {
                    printf("\n\tCANCELADO!!!!!!!!\n\n");

                    system("pause");
                }

                system("cls");

                break;

            case 7:
                option=-1;

                printf("\n1. CONTINUAR.\n0. CANCELAR.\n");

                while (option!=1 && option!=0) scanf("%d",&option);

                if (option==1) carga_bobinas(archivo_rollosB,nombreR,archivo_stock_R,nombreRS);
                else
                {
                    printf("\n\tCANCELADO!!!!!!!!\n\n");

                    system("pause");
                }

                system("cls");

                break;

            case 6:
                option=-1;

                printf("\n1. CONTINUAR.\n0. CANCELAR.\n");

                while (option!=1 && option!=0) scanf("%d",&option);

                if (option==1) carga_pallets (archivo_palletsB, nombreP);
                else
                {
                    printf("\n\tCANCELADO!!!!!!!!\n\n");

                    system("pause");
                }

                system("cls");

                break;

            case 8:
                option=-1;

                printf("\n1. CONTINUAR.\n0. CANCELAR.\n");

                while (option!=1 && option!=0) scanf("%d",&option);

                if (option==1) baja_suministros(archivoTRS,nombreRS);
                else
                {
                    printf("\n\tCANCELADO!!!!!!!!\n\n");

                    system("pause");
                }

                system("cls");

                break;

            case 9:
                option=-1;

                do
                {
                    printf("Ingrese el mes a consultar (1 al 12): ");
                    scanf("%d", &option);
                    fflush(stdin);

                } while(option<=0 || option>12);

                produccion_mensual(archivoB,nombreB,option);

                system("cls");

                break;

            case 10:
                produccion_rango(archivoB,nombreB);

                system("cls");

                break;

            case 11:
                option=-1;

                printf("Mostrar stock de \n\t1. PALLETS.\n\t2. BOBINAS\n\t");

                while (option!=1 && option!=2) scanf("%d",&option);
                fflush(stdin);

                if (option==1) muestra_stock(archivo_StockB,nombreS);

                else muestra_bobinas(archivo_stock_R,nombreRS);

                system("cls");

                break;

            case 12:
                muestra_ventas_mensual(archivo_ventasB,nombreV);

                system("cls");

                break;

            case 13:
                muestra_ventas_pedidas(archivo_ventasB,nombreV);

                system("cls");

                break;

            case 14:
                muestra_costo (archivoB, nombreB,archivo_egresoB,nombreE);

                system("cls");

                break;

            case 15:
                muestra_compra_bobinas (archivo_rollosB, nombreR);

                system("cls");

                break;

            case 16:
                muestra_compra_pallets(archivo_palletsB,nombreP);

                system("cls");

                break;

            case 17:
                inicio_anio(archivoB,nombreB,archivo_ventasB,nombreV);

                system("cls");

                break;
        }

    muestraC_texto(archivoB,nombreB,archivoT,nombreT);

    muestraC_texto(archivo_StockB,nombreS,archivoTS,nombreTS);

    muestraC_texto(archivo_ventasB,nombreV,archivoTV,nombreTV);

    muestraC_texto(archivo_rollosB,nombreR,archivoTR,nombreTR);

    muestraC_texto(archivo_stock_R,nombreRS,archivoTRS,nombreTRS);

    muestraC_texto(archivo_egresoB,nombreE,archivoET,nombreTE);

    muestraC_texto(archivo_palletsB,nombreP,archivoPT,nombrePT);

    } while (opcion!=0);

    printf("\nUn placer Enrique. Buen viaje.\n");

    return 0;
}


