#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <math.h>
#include "Wonder_Cat.h"
#define PESO 16
#define T_A 75
#define T_M 56
#define CILINDRO 1.1
#define CILINDRO__S 1.8

void crea_archivo(FILE *pArch, char *nom)
{
    pArch=fopen(nom,"wb");

    fclose(pArch);
}

char letra_mayus(char c)
{
    c=toupper(c);

    return c;
}

void cadena_mayus (char cadena[])
{
    for (int i=0; i<strlen(cadena);i++) cadena[i]=toupper(cadena[i]);
}

void llenado_inicial(FILE *pArch, char *nom)
{
    productos piedras={0,0,0,'0',"0",0,0,0.0,0};

    venta mi_venta={0,0,0,'0',"0","0",0,0};

    stock mi_stock={0,0,0,'0',"0",0};

    bobinas wonder={0,0,0,"0",0.0,0.0,0.0};

    gastos salidas={0,0.0,0.0,0.0,0.0,0.0,0.0};

    bobinas pallets={0,0,0,"0",0.0,0.0,0.0};

    if ((strcmp(nom,"Wonder_Cat.H&G")==0 || strcmp(nom,"Wonder_Cat_Nuevo.H&G")==0) && (pArch=fopen(nom,"wb"))!=NULL)
    {
        fseek(pArch,0,SEEK_SET);

        for (int i=0; i<1000; i++) fwrite(&piedras,sizeof(productos),1,pArch);

        fclose(pArch);
    }
    else if (strcmp(nom,"Wonder_Cat_Stock.H&G")==0 && (pArch=fopen(nom,"wb"))!=NULL)
    {
        fseek(pArch,0,SEEK_SET);
        strcpy(mi_stock.mercaderia,"BRISAS DEL BOSQUE");
        mi_stock.general='A';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        strcpy(mi_stock.mercaderia,"BRISAS DEL MAR");
        mi_stock.general='A';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        strcpy(mi_stock.mercaderia,"FLORES SUAVES");
        mi_stock.general='A';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        strcpy(mi_stock.mercaderia,"AIRES DE PLAYA");
        mi_stock.general='A';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        strcpy(mi_stock.mercaderia,"FRAGANCIA DE COCO");
        mi_stock.general='A';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        strcpy(mi_stock.mercaderia,"TROPICAL");
        mi_stock.general='A';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        strcpy(mi_stock.mercaderia,"PASTO");
        mi_stock.general='A';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        strcpy(mi_stock.mercaderia,"NEUTRO");
        mi_stock.general='A';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        strcpy(mi_stock.mercaderia,"VAINILLA");
        mi_stock.general='A';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        strcpy(mi_stock.mercaderia,"0");
        mi_stock.general='0';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        strcpy(mi_stock.mercaderia,"BRISAS DEL BOSQUE");
        mi_stock.general='M';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        strcpy(mi_stock.mercaderia,"BRISAS DEL MAR");
        mi_stock.general='M';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        strcpy(mi_stock.mercaderia,"FLORES SUAVES");
        mi_stock.general='M';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        strcpy(mi_stock.mercaderia,"AIRES DE PLAYA");
        mi_stock.general='M';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        strcpy(mi_stock.mercaderia,"FRAGANCIA DE COCO");
        mi_stock.general='M';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        strcpy(mi_stock.mercaderia,"TROPICAL");
        mi_stock.general='M';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        strcpy(mi_stock.mercaderia,"PASTO");
        mi_stock.general='M';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        strcpy(mi_stock.mercaderia,"NEUTRO");
        mi_stock.general='M';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        strcpy(mi_stock.mercaderia,"VAINILLA");
        mi_stock.general='M';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,30);

        fclose(pArch);
    }
    else if ((strcmp(nom,"Wonder_Cat_Ventas.H&G")==0 || strcmp(nom,"Wonder_Cat_Ventas_Nuevo.H&G")==0) && (pArch=fopen(nom,"wb"))!=NULL)
    {
        fseek(pArch,0,SEEK_SET);

        for (int i=0;i<1000;i++) fwrite(&mi_venta,sizeof(venta),1,pArch);

        fclose(pArch);
    }
    else if ((strcmp(nom,"Wonder_Cat_bobinas.H&G"))==0 && (pArch=fopen(nom,"wb"))!=NULL)
    {
        fseek(pArch,0,SEEK_SET);

        for (int i=0; i<1000;i++) fwrite(&wonder,sizeof(bobinas),1,pArch);

        fclose(pArch);
    }
    else if ((strcmp(nom,"Wonder_Cat_Suministros_Stcok.H&G"))==0 && (pArch=fopen(nom,"wb"))!=NULL)
    {
        fseek(pArch,0,SEEK_SET);

        strcpy(mi_stock.mercaderia,"AGLOMERADO");
        mi_stock.general='A';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,strlen(mi_stock.mercaderia));

        strcpy(mi_stock.mercaderia,"MICRO");
        mi_stock.general='M';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,strlen(mi_stock.mercaderia));

        strcpy(mi_stock.mercaderia,"FLORES SUAVES");
        mi_stock.general='F';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,strlen(mi_stock.mercaderia));

        strcpy(mi_stock.mercaderia,"BRISAS DEL BOSQUE");
        mi_stock.general='B';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,strlen(mi_stock.mercaderia));

        strcpy(mi_stock.mercaderia,"STRITCH");
        mi_stock.general='S';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,strlen(mi_stock.mercaderia));

        strcpy(mi_stock.mercaderia,"PHILL LARGO");
        mi_stock.general='L';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,strlen(mi_stock.mercaderia));

        strcpy(mi_stock.mercaderia,"PHILL CORTO");
        mi_stock.general='C';
        fwrite(&mi_stock,sizeof(stock),1,pArch);
        memset(mi_stock.mercaderia,0,strlen(mi_stock.mercaderia));

        fclose(pArch);
    }

    else if (strcmp(nom,"Wonder_Cat_Egresos.H&G")==0 && (pArch=fopen(nom,"wb"))!=NULL)
    {
        fseek(pArch,0,SEEK_SET);

        for (int i=0; i<12; i++) fwrite(&salidas,sizeof(gastos),1,pArch);

        fclose(pArch);
    }
    else if (strcmp(nom,"Wonder_Cat_Pallets.H&G")==0 && (pArch=fopen(nom,"wb"))!=NULL)
    {
        fseek(pArch,0,SEEK_SET);

        for (int i=0; i<1000;i++) fwrite(&pallets,sizeof(bobinas),1,pArch);

        fclose(pArch);
    }
    else printf("\nERROR EN EL LLENADO INICIAL.\n");
}

void muestraC_texto (FILE *pArch, char *nom, FILE *pArchT, char *nomT)
{
    productos piedras;

    venta mi_venta;

    stock mi_stock;

    bobinas wonder, pallets;

    gastos salidas;

    int dim;

    float total_pesoE, total_pesoR, total_pesoD;

    total_pesoD=total_pesoE=total_pesoR=0;

    pArch=fopen(nom, "rb");

    pArchT=fopen(nomT, "wt");

    if (pArch!=NULL && pArchT!=NULL)
    {
        fseek(pArch,0,SEEK_SET);

        fseek(pArchT,0,SEEK_SET);

        if (strcmp(nom,"Wonder_Cat.H&G")==0 || strcmp(nom,"Wonder_Cat_Nuevo.H&G")==0)
        {
            fprintf(pArchT,"%-16s%-15s%-22s%-15s%-15s%-15s%s\n","FECHA","PRODUCTO","TIPO","PALLETS","BOLSONES","QUIEBRES", "ROTURAS");

            while(!feof(pArch))
            {
                fread(&piedras,sizeof(productos),1,pArch);

                fprintf(pArchT,"%d/%d/%-12d%-15c%-22s%-15d%-15d%-15.2f%d\n",piedras.fecha.dia,piedras.fecha.mes,piedras.fecha.anio,
                        piedras.general,piedras.mercaderia,piedras.pallets,piedras.bolsones,piedras.quiebres,piedras.roturas);
            }

            fclose(pArch);
            fclose(pArchT);
        }
        else if (strcmp(nom,"Wonder_Cat_Ventas.H&G")==0 || strcmp(nom,"Wonder_Cat_Ventas_Nuevo.H&G")==0)
        {
            fprintf(pArchT,"%-12s%-15s%-24s%-24s%s\n", "FECHA", "TIPO", "CLIENTE", "PRODUCTO","CANTIDAD");

            while (!feof(pArch))
            {
                fread(&mi_venta,sizeof(venta),1,pArch);

                fprintf(pArchT,"%d/%d/%-8d%-14c%-24s%-24s%d\n", mi_venta.fecha.dia,mi_venta.fecha.mes,mi_venta.fecha.anio,mi_venta.general, mi_venta.cliente,
                        mi_venta.mercaderia,mi_venta.cantidad);
            }

            fclose(pArch);
            fclose(pArchT);
        }
        else if (strcmp(nom,"Wonder_Cat_Stock.H&G")==0)
        {
            fprintf(pArchT,"%-15s%-12s%-22s%s\n", "FECHA","TIPO", "PRODUCTO","CANTIDAD");

            fseek(pArch,0,SEEK_END);

            dim=ftell(pArch)/sizeof(stock);

            fseek(pArch,0,SEEK_SET);

            for (int i=0;i<dim;i++)
            {
                fread(&mi_stock,sizeof(stock),1,pArch);

                fprintf(pArchT,"%d/%d/%-10d%-12c%-22s%d\n",mi_stock.fecha.dia,mi_stock.fecha.mes,mi_stock.fecha.anio,mi_stock.general, mi_stock.mercaderia,mi_stock.cantidad);
            }

            fclose(pArch);
            fclose(pArchT);
        }
        else if (strcmp(nom,"Wonder_Cat_bobinas.H&G")==0)
        {
            fprintf(pArchT,"%-15s%-25s%-22s%-22s%s\n", "FECHA","BOBINA", "PESO ESPERADO","PESO REAL", "DIFERENCIA");

            fseek(pArch,0,SEEK_SET);

            while(!feof(pArch))
            {
                fread(&wonder,sizeof(bobinas),1,pArch);

                fprintf(pArchT,"%d/%d%/%-10d%-25s%-22.2f%-22.2f%.2f\n", wonder.fecha.dia,wonder.fecha.mes,wonder.fecha.anio,
                        wonder.tipo,wonder.peso_esperado,wonder.peso_real,wonder.diferencia);
            }

            fclose(pArch);

            fclose(pArchT);
        }
        else if (strcmp(nom,"Wonder_Cat_Suministros_Stcok.H&G")==0)
        {
            fprintf(pArchT,"%-15s%-12s%-22s%s\n", "FECHA","TIPO", "BOBINA","CANTIDAD");

            fseek(pArch,0,SEEK_END);

            dim=ftell(pArch)/sizeof(stock);

            fseek(pArch,0,SEEK_SET);

            for (int i=0;i<dim;i++)
            {
                fread(&mi_stock,sizeof(stock),1,pArch);

                fprintf(pArchT,"%d/%d/%-10d%-12c%-22s%d\n",mi_stock.fecha.dia,mi_stock.fecha.mes,mi_stock.fecha.anio,mi_stock.general, mi_stock.mercaderia,mi_stock.cantidad);
            }

            fclose(pArch);
            fclose(pArchT);
        }
        else if (strcmp(nom,"Wonder_Cat_Egresos.H&G")==0)
        {
            fprintf(pArchT,"%-15s%-15s%-15s%-15s%-15s%-15s%-15s%s\n", "MES","ALQUILER","ELECTRICIDAD","SUELDOS","AGUA","FLETE","OTROS","TOTAL");

            fseek(pArch,0,SEEK_SET);

            while(!feof(pArch))
            {
                fread(&salidas,sizeof(gastos),1,pArch);

                fprintf(pArchT,"%-15d%-15.2f%-15.2f%-15.2f%-15.2f%-15.2f%-15.2f%.2f\n", salidas.mes,salidas.alquiler,salidas.electricidad,
                        salidas.sueldos,salidas.agua,salidas.flete,salidas.otros,
                        salidas.agua+salidas.alquiler+salidas.electricidad+salidas.sueldos+salidas.flete+salidas.otros);
            }

            fclose(pArch);
            fclose(pArchT);

        }
        else if (strcmp(nom,"Wonder_Cat_Pallets.H&G")==0)
        {
            fprintf(pArchT,"%-15s%-25s%-22s%-22s%s\n", "FECHA","PRODUCTO", "PESO ESPERADO","PESO REAL", "DIFERENCIA");

            fseek(pArch,0,SEEK_SET);

            while(!feof(pArch))
            {
                fread(&pallets,sizeof(bobinas),1,pArch);

                fprintf(pArchT,"%d/%d%/%-10d%-25s%-22.2f%-22.2f%.2f\n", pallets.fecha.dia,pallets.fecha.mes,pallets.fecha.anio,
                        pallets.tipo,pallets.peso_esperado,pallets.peso_real,pallets.diferencia);
            }

            fclose(pArch);

            fclose(pArchT);
        }
    }
    else printf("ERROR EN EL PASO A TEXTO.\n");

}

void carga (FILE *pArch, char *nom, FILE *pArchR, char *nomR)
{
    productos piedras, auxiliar;

    int opcion=-1;

    time_t hora;

    time (&hora);

    struct tm *mi_tiempo=localtime(&hora);

    pArch=fopen(nom,"r+b");

    if (pArch!=NULL)
    {
        fseek(pArch,0,SEEK_SET);

        piedras.fecha.mes=mi_tiempo->tm_mon+1;
        piedras.fecha.dia=mi_tiempo->tm_mday;
        piedras.fecha.anio=mi_tiempo->tm_year+1900;

        printf("Ingrese producto a cargar\nA. Aglomerante.\nM. Micro Granulado.\nN. Nada.\n");

        while (piedras.general!='A' && piedras.general!='M' && piedras.general!='N')
        {
            scanf("%c", &piedras.general);

            piedras.general=letra_mayus(piedras.general);
        }

        fflush(stdin);

        if (piedras.general=='N')
        {
            strcpy(piedras.mercaderia,"IMPRODUCTIVO");
            piedras.pallets=piedras.bolsones=piedras.quiebres=piedras.roturas=0;

            while(!feof(pArch))
            {
                fread(&auxiliar,sizeof(productos),1,pArch);

                if (auxiliar.fecha.dia==0)
                {
                    fseek(pArch,-sizeof(productos),SEEK_CUR);

                    fwrite(&piedras,sizeof(productos),1,pArch);

                    break;
                }
            }

            fclose(pArch);

            printf("REGISTRO COMPLETO!\n\n");

            system("pause");

            return 0;
        }
        else
        {
            printf("\nSe produjo:\n\t1. Aires de playa.\n\t2. Brisas del Bosque.\n\t3. Brisas del Mar.\n\t4. Fragancia de Coco.\n\t5. Flores suaves.\n");
            printf("\t6. Tropical.\n\t7. Pasto.\n\t8. Neutro.\n\t9. Vainilla.\n\n");

            while(opcion<0 || opcion>9)
            {
                scanf("%d", &opcion);

                fflush(stdin);
            }

            if (opcion==2) strcpy(piedras.mercaderia,"BRISAS DEL BOSQUE");
            else if (opcion==3) strcpy(piedras.mercaderia,"BRISAS DEL MAR");
            else if (opcion==5) strcpy(piedras.mercaderia,"FLORES SUAVES");
            else if (opcion==1) strcpy(piedras.mercaderia,"AIRES DE PLAYA");
            else if (opcion==4) strcpy(piedras.mercaderia,"FRAGANCIA DE COCO");
            else if (opcion==6) strcpy(piedras.mercaderia,"TROPICAL");
            else if (opcion==7) strcpy(piedras.mercaderia,"PASTO");
            else if (opcion==8) strcpy(piedras.mercaderia,"NEUTRO");
            else strcpy(piedras.mercaderia,"VAINILLA");

            do
            {
                printf("Cantidad de Pallets producidos de %s: ",piedras.mercaderia);
                scanf("%d",&piedras.pallets);
                fflush(stdin);

            } while (piedras.pallets<0);


            do
            {
                printf("Cantidad de bolsones producidos: ");
                scanf("%d", &piedras.bolsones);
                fflush(stdin);

            } while (piedras.bolsones<0);

            do
            {
                printf("Ingrese el total de quiebres de tiempo\n");
                printf("(n%cmeros antes del \".\" son las horas, y los que le siguen son lo minutos): ",163);
                scanf("%f",&piedras.quiebres);
                fflush(stdin);

            } while (piedras.quiebres<0);

            do
            {
                printf("Ingrese total de roturas: ");
                scanf("%d",&piedras.roturas);
                fflush(stdin);

            } while (piedras.roturas<0);

            while(!feof(pArch))
            {
                fread(&auxiliar,sizeof(productos),1,pArch);

                if (auxiliar.fecha.dia==0)
                {
                    fseek(pArch,-sizeof(productos),SEEK_CUR);

                    fwrite(&piedras,sizeof(productos),1,pArch);

                    break;
                }
            }

            printf ("\nHubo cambio de bobina? (\"1\" CONFIRMAR, \"0\" NEGAR): ");

            opcion=-1;

            while (opcion!=0 && opcion!=1) scanf("%d",&opcion);

            if (opcion==1) baja_suministros(pArchR,nomR);

            printf("REGISTRO EXITOSO!\n\n");

            system("pause");

            fclose(pArch);
        }
    }
    else printf("\nERROR EN LA APERTURA DE CARGA!");
}

void produccion_mensual(FILE *pArch, char *nom, int mes)
{
    int cant_pallets_A, cant_bol_A, cant_pallets_M, cant_Bol_M, cant_BB_B, cant_BB_P, cant_BM_B, cant_BM_P;
    int cant_FS_B, cant_FS_P, cant_AP_B, cant_AP_P, cant_FC_B, cant_FC_P, cant_T_B, cant_T_P, cant_P_B, cant_P_P, cant_V_B, cant_V_P;
    int M_cant_FS_B, M_cant_FS_P, M_cant_AP_B, M_cant_AP_P, M_cant_FC_B, M_cant_FC_P, M_cant_T_B, M_cant_T_P, M_cant_P_B, M_cant_P_P, M_cant_V_B, M_cant_V_P;
    int M_cant_BB_B, M_cant_BB_P, M_cant_BM_B, M_cant_BM_P, sumaB_A,sumaP_A,sumaP_M,sumaB_M, total_rotuas, total_roturas_M;

    float suma_Q=0;

    productos piedras;

    cant_bol_A=cant_Bol_M=cant_pallets_A=cant_pallets_M=cant_T_B=cant_T_P=cant_V_B=cant_V_P=0;
    cant_AP_B=cant_AP_P=cant_BB_B=cant_BB_P=cant_BM_B=cant_BM_P=cant_FC_B=cant_FC_P=cant_FS_B=cant_FS_P=cant_P_B=cant_P_P=0;

    M_cant_FS_B=M_cant_FS_P=M_cant_AP_B=M_cant_AP_P=M_cant_FC_B=M_cant_FC_P=M_cant_T_B=M_cant_T_P=M_cant_P_B=M_cant_P_P=M_cant_V_B=M_cant_V_P=0;
    M_cant_BB_B=M_cant_BB_P=M_cant_BM_B=M_cant_BM_P=sumaP_M=sumaB_A=sumaB_M=sumaP_A=total_rotuas=total_roturas_M=0;

    if ((pArch=fopen(nom,"rb"))!=NULL)
    {
        fseek(pArch,0,SEEK_SET);

        while (!feof(pArch))
        {
            fread(&piedras,sizeof(productos),1,pArch);

            if (piedras.general=='A' && piedras.fecha.mes==mes)
            {
                suma_Q+=piedras.quiebres;

                total_rotuas+=piedras.roturas;

                if (strcmp(piedras.mercaderia,"BRISAS DEL BOSQUE")==0)
                {
                    cant_BB_P+=piedras.pallets;

                    cant_BB_B+=piedras.bolsones;
                }
                else if (strcmp(piedras.mercaderia,"BRISAS DEL MAR")==0)
                {
                    cant_BM_P+=piedras.pallets;

                    cant_BM_B+=piedras.bolsones;
                }
                else if (strcmp(piedras.mercaderia,"FLORES SUAVES")==0)
                {
                    cant_FS_P+=piedras.pallets;

                    cant_FS_B+=piedras.bolsones;
                }

                else if (strcmp(piedras.mercaderia,"AIRES DE PLAYA")==0)
                {
                    cant_AP_P+=piedras.pallets;

                    cant_AP_B+=piedras.bolsones;
                }

                else if (strcmp(piedras.mercaderia,"FRAGANCIA DE COCO")==0)
                {
                    cant_FC_P+=piedras.pallets;

                    cant_FC_B+=piedras.bolsones;
                }
                else if (strcmp(piedras.mercaderia,"TROPICAL")==0)
                {
                    cant_T_P+=piedras.pallets;

                    cant_T_B+=piedras.bolsones;
                }
                else if (strcmp(piedras.mercaderia,"PASTO")==0)
                {
                    cant_P_P+=piedras.pallets;

                    cant_P_B+=piedras.bolsones;
                }
                else if (strcmp(piedras.mercaderia,"NEUTRO")==0)
                {
                    cant_pallets_A+=piedras.pallets;

                    cant_bol_A+=piedras.bolsones;
                }
                else
                {
                    cant_V_P+=piedras.pallets;

                    cant_V_B+=piedras.bolsones;
                }

            }
            else
            {
                if (piedras.general=='M' && piedras.fecha.mes==mes)
                {
                    suma_Q+=piedras.quiebres;

                    total_roturas_M+=piedras.roturas;

                    if (strcmp(piedras.mercaderia,"BRISAS DEL BOSQUE")==0)
                    {
                        M_cant_BB_P+=piedras.pallets;

                        M_cant_BB_B+=piedras.bolsones;
                    }
                    else if (strcmp(piedras.mercaderia,"BRISAS DEL MAR")==0)
                    {
                        M_cant_BM_P+=piedras.pallets;

                        M_cant_BM_B+=piedras.bolsones;
                    }
                    else if (strcmp(piedras.mercaderia,"FLORES SUAVES")==0)
                    {
                        M_cant_FS_P+=piedras.pallets;

                        M_cant_FS_B+=piedras.bolsones;
                    }

                    else if (strcmp(piedras.mercaderia,"AIRES DE PLAYA")==0)
                    {
                        M_cant_AP_P+=piedras.pallets;

                        M_cant_AP_B+=piedras.bolsones;
                    }

                    else if (strcmp(piedras.mercaderia,"FRAGANCIA DE COCO")==0)
                    {
                        M_cant_FC_P+=piedras.pallets;

                        M_cant_FC_B+=piedras.bolsones;
                    }
                    else if (strcmp(piedras.mercaderia,"TROPICAL")==0)
                    {
                        M_cant_T_P+=piedras.pallets;

                        M_cant_T_B+=piedras.bolsones;
                    }
                    else if (strcmp(piedras.mercaderia,"PASTO")==0)
                    {
                        M_cant_P_P+=piedras.pallets;

                        M_cant_P_B+=piedras.bolsones;
                    }
                    else if (strcmp(piedras.mercaderia,"NEUTRO")==0)
                    {
                        cant_pallets_M+=piedras.pallets;

                        cant_Bol_M+=piedras.bolsones;
                    }
                    else
                    {
                        M_cant_V_P+=piedras.pallets;

                        M_cant_V_B+=piedras.bolsones;
                    }
                }
            }
        }

        sumaB_A=cant_AP_B+cant_BB_B+cant_BM_B+cant_bol_A+cant_FC_B+cant_FS_B+cant_P_B+cant_T_B+cant_V_B;
        sumaB_M=M_cant_AP_B+M_cant_BB_B+M_cant_BM_B+cant_Bol_M+M_cant_FC_B+M_cant_FS_B+M_cant_P_B+M_cant_T_B+M_cant_V_B;
        sumaP_A=cant_AP_P+cant_BB_P+cant_BM_P+cant_FC_P+cant_FS_P+cant_P_P+cant_T_P+cant_V_P+cant_pallets_A;
        sumaP_M=M_cant_AP_P+M_cant_BB_P+M_cant_BM_P+M_cant_FC_P+M_cant_FS_P+M_cant_P_P+M_cant_T_P+M_cant_V_P+cant_pallets_M;

        fclose(pArch);
    }
    else printf("ERROR EN MUESTRA POR MES.\n");

            printf("\t\t\t\t\t\t===============================================\n");
            printf("\t\t\t\t\t\t    Cantidad de Pallets y Bolsones del mes %d\n",mes);
            printf("\t\t\t\t\t\t===============================================\n\n");

            printf("\t\t\t\t\t\t       AGLOMERADO\t\t\t MICRO\n");
            printf("\t\t\t\t\t\tBOLSONES\tPALLETS\t\tBOLSONES\tPALLETS\n");
            printf("\t\tNEUTRO\t\t\t\t%d\t\t%d\t\t%d\t\t%d\n", cant_bol_A, cant_pallets_A, cant_Bol_M,cant_pallets_M);
            printf("\t\tBRISAS DEL BOSQUE\t\t%d\t\t%d\t\t%d\t\t%d\n",cant_BM_B,cant_BB_P,M_cant_BB_B,M_cant_BB_P);
            printf("\t\tBRISAS DEL MAR\t\t\t%d\t\t%d\t\t%d\t\t%d\n",cant_BM_B,cant_BM_P,M_cant_BM_B,M_cant_BM_P);
            printf("\t\tAIRES DE PLAYA\t\t\t%d\t\t%d\t\t%d\t\t%d\n",cant_AP_B,cant_AP_P,M_cant_AP_B,M_cant_AP_P);
            printf("\t\tFLORES SUAVES \t\t\t%d\t\t%d\t\t%d\t\t%d\n",cant_FS_B,cant_FS_P,M_cant_FS_B,M_cant_FS_P);
            printf("\t\tFRAGANCIA DE COCO\t\t%d\t\t%d\t\t%d\t\t%d\n",cant_FC_B,cant_FC_P,M_cant_FC_B,M_cant_FC_P);
            printf("\t\tTROPICAL\t\t\t%d\t\t%d\t\t%d\t\t%d\n",cant_T_B,cant_T_P,M_cant_T_B,M_cant_T_P);
            printf("\t\tPASTO\t\t\t\t%d\t\t%d\t\t%d\t\t%d\n",cant_P_B,cant_P_P,M_cant_P_B,M_cant_P_P);
            printf("\t\tVAINILLA\t\t\t%d\t\t%d\t\t%d\t\t%d\n",cant_V_B,cant_V_P,M_cant_V_B,M_cant_V_P);

            printf("\n\t\tEn peso\n\t\tAglomerado: %dKg.\n\t\tMicro: %dDc.\n\n",(sumaP_A*T_A*PESO)+(sumaB_A*PESO),(sumaP_M*T_M*PESO)+(sumaB_M*PESO));
            printf("\t\tRoturas\n\t\tAglomerado: %d bolsas.\n\t\tMicro: %d bolsas.\n\n",total_rotuas,total_roturas_M);
            printf("\t\tCantiad de tiempo no productivo: %.2f (horas antes del \".\" y minutos despu%cs)\n\n",suma_Q,130);

            system("pause");
}


void produccion_rango (FILE *pArch, char *nom)
{
    int dia1, dia2, mes1, mes2, cant_P_A, cant_B_A, cant_P_M, cant_B_M;
    int cant_pallets_A, mes, cant_bol_A, cant_pallets_M, cant_Bol_M, cant_BB_B, cant_BB_P, cant_BM_B, cant_BM_P;
    int cant_FS_B, cant_FS_P, cant_AP_B, cant_AP_P, cant_FC_B, cant_FC_P, cant_T_B, cant_T_P, cant_P_B, cant_P_P, cant_V_B, cant_V_P;
    int M_cant_FS_B, M_cant_FS_P, M_cant_AP_B, M_cant_AP_P, M_cant_FC_B, M_cant_FC_P, M_cant_T_B, M_cant_T_P, M_cant_P_B, M_cant_P_P, M_cant_V_B, M_cant_V_P;
    int M_cant_BB_B, M_cant_BB_P, M_cant_BM_B, M_cant_BM_P,total_rotuas,total_roturas_M;

    float suma_Q=0;

    productos piedras;

    cant_bol_A=cant_Bol_M=cant_pallets_A=cant_pallets_M=mes=cant_T_B=cant_T_P=cant_V_B=cant_V_P=0;
    cant_AP_B=cant_AP_P=cant_BB_B=cant_BB_P=cant_BM_B=cant_BM_P=cant_FC_B=cant_FC_P=cant_FS_B=cant_FS_P=cant_P_B=cant_P_P=0;

    M_cant_FS_B=M_cant_FS_P=M_cant_AP_B=M_cant_AP_P=M_cant_FC_B=M_cant_FC_P=M_cant_T_B=M_cant_T_P=M_cant_P_B=M_cant_P_P=M_cant_V_B=M_cant_V_P=0;
    M_cant_BB_B=M_cant_BB_P=M_cant_BM_B=M_cant_BM_P=dia1=mes1=cant_B_A=cant_B_M=cant_P_A=cant_P_M=dia2=mes2=total_roturas_M=total_rotuas=0;

    pArch=fopen(nom,"rb");

    if (pArch!=NULL)
    {
        do
        {
            printf("Desde el d%ca: ",161);
            scanf("%d", &dia1);fflush(stdin);

        } while (dia1<=0 || dia1>31);

        do
        {
            printf("Del mes: ");
            scanf("%d",&mes1);
            fflush(stdin);

        } while (mes1<=0 || mes1>12);

        do
        {
            printf("Hasta el d%ca: ",161);
            scanf("%d",&dia2);
            fflush(stdin);

        } while (dia2<=0 || dia2>31);

        do
        {
            printf("Del mes: ");
            scanf("%d",&mes2);
            fflush(stdin);

            if (mes2<=mes1 && dia1>dia2)
            {
                printf("COMPARACION ERRONEA!\nIngresa un mes que le siga al mes %d.\n", mes1);
                mes2=-1;
            }

        } while(mes2<=0 || mes2>12);

        fseek(pArch,0,SEEK_SET);

        while(!feof(pArch))
        {
            fread(&piedras,sizeof(productos),1,pArch);

            if ((piedras.fecha.dia>=dia1 || piedras.fecha.dia<=dia2) && (piedras.fecha.mes>=mes1 || piedras.fecha.mes<=mes2))
            {
                if (piedras.general=='A')
                {

                    total_rotuas+=piedras.roturas;

                    suma_Q+=piedras.quiebres;

                    if (strcmp(piedras.mercaderia,"BRISAS DEL BOSQUE")==0)
                    {
                        cant_BB_P+=piedras.pallets;

                        cant_BB_B+=piedras.bolsones;
                    }
                    else if (strcmp(piedras.mercaderia,"BRISAS DEL MAR")==0)
                    {
                        cant_BM_P+=piedras.pallets;

                        cant_BM_B+=piedras.bolsones;
                    }
                    else if (strcmp(piedras.mercaderia,"FLORES SUAVES")==0)
                    {
                        cant_FS_P+=piedras.pallets;

                        cant_FS_B+=piedras.bolsones;
                    }

                    else if (strcmp(piedras.mercaderia,"AIRES DE PLAYA")==0)
                    {
                        cant_AP_P+=piedras.pallets;

                        cant_AP_B+=piedras.bolsones;
                    }

                    else if (strcmp(piedras.mercaderia,"FRAGANCIA DE COCO")==0)
                    {
                        cant_FC_P+=piedras.pallets;

                        cant_FC_B+=piedras.bolsones;
                    }
                    else if (strcmp(piedras.mercaderia,"TROPICAL")==0)
                    {
                        cant_T_P+=piedras.pallets;

                        cant_T_B+=piedras.bolsones;
                    }
                    else if (strcmp(piedras.mercaderia,"PASTO")==0)
                    {
                        cant_P_P+=piedras.pallets;

                        cant_P_B+=piedras.bolsones;
                    }
                    else if (strcmp(piedras.mercaderia,"NEUTRO")==0)
                    {
                        cant_pallets_A+=piedras.pallets;

                        cant_bol_A+=piedras.bolsones;
                    }
                    else
                    {
                        cant_V_P+=piedras.pallets;

                        cant_V_B+=piedras.bolsones;
                    }
                }
                else
                {
                    if (piedras.general=='M')
                    {
                       total_roturas_M+=piedras.roturas;

                        suma_Q+=piedras.quiebres;

                        if (strcmp(piedras.mercaderia,"BRISAS DEL BOSQUE")==0)
                        {
                            M_cant_BB_P+=piedras.pallets;

                            M_cant_BB_B+=piedras.bolsones;
                        }

                        else if (strcmp(piedras.mercaderia,"BRISAS DEL MAR")==0)
                        {
                            M_cant_BM_P+=piedras.pallets;

                            M_cant_BM_B+=piedras.bolsones;
                        }

                        else if (strcmp(piedras.mercaderia,"FLORES SUAVES")==0)
                        {
                            M_cant_FS_P+=piedras.pallets;

                            M_cant_FS_B+=piedras.bolsones;
                        }

                        else if (strcmp(piedras.mercaderia,"AIRES DE PLAYA")==0)
                        {
                            M_cant_AP_P+=piedras.pallets;

                            M_cant_AP_B+=piedras.bolsones;
                        }

                        else if (strcmp(piedras.mercaderia,"FRAGANCIA DE COCO")==0)
                        {
                            M_cant_FC_P+=piedras.pallets;

                            M_cant_FC_B+=piedras.bolsones;
                        }
                        else if (strcmp(piedras.mercaderia,"TROPICAL")==0)
                        {
                            M_cant_T_P+=piedras.pallets;

                            M_cant_T_B+=piedras.bolsones;
                        }
                        else if (strcmp(piedras.mercaderia,"PASTO")==0)
                        {
                            M_cant_P_P+=piedras.pallets;

                            M_cant_P_B+=piedras.bolsones;
                        }
                        else if (strcmp(piedras.mercaderia,"NEUTRO")==0)
                        {
                            cant_pallets_M+=piedras.pallets;

                            cant_Bol_M+=piedras.bolsones;
                        }
                        else
                        {
                            M_cant_V_P+=piedras.pallets;

                            M_cant_V_B+=piedras.bolsones;
                        }
                    }
                }
            }
        }

        fclose(pArch);

        cant_B_A=cant_AP_B+cant_BB_B+cant_BM_B+cant_bol_A+cant_FC_B+cant_FS_B+cant_P_B+cant_T_B+cant_V_B;
        cant_B_M=M_cant_AP_B+M_cant_BB_B+M_cant_BM_B+cant_Bol_M+M_cant_FC_B+M_cant_FS_B+M_cant_P_B+M_cant_T_B+M_cant_V_B;
        cant_P_A=cant_AP_P+cant_BB_P+cant_BM_P+cant_FC_P+cant_FS_P+cant_P_P+cant_T_P+cant_V_P+cant_pallets_A;
        cant_P_M=M_cant_AP_P+M_cant_BB_P+M_cant_BM_P+M_cant_FC_P+M_cant_FS_P+M_cant_P_P+M_cant_T_P+M_cant_V_P+cant_pallets_M;

        printf("\t\t======================================================================================\n");
        printf("\t\t\t\t\t        Producci%cn desde el %d/%d al %d/%d\n",162,dia1,mes2,dia2,mes2);
        printf("\t\t======================================================================================\n\n");

        printf("\t\t\t\t\t\t       AGLOMERADO\t\t\t MICRO\n");
        printf("\t\t\t\t\t\tBOLSONES\tPALLETS\t\tBOLSONES\tPALLETS\n");
        printf("\t\tNEUTRO\t\t\t\t%d\t\t%d\t\t%d\t\t%d\n", cant_bol_A, cant_pallets_A, cant_Bol_M,cant_pallets_M);
        printf("\t\tBRISAS DEL BOSQUE\t\t%d\t\t%d\t\t%d\t\t%d\n",cant_BM_B,cant_BB_P,M_cant_BB_B,M_cant_BB_P);
        printf("\t\tBRISAS DEL MAR\t\t\t%d\t\t%d\t\t%d\t\t%d\n",cant_BM_B,cant_BM_P,M_cant_BM_B,M_cant_BM_P);
        printf("\t\tAIRES DE PLAYA\t\t\t%d\t\t%d\t\t%d\t\t%d\n",cant_AP_B,cant_AP_P,M_cant_AP_B,M_cant_AP_P);
        printf("\t\tFLORES SUAVES \t\t\t%d\t\t%d\t\t%d\t\t%d\n",cant_FS_B,cant_FS_P,M_cant_FS_B,M_cant_FS_P);
        printf("\t\tFRAGANCIA DE COCO\t\t%d\t\t%d\t\t%d\t\t%d\n",cant_FC_B,cant_FC_P,M_cant_FC_B,M_cant_FC_P);
        printf("\t\tTROPICAL\t\t\t%d\t\t%d\t\t%d\t\t%d\n",cant_T_B,cant_T_P,M_cant_T_B,M_cant_T_P);
        printf("\t\tPASTO\t\t\t\t%d\t\t%d\t\t%d\t\t%d\n",cant_P_B,cant_P_P,M_cant_P_B,M_cant_P_P);
        printf("\t\tVAINILLA\t\t\t%d\t\t%d\t\t%d\t\t%d\n",cant_V_B,cant_V_P,M_cant_V_B,M_cant_V_P);

        printf("\n\t\tEn peso\n\t\tAglomerado: %dKg.\n\t\tMicro: %dDc.\n\n",(cant_P_A*T_A*PESO)+(cant_B_A*PESO),(cant_P_M*T_M*PESO)+(cant_B_M*PESO));
        printf("\t\tRoturas\n\t\tAglomerado: %d bolsas.\n\t\tMicro: %d bolsas.\n\n",total_rotuas,total_roturas_M);
        printf("\t\tCantiad de tiempo no productivo: %.2f (horas antes del \".\" y minutos despu%cs)\n\n",suma_Q,130);

        system("pause");
    }
    else printf("\nERROR EN MUESTRA POR RANGO.\n");

}

void ventas (FILE *pArch, char *nom, FILE *pArchS, char *nomS)
{
    time_t hora;

    time (&hora);

    struct tm *mi_tiempo=localtime(&hora);

    venta mi_venta, auxiliar2;

    stock mi_stock, auxiliar;

    int cantidad=-1, opcion=-1;

    mi_venta.general='I';

    memset(mi_venta.cliente,0,strlen(mi_venta.cliente));

    pArchS=fopen(nomS,"r+b");

    //abro stock y ventga.
    if ((pArch=fopen(nom,"r+b"))!=NULL && pArchS!=NULL)
    {
        printf("Ingrese \"A\" si la venta es Aglomerante. \"M\" si la venta es Micro: ");

        while(mi_venta.general!='A' && mi_venta.general!='M')
        {
            scanf("%c",&mi_venta.general);
            fflush(stdin);
            mi_venta.general=letra_mayus(mi_venta.general);
        }

        printf("Se vendi%c:\n\t1. Aires de playa.\n\t2. Brisas del Bosque.\n\t3. Brisas del Mar.\n\t4. Fragancia de Coco.\n\t5. Flores suaves.\n",162);
        printf("\t6. Tropical.\n\t7. Pasto.\n\t8. Neutro.\n\t9. Vainilla.\n\n");

        while(opcion<=0 || opcion>9)
        {
            scanf("%d", &opcion);

            fflush(stdin);
        }

        do
        {
            printf("Ingrese cantidad de pallets vendidos: ");
            scanf("%d",&cantidad);
            fflush(stdin);

            if (cantidad<=0)
            {
                printf("INCORRECTO!\n");
                cantidad=-1;
            }

        } while (cantidad<=0);

        mi_venta.cantidad=cantidad;

        do
        {
            printf("Nombre del cliente: ");
            gets(mi_venta.cliente);
            fflush(stdin);

        } while (isalpha(mi_venta.cliente[0])==0 && isalpha(mi_venta.cliente[1])==0);

        cadena_mayus(mi_venta.cliente);

        mi_venta.fecha.dia=mi_stock.fecha.dia=mi_tiempo->tm_mday;
        mi_venta.fecha.mes=mi_stock.fecha.mes=mi_tiempo->tm_mon+1;
        mi_venta.fecha.anio=mi_stock.fecha.anio=mi_tiempo->tm_year+1900;

        fseek(pArchS,0,SEEK_SET);

        fseek(pArch,0,SEEK_SET);

        strcpy(auxiliar.mercaderia,"NO");

        auxiliar.general='I';

        switch (opcion)
        {
            case 1:

                strcpy(mi_venta.mercaderia,"AIRES DE PLAYA");

                strcpy(mi_stock.mercaderia,mi_venta.mercaderia);

                //busco un espacio vacio para guardar la venta
                while (auxiliar2.fecha.dia!=0) fread(&auxiliar2,sizeof(venta),1,pArch);

                //leo el stock cuya general sea igual.
                while(strcmp(auxiliar.mercaderia,mi_venta.mercaderia)!=0 || auxiliar.general!=mi_venta.general) fread(&auxiliar,sizeof(stock),1,pArchS);

                mi_stock.cantidad=auxiliar.cantidad-cantidad;

                mi_stock.general=mi_venta.general;

                if (mi_stock.cantidad<0) printf("\nOJO, EN STOCK SOLO QUEDAN %d PELLETS DE %s, Y ESTA VENDIENDO %d\n",auxiliar.cantidad,mi_stock.mercaderia, cantidad);

                fseek(pArch,-sizeof(venta),SEEK_CUR);

                fwrite(&mi_venta,sizeof(venta),1,pArch);

                fseek(pArchS,-sizeof(stock),SEEK_CUR);

                fwrite(&mi_stock,sizeof(stock),1,pArchS);

                break;

            case 2:

                strcpy(mi_venta.mercaderia,"BRISAS DEL BOSQUE");

                strcpy(mi_stock.mercaderia,mi_venta.mercaderia);

                while (auxiliar2.fecha.dia!=0) fread(&auxiliar2,sizeof(venta),1,pArch);

                while(strcmp(auxiliar.mercaderia,mi_venta.mercaderia)!=0 || auxiliar.general!=mi_venta.general) fread(&auxiliar,sizeof(stock),1,pArchS);

                mi_stock.cantidad=auxiliar.cantidad-cantidad;

                mi_stock.general=mi_venta.general;

                if (mi_stock.cantidad<0) printf("\nOJO, EN STOCK SOLO QUEDAN %d PELLETS DE %s, Y ESTA VENDIENDO %d\n",auxiliar.cantidad,mi_stock.mercaderia, cantidad);

                fseek(pArch,-sizeof(venta),SEEK_CUR);

                fwrite(&mi_venta,sizeof(venta),1,pArch);

                fseek(pArchS,-sizeof(stock),SEEK_CUR);

                fwrite(&mi_stock,sizeof(stock),1,pArchS);

                break;

            case 3:

                strcpy(mi_venta.mercaderia,"AIRES DEL MAR");

                strcpy(mi_stock.mercaderia,mi_venta.mercaderia);

                while (auxiliar2.fecha.dia!=0) fread(&auxiliar2,sizeof(venta),1,pArch);

                while(strcmp(auxiliar.mercaderia,mi_venta.mercaderia)!=0 || auxiliar.general!=mi_venta.general) fread(&auxiliar,sizeof(stock),1,pArchS);

                mi_stock.cantidad=auxiliar.cantidad-cantidad;

                mi_stock.general=mi_venta.general;

                if (mi_stock.cantidad<0) printf("\nOJO, EN STOCK SOLO QUEDAN %d PELLETS DE %s, Y ESTA VENDIENDO %d\n",auxiliar.cantidad,mi_stock.mercaderia, cantidad);

                fseek(pArch,-sizeof(venta),SEEK_CUR);

                fwrite(&mi_venta,sizeof(venta),1,pArch);

                fseek(pArchS,-sizeof(stock),SEEK_CUR);

                fwrite(&mi_stock,sizeof(stock),1,pArchS);

                break;

            case 4:

                strcpy(mi_venta.mercaderia,"FRAGANCIA DE COCO");

                strcpy(mi_stock.mercaderia,mi_venta.mercaderia);

                while (auxiliar2.fecha.dia!=0) fread(&auxiliar2,sizeof(venta),1,pArch);

                while(strcmp(auxiliar.mercaderia,mi_venta.mercaderia)!=0 || auxiliar.general!=mi_venta.general) fread(&auxiliar,sizeof(stock),1,pArchS);

                mi_stock.cantidad=auxiliar.cantidad-cantidad;

                mi_stock.general=mi_venta.general;

                if (mi_stock.cantidad<0) printf("\nOJO, EN STOCK SOLO QUEDAN %d PELLETS DE %s, Y ESTA VENDIENDO %d\n",auxiliar.cantidad,mi_stock.mercaderia, cantidad);

                fseek(pArch,-sizeof(venta),SEEK_CUR);

                fwrite(&mi_venta,sizeof(venta),1,pArch);

                fseek(pArchS,-sizeof(stock),SEEK_CUR);

                fwrite(&mi_stock,sizeof(stock),1,pArchS);

                break;

            case 5:

                strcpy(mi_venta.mercaderia,"FLORES SUAVES");

                strcpy(mi_stock.mercaderia,mi_venta.mercaderia);

                while (auxiliar2.fecha.dia!=0) fread(&auxiliar2,sizeof(venta),1,pArch);

                while(strcmp(auxiliar.mercaderia,mi_venta.mercaderia)!=0 || auxiliar.general!=mi_venta.general) fread(&auxiliar,sizeof(stock),1,pArchS);

                mi_stock.cantidad=auxiliar.cantidad-cantidad;

                mi_stock.general=mi_venta.general;

                if (mi_stock.cantidad<0) printf("\nOJO, EN STOCK SOLO QUEDAN %d PELLETS DE %s, Y ESTA VENDIENDO %d\n",auxiliar.cantidad,mi_stock.mercaderia, cantidad);

                fseek(pArch,-sizeof(venta),SEEK_CUR);

                fwrite(&mi_venta,sizeof(venta),1,pArch);

                fseek(pArchS,-sizeof(stock),SEEK_CUR);

                fwrite(&mi_stock,sizeof(stock),1,pArchS);

                break;

            case 6:

                strcpy(mi_venta.mercaderia,"TROPICAL");

                strcpy(mi_stock.mercaderia,mi_venta.mercaderia);

                while (auxiliar2.fecha.dia!=0) fread(&auxiliar2,sizeof(venta),1,pArch);

                while(strcmp(auxiliar.mercaderia,mi_venta.mercaderia)!=0 || auxiliar.general!=mi_venta.general) fread(&auxiliar,sizeof(stock),1,pArchS);

                mi_stock.cantidad=auxiliar.cantidad-cantidad;

                mi_stock.general=mi_venta.general;

                if (mi_stock.cantidad<0) printf("\nOJO, EN STOCK SOLO QUEDAN %d PELLETS DE %s, Y ESTA VENDIENDO %d\n",auxiliar.cantidad,mi_stock.mercaderia, cantidad);

                fseek(pArch,-sizeof(venta),SEEK_CUR);

                fwrite(&mi_venta,sizeof(venta),1,pArch);

                fseek(pArchS,-sizeof(stock),SEEK_CUR);

                fwrite(&mi_stock,sizeof(stock),1,pArchS);

                break;

            case 7:

                strcpy(mi_venta.mercaderia,"PASTO");

                strcpy(mi_stock.mercaderia,mi_venta.mercaderia);

                while (auxiliar2.fecha.dia!=0) fread(&auxiliar2,sizeof(venta),1,pArch);

                while(strcmp(auxiliar.mercaderia,mi_venta.mercaderia)!=0 || auxiliar.general!=mi_venta.general) fread(&auxiliar,sizeof(stock),1,pArchS);

                mi_stock.cantidad=auxiliar.cantidad-cantidad;

                mi_stock.general=mi_venta.general;

                if (mi_stock.cantidad<0) printf("\nOJO, EN STOCK SOLO QUEDAN %d PELLETS DE %s, Y ESTA VENDIENDO %d\n",auxiliar.cantidad,mi_stock.mercaderia, cantidad);

                fseek(pArch,-sizeof(venta),SEEK_CUR);

                fwrite(&mi_venta,sizeof(venta),1,pArch);

                fseek(pArchS,-sizeof(stock),SEEK_CUR);

                fwrite(&mi_stock,sizeof(stock),1,pArchS);

                break;

            case 8:

                strcpy(mi_venta.mercaderia,"NEUTRO");

                strcpy(mi_stock.mercaderia,mi_venta.mercaderia);

                while (auxiliar2.fecha.dia!=0) fread(&auxiliar2,sizeof(venta),1,pArch);

                while(strcmp(auxiliar.mercaderia,mi_venta.mercaderia)!=0 || auxiliar.general!=mi_venta.general) fread(&auxiliar,sizeof(stock),1,pArchS);

                mi_stock.cantidad=auxiliar.cantidad-cantidad;

                mi_stock.general=mi_venta.general;

                if (mi_stock.cantidad<0) printf("\nOJO, EN STOCK SOLO QUEDAN %d PELLETS DE %s, Y ESTA VENDIENDO %d\n",auxiliar.cantidad,mi_stock.mercaderia, cantidad);

                fseek(pArch,-sizeof(venta),SEEK_CUR);

                fwrite(&mi_venta,sizeof(venta),1,pArch);

                fseek(pArchS,-sizeof(stock),SEEK_CUR);

                fwrite(&mi_stock,sizeof(stock),1,pArchS);

                break;

            case 9:

                strcpy(mi_venta.mercaderia,"VAINILLA");

                strcpy(mi_stock.mercaderia,mi_venta.mercaderia);

                while (auxiliar2.fecha.dia!=0) fread(&auxiliar2,sizeof(venta),1,pArch);

                while(strcmp(auxiliar.mercaderia,mi_venta.mercaderia)!=0 || auxiliar.general!=mi_venta.general) fread(&auxiliar,sizeof(stock),1,pArchS);

                mi_stock.cantidad=auxiliar.cantidad-cantidad;

                mi_stock.general=mi_venta.general;

                if (mi_stock.cantidad<0) printf("\nOJO, EN STOCK SOLO QUEDAN %d PELLETS DE %s, Y ESTA VENDIENDO %d\n",auxiliar.cantidad,mi_stock.mercaderia, cantidad);

                fseek(pArch,-sizeof(venta),SEEK_CUR);

                fwrite(&mi_venta,sizeof(venta),1,pArch);

                fseek(pArchS,-sizeof(stock),SEEK_CUR);

                fwrite(&mi_stock,sizeof(stock),1,pArchS);

                break;
    }

        fclose(pArch);

        fclose(pArchS);

        printf("VENTA REGISTRADA!\n\n");

        system("pause");
    }
    else printf("ERROR EN LA VENTA\n");
}

void carga_stock (FILE *pArchS, char *nomS)
{
    time_t hora;

    time (&hora);

    struct tm *mi_tiempo=localtime(&hora);

    int dim;

    stock mi_stock;

    pArchS=fopen(nomS,"r+b");

    if (pArchS!=NULL)
    {
        fseek(pArchS,0,SEEK_END);

        dim=ftell(pArchS)/sizeof(stock);

        fseek(pArchS,0,SEEK_SET);

        for (int i=0;i<dim;i++)
        {
            fread(&mi_stock,sizeof(stock),1,pArchS);

            do
            {
                printf("Ingrese cantidad en stock de %c en %s: ",mi_stock.general, mi_stock.mercaderia);
                scanf("%d",&mi_stock.cantidad);
                fflush(stdin);

            } while (mi_stock.cantidad<0);

            mi_stock.fecha.dia=mi_tiempo->tm_mday;
            mi_stock.fecha.mes=mi_tiempo->tm_mon+1;
            mi_stock.fecha.anio=mi_tiempo->tm_year+1900;

            fseek(pArchS,-sizeof(stock),SEEK_CUR);

            fwrite(&mi_stock,sizeof(stock),1,pArchS);

            fflush(pArchS);
        }

        fclose(pArchS);

        printf("\nCARGA DE STOCK EXITOSA\n\n");

        system("pause");
    }
    else printf("ERRO EN LA CARGA DE STOCK.\n");
}

void aumenta_stock (FILE *pArch, char *nom, FILE *pArchS, char *nomS)
{
    stock mi_stock;

    productos piedras;

    time_t hora;

    time (&hora);

    struct tm *mi_tiempo=localtime(&hora);

    pArch=fopen(nom, "rb");

    pArchS=fopen(nomS, "r+b");

    if (pArch!=NULL && pArchS!=NULL)
    {
        fseek(pArch,0,SEEK_SET);

        while(!feof(pArch))
        {
            fread(&piedras,sizeof(productos),1,pArch);

            if (piedras.fecha.dia==mi_tiempo->tm_mday && piedras.fecha.mes==mi_tiempo->tm_mon+1 && piedras.fecha.anio==mi_tiempo->tm_year+1900)
            {
                if (piedras.general!='N')
                {
                    fseek(pArchS,0,SEEK_SET);

                    fread(&mi_stock,sizeof(stock),1,pArchS);

                    while (strcmp(piedras.mercaderia,mi_stock.mercaderia)!=0 || piedras.general!=mi_stock.general) fread(&mi_stock,sizeof(stock),1,pArchS);

                    mi_stock.cantidad+=piedras.pallets;

                    fseek(pArchS,-sizeof(stock),SEEK_CUR);

                    fwrite(&mi_stock,sizeof(stock),1,pArchS);
                }
            }
        }

        fclose(pArch);

        fclose(pArchS);
    }
    else printf("ERROR EN STOCK AUTOMATICO\n");
}

void muestra_stock (FILE *pArchS, char *nomS)
{
    pArchS=fopen(nomS, "rb");

    stock mi_stock, mi_stock_M;

    int peso_A=0, peso_M=0;

    mi_stock.general='I';
    mi_stock_M.general='I';

    if (pArchS!=NULL)
    {
        printf("\t\t\t\t===============================================\n");
        printf("\t\t\t\t             Cantidad de Pallets \n");
        printf("\t\t\t\t===============================================\n\n");

        printf("\t\t\t\t        AGLOMERADO\t\t\t MICRO\n");

        fseek(pArchS,0,SEEK_SET);
        while (mi_stock.general!='A' || strcmp(mi_stock.mercaderia,"BRISAS DEL BOSQUE")!=0) fread(&mi_stock,sizeof(stock),1,pArchS);

        fseek(pArchS,0,SEEK_SET);
        while(mi_stock_M.general!='M' || strcmp(mi_stock_M.mercaderia,"BRISAS DEL BOSQUE")!=0) fread(&mi_stock_M,sizeof(stock),1,pArchS);

        peso_A+=mi_stock.cantidad;

        peso_M+=mi_stock_M.cantidad;

        printf("\t\t%s\t%d\t\t\t\t %d\n",mi_stock.mercaderia,mi_stock.cantidad,mi_stock_M.cantidad);

        fseek(pArchS,0,SEEK_SET);
        while (mi_stock.general!='A' || strcmp(mi_stock.mercaderia,"BRISAS DEL MAR")!=0) fread(&mi_stock,sizeof(stock),1,pArchS);

        fseek(pArchS,0,SEEK_SET);
        while(mi_stock_M.general!='M' || strcmp(mi_stock_M.mercaderia,"BRISAS DEL MAR")!=0) fread(&mi_stock_M,sizeof(stock),1,pArchS);

        peso_A+=mi_stock.cantidad;

        peso_M+=mi_stock_M.cantidad;

        printf("\t\t%s\t\t%d\t\t\t\t %d\n",mi_stock.mercaderia,mi_stock.cantidad,mi_stock_M.cantidad);

        fseek(pArchS,0,SEEK_SET);
        while (mi_stock.general!='A' || strcmp(mi_stock.mercaderia,"FLORES SUAVES")!=0) fread(&mi_stock,sizeof(stock),1,pArchS);

        fseek(pArchS,0,SEEK_SET);
        while(mi_stock_M.general!='M' || strcmp(mi_stock_M.mercaderia,"FLORES SUAVES")!=0) fread(&mi_stock_M,sizeof(stock),1,pArchS);

        peso_A+=mi_stock.cantidad;

        peso_M+=mi_stock_M.cantidad;

        printf("\t\t%s\t\t%d\t\t\t\t %d\n",mi_stock.mercaderia,mi_stock.cantidad,mi_stock_M.cantidad);

        fseek(pArchS,0,SEEK_SET);
        while (mi_stock.general!='A' || strcmp(mi_stock.mercaderia,"AIRES DE PLAYA")!=0) fread(&mi_stock,sizeof(stock),1,pArchS);

        fseek(pArchS,0,SEEK_SET);
        while(mi_stock_M.general!='M' || strcmp(mi_stock_M.mercaderia,"AIRES DE PLAYA")!=0) fread(&mi_stock_M,sizeof(stock),1,pArchS);

        peso_A+=mi_stock.cantidad;

        peso_M+=mi_stock_M.cantidad;

        printf("\t\t%s\t\t%d\t\t\t\t %d\n",mi_stock.mercaderia,mi_stock.cantidad,mi_stock_M.cantidad);

        fseek(pArchS,0,SEEK_SET);
        while (mi_stock.general!='A' || strcmp(mi_stock.mercaderia,"FRAGANCIA DE COCO")!=0) fread(&mi_stock,sizeof(stock),1,pArchS);

        fseek(pArchS,0,SEEK_SET);
        while(mi_stock_M.general!='M' || strcmp(mi_stock_M.mercaderia,"FRAGANCIA DE COCO")!=0) fread(&mi_stock_M,sizeof(stock),1,pArchS);

        peso_A+=mi_stock.cantidad;

        peso_M+=mi_stock_M.cantidad;

        printf("\t\t%s\t%d\t\t\t\t %d\n",mi_stock.mercaderia,mi_stock.cantidad,mi_stock_M.cantidad);

        fseek(pArchS,0,SEEK_SET);
        while (mi_stock.general!='A' || strcmp(mi_stock.mercaderia,"TROPICAL")!=0) fread(&mi_stock,sizeof(stock),1,pArchS);

        fseek(pArchS,0,SEEK_SET);
        while(mi_stock_M.general!='M' || strcmp(mi_stock_M.mercaderia,"TROPICAL")!=0) fread(&mi_stock_M,sizeof(stock),1,pArchS);

        peso_A+=mi_stock.cantidad;

        peso_M+=mi_stock_M.cantidad;

        printf("\t\t%s\t\t%d\t\t\t\t %d\n",mi_stock.mercaderia,mi_stock.cantidad,mi_stock_M.cantidad);

        fseek(pArchS,0,SEEK_SET);
        while (mi_stock.general!='A' || strcmp(mi_stock.mercaderia,"PASTO")!=0) fread(&mi_stock,sizeof(stock),1,pArchS);

        fseek(pArchS,0,SEEK_SET);
        while(mi_stock_M.general!='M' || strcmp(mi_stock_M.mercaderia,"PASTO")!=0) fread(&mi_stock_M,sizeof(stock),1,pArchS);

        peso_A+=mi_stock.cantidad;

        peso_M+=mi_stock_M.cantidad;

        printf("\t\t%s\t\t\t%d\t\t\t\t %d\n",mi_stock.mercaderia,mi_stock.cantidad,mi_stock_M.cantidad);

        fseek(pArchS,0,SEEK_SET);
        while (mi_stock.general!='A' || strcmp(mi_stock.mercaderia,"NEUTRO")!=0) fread(&mi_stock,sizeof(stock),1,pArchS);

        fseek(pArchS,0,SEEK_SET);
        while(mi_stock_M.general!='M' || strcmp(mi_stock_M.mercaderia,"NEUTRO")!=0) fread(&mi_stock_M,sizeof(stock),1,pArchS);

        peso_A+=mi_stock.cantidad;

        peso_M+=mi_stock_M.cantidad;

        printf("\t\t%s\t\t\t%d\t\t\t\t %d\n",mi_stock.mercaderia,mi_stock.cantidad,mi_stock_M.cantidad);

        fseek(pArchS,0,SEEK_SET);
        while (mi_stock.general!='A' || strcmp(mi_stock.mercaderia,"VAINILLA")!=0) fread(&mi_stock,sizeof(stock),1,pArchS);

        fseek(pArchS,0,SEEK_SET);
        while(mi_stock_M.general!='M' || strcmp(mi_stock_M.mercaderia,"VAINILLA")!=0) fread(&mi_stock_M,sizeof(stock),1,pArchS);

        peso_A+=mi_stock.cantidad;

        peso_M+=mi_stock_M.cantidad;

        printf("\t\t%s\t\t%d\t\t\t\t %d\n\n",mi_stock.mercaderia,mi_stock.cantidad,mi_stock_M.cantidad);

        printf("\tEn peso\n\tAglomerante: %dKg.\n\tMicro: %dDc.\n\n", T_A*PESO*peso_A, T_M*peso_A*peso_M);

        system("pause");

        fclose(pArchS);
    }
    else printf("ERROR EN LA MUESTRA DE STOCK");
}

void muestra_ventas_mensual (FILE *pArchV, char *nomV)
{
    venta mi_venta;

    int mes=-1, suma_A=0, suma_M=0;

    if ((pArchV=fopen(nomV,"rb"))!=NULL)
    {
        do
        {
            printf("Ingrese mes a consultar: ");
            scanf("%d",&mes);
            fflush(stdin);

        } while (mes<=0 || mes>12);

        fseek(pArchV,0,SEEK_SET);

        fread(&mi_venta,sizeof(venta),1,pArchV);

        printf("\n\t\t===========================================================================\n");
        printf("\t\t                           VENTAS DEL MES %d\n",mes);
        printf("\t\t===========================================================================\n");

        printf("\t\t%-13s%-8s%-24s%-24s%s\n","FECHA", "TIPO", "PRODUCTO", "CLIENTE", "CANTIDAD");

        while (mi_venta.fecha.dia!=0)
        {
            if (mi_venta.fecha.mes==mes)
            {
                printf("\t\t%d/%d/%-10d%-8c%-24s%-24s%d\n", mi_venta.fecha.dia, mi_venta.fecha.mes, mi_venta.fecha.anio,
                                                mi_venta.general, mi_venta.mercaderia, mi_venta.cliente, mi_venta.cantidad);

                if (mi_venta.general=='A') suma_A+=mi_venta.cantidad;

                else suma_M+=mi_venta.cantidad;
            }

            fread(&mi_venta,sizeof(venta),1,pArchV);
        }

        printf("\n\tTOTAL DE VENTA\n\tAGLOMERADO: %d Pallets.\n\tMICRO: %d Pallets.\n\n",suma_A,suma_M);

        system("pause");

        fclose(pArchV);
    }
    else printf("ERROR EN LA MUESTRA DE VENTA\n");
}

void muestra_ventas_pedidas(FILE *pArchV, char *nomV)
{
    venta mi_venta;

    int dia1, dia2, mes1, mes2, suma_A=0, suma_M=0;

    if ((pArchV=fopen(nomV,"rb"))!=NULL)
    {
        do
        {
            printf("Desde el d%ca: ",161);
            scanf("%d",&dia1);
            fflush(stdin);

        } while (dia1<=0 || dia1>31);

        do
        {
            printf("Hasta el d%ca: ",161);
            scanf("%d",&dia2);
            fflush(stdin);

        } while (dia2<=0 || dia2>31);

        do
        {
            printf("Del mes: ");
            scanf("%d",&mes1);
            scanf(fflush);

        } while (mes1<=0 || mes1>12);

        do
        {
            printf("Hasta el mes: ");
            scanf("%d", &mes2);
            fflush(stdin);

            if (mes2<mes1)
            {
                printf("ERROR EN LA COMPARACION!\n");
                mes2=-1;
            }

        } while (mes2<=0 || mes2>12);

        printf("\n\t\t=================================================================================\n");
        printf("\t\t                       VENTAS DESDE EL %d/%d AL %d/%d\n",dia1,mes1,dia2,mes2);
        printf("\t\t=================================================================================\n");

        printf("\t\t%-13s%-8s%-24s%-24s%s\n","FECHA", "TIPO", "PRODUCTO", "CLIENTE", "CANTIDAD");

        fseek(pArchV,0,SEEK_SET);

        fread(&mi_venta,sizeof(venta),1,pArchV);

        while (!feof(pArchV))
        {
            if ((mi_venta.fecha.dia>=dia1 || mi_venta.fecha.mes>=mes1) && (mi_venta.fecha.dia<=dia2 || mi_venta.fecha.mes<=mes2))
            {
                printf("\t\t%d/%d/%-8d%-8c%-24s%-24s%d\n", mi_venta.fecha.dia, mi_venta.fecha.mes, mi_venta.fecha.anio,
                                                mi_venta.general, mi_venta.mercaderia, mi_venta.cliente, mi_venta.cantidad);

                if (mi_venta.general=='A') suma_A+=mi_venta.cantidad;
                else suma_M+=mi_venta.cantidad;
            }

            fread(&mi_venta,sizeof(venta),1,pArchV);
        }

        printf("\n\tTOTAL DE VENTA\n\tAGLOMERADO: %d Pallets.\n\tMICRO: %d Pallets.",suma_A,suma_M);

        fclose(pArchV);

        printf("\n\n");

        system("pause");
    }
    else printf("ERROR EN MUESTRA VENTA POR RANGO\n");
}

void inicio_anio (FILE *pArch, char *nom, FILE *pArchV, char *nomV)
{
    FILE *nuevoB, *nuevoV, *T_nuevoB, *T_nuevoV;

    char auxiliar[30];

    char nomB[]="Wonder_Cat_Nuevo.H&G";

    char nomV_old[]="Wonder_Cat_Ventas_Nuevo.H&G";

    char controlV[]="Control_Ventas_Nuevo";

    char controlB[]="Control_produccion_Nuevo";

    nuevoB=fopen(nomB,"wb");

    nuevoV=fopen(nomV_old,"wb");

    if (nuevoB!=NULL && (pArch=fopen(nom,"rb"))!=NULL)
    {
        llenado_inicial(nuevoB,nomB);

        //muestraC_texto(nuevoB,nomB,T_nuevoB,controlB);

        strcpy(auxiliar,nomB);

        rename(nomB,nom);

        rename(nom,auxiliar);

        fclose(pArch);
        fclose(nuevoB);
    }
    else printf("ERROR EN CAMBIO DE NOMBRES DE PRODUCCION!\n");

    if (nuevoV!=NULL && (pArchV=fopen(nomV,"rb"))!=NULL)
    {
        llenado_inicial(nuevoV,nomV_old);

        //muestraC_texto(nuevoV,nomV_old,T_nuevoV,controlV);

        strcpy(auxiliar,nomV_old);

        rename(nomV_old,nomV);

        rename(nomV,auxiliar);

        fclose(pArchV);
        fclose(nuevoV);
    }
    else printf("ERROR EN EL CAMBIO DE NOMBRES DE VENTAS");

    printf("ARCHIVOS DE NUEVO ANIO CREADOS!\n\n");

    system("pause");

}

void carga_bobinas (FILE *pArchR, char *nom, FILE *pArchRS, char *nomRS)
{
    time_t hora;

    time (&hora);

    struct tm *mi_tiempo=localtime(&hora);

    bobinas wonder, auxiliar;

    stock mi_stock;

    int opcion=-1, cantidad;

    float total_diferencia=0, total_diferencia_favor=0;

    pArchR=fopen(nom, "r+b");

    pArchRS=fopen(nomRS,"r+b");

    if (pArchR!=NULL && pArchRS!=NULL)
    {
        printf("Va a cargar\n1. BOBINAS DE PRODUCTO.\n2. BOBINAS DE STRITCH.\n3. BOBINAS DE PHILL.\n");

        while (opcion<=0 || opcion>3) scanf("%d", &opcion);

        fflush(stdin);

        if (opcion==1)
        {
            opcion=-1;

            do
            {
                printf("Ingrese el tipo de bobina\n\t1. AGLOMERANTE.\n\t2. MICROGRANULADO.\n\t3. FLORES SUAVES.\n\t4. BRISAS DEL BOSQUE.\n");

                scanf("%d",&opcion);

                fflush (stdin);

            } while (opcion<=0 || opcion>4);

            wonder.peso_esperado=wonder.peso_real=cantidad=-1;

            printf("Cantidad de bobinas a cargar: ");
            while (cantidad<=0) scanf("%d",&cantidad);
            fflush (stdin);

            fseek(pArchRS,(opcion-1)*sizeof(stock),SEEK_SET);

            fread(&mi_stock,sizeof(stock),1,pArchRS);

            mi_stock.cantidad+=cantidad;

            mi_stock.fecha.dia=wonder.fecha.dia=mi_tiempo->tm_mday;
            mi_stock.fecha.mes=wonder.fecha.mes=mi_tiempo->tm_mon+1;
            mi_stock.fecha.anio=wonder.fecha.anio=mi_tiempo->tm_year+1900;

            fseek(pArchRS,-sizeof(stock),SEEK_CUR);

            fwrite(&mi_stock,sizeof(stock),1,pArchRS);

            fseek(pArchR,0,SEEK_SET);

            while(!feof(pArchR))
            {
                fread(&auxiliar,sizeof(bobinas),1,pArchR);

                if (auxiliar.fecha.dia==0) break;
            }

            for (int i=0; i<cantidad;i++)
            {
                if (opcion==1) strcpy(wonder.tipo,"AGLOMERANTE");
                else if (opcion==2) strcpy(wonder.tipo,"MICRO");
                else if (opcion==3) strcpy(wonder.tipo,"FLORES SUAVES");
                else strcpy(wonder.tipo,"BRISAS DEL BOSQUE");

                printf("Bobina %d\n",i+1);

                printf("Ingrese el peso esperado: \n");

                wonder.peso_esperado=0;

                while(wonder.peso_esperado<=0) scanf("%f",&wonder.peso_esperado);

                fflush(stdin);

                printf("Ingrese el peso real: ");

                wonder.peso_real=0;

                while (wonder.peso_real<=0) scanf("%f", &wonder.peso_real);

                fflush(stdin);

                if (wonder.peso_real-CILINDRO-wonder.peso_esperado>=0)
                {
                    wonder.diferencia=0;

                    total_diferencia_favor+=wonder.peso_real-CILINDRO-wonder.peso_esperado;
                }
                else
                {
                    wonder.diferencia=fabs(wonder.peso_real-CILINDRO-wonder.peso_esperado);

                    total_diferencia+=wonder.diferencia;
                }

                fseek(pArchR,-sizeof(bobinas),SEEK_CUR);

                fwrite(&wonder,sizeof(bobinas),1,pArchR);

                fflush(pArchR);

                fread(&auxiliar,sizeof(bobinas),1,pArchR);

                printf("\n");
            }
        }
        else if (opcion==2)
        {
            wonder.peso_esperado=wonder.peso_real=cantidad=-1;

            printf("Ingrese la cantidad de bobinas a cargar: ");

            while(cantidad<=0) scanf("%d",&cantidad);

            fseek(pArchRS,(4)*sizeof(stock),SEEK_SET);

            fread(&mi_stock,sizeof(stock),1,pArchRS);

            mi_stock.cantidad+=cantidad;

            mi_stock.fecha.dia=wonder.fecha.dia=mi_tiempo->tm_mday;
            mi_stock.fecha.mes=wonder.fecha.mes=mi_tiempo->tm_mon+1;
            mi_stock.fecha.anio=wonder.fecha.anio=mi_tiempo->tm_year+1900;

            fseek(pArchRS,-sizeof(stock),SEEK_CUR);

            fwrite(&mi_stock,sizeof(stock),1,pArchRS);

            fflush(stdin);

            fseek(pArchR,0,SEEK_SET);

            while(!feof(pArchR))
            {
                fread(&auxiliar,sizeof(bobinas),1,pArchR);

                if (auxiliar.fecha.dia==0) break;
            }

            for (int i=0; i<cantidad; i++)
            {
                strcpy(wonder.tipo,"STRITCH");

                printf("Bobina %d\n",i+1);

                printf("Ingrese el peso esperado: ");
                wonder.peso_esperado=0;
                while (wonder.peso_esperado<=0) scanf("%f",&wonder.peso_esperado);
                fflush(stdin);

                printf("Ingrese el peso real: ");
                wonder.peso_real=0;
                while (wonder.peso_real<=0) scanf("%f",&wonder.peso_real);
                fflush(stdin);

                if (wonder.peso_real-CILINDRO__S-wonder.peso_esperado>=0)
                {
                    wonder.diferencia=0;

                    total_diferencia_favor+=wonder.peso_real-CILINDRO__S-wonder.peso_esperado;
                }
                else
                {
                    wonder.diferencia=fabs(wonder.peso_real-CILINDRO__S-wonder.peso_esperado);

                    total_diferencia+=wonder.diferencia;
                }

                fseek(pArchR,-sizeof(bobinas),SEEK_CUR);

                fwrite(&wonder,sizeof(bobinas),1,pArchR);

                fflush(pArchR);

                fread(&auxiliar,sizeof(bobinas),1,pArchR);

                printf("\n");
            }
        }
        else
        {
            wonder.peso_esperado=wonder.peso_real=cantidad=opcion=-1;

            printf("\t1. Bobina larga.\n\t2. Bobina corta.\n");
            while (opcion!=1 && opcion!=2) scanf("%d",&opcion);
            fflush (stdin);

            if (opcion==1) opcion=6;
            else opcion=7;

            printf("Ingrese la cantidad de bobinas a cargar: ");

            while(cantidad<=0) scanf("%d",&cantidad);

            fseek(pArchRS,(opcion-1)*sizeof(stock),SEEK_SET);

            fread(&mi_stock,sizeof(stock),1,pArchRS);

            mi_stock.cantidad+=cantidad;

            mi_stock.fecha.dia=wonder.fecha.dia=mi_tiempo->tm_mday;
            mi_stock.fecha.mes=wonder.fecha.mes=mi_tiempo->tm_mon+1;
            mi_stock.fecha.anio=wonder.fecha.anio=mi_tiempo->tm_year+1900;

            fseek(pArchRS,-sizeof(stock),SEEK_CUR);

            fwrite(&mi_stock,sizeof(stock),1,pArchRS);

            fflush(stdin);

            fseek(pArchR,0,SEEK_SET);

            while(!feof(pArchR))
            {
                fread(&auxiliar,sizeof(bobinas),1,pArchR);

                if (auxiliar.fecha.dia==0) break;
            }

            for (int i=0; i<cantidad; i++)
            {
                if (opcion==1) strcpy(wonder.tipo,"PHILL LARGO");
                else strcpy(wonder.tipo,"PHILL CORTO");

                wonder.fecha.dia=mi_tiempo->tm_mday;
                wonder.fecha.mes=mi_tiempo->tm_mon+1;
                wonder.fecha.anio=mi_tiempo->tm_year+1900;

                printf("Bobina %d\n",i+1);

                printf("Ingrese el peso esperado: ");
                wonder.peso_esperado=0;
                while (wonder.peso_esperado<=0) scanf("%f",&wonder.peso_esperado);
                fflush(stdin);

                printf("Ingrese el peso real: ");
                wonder.peso_real=0;
                while (wonder.peso_real<=0) scanf("%f",&wonder.peso_real);
                fflush(stdin);

                if (wonder.peso_real-CILINDRO-wonder.peso_esperado>=0)
                {
                    wonder.diferencia=0;

                    total_diferencia_favor+=wonder.peso_real-CILINDRO-wonder.peso_esperado;
                }
                else
                {
                    wonder.diferencia=fabs(wonder.peso_real-CILINDRO-wonder.peso_esperado);

                    total_diferencia+=wonder.diferencia;
                }

                fseek(pArchR,-sizeof(bobinas),SEEK_CUR);

                fwrite(&wonder,sizeof(bobinas),1,pArchR);

                fflush(pArchR);

                fread(&auxiliar,sizeof(bobinas),1,pArchR);

                printf("\n");
            }
        }

        printf("\nTOTAL DE DIFERENCIA EN CONTRA: %.2fKg.\nTOTAL DE DIFERENCIA A FAVOR: %.2fKg\n\n", total_diferencia,total_diferencia_favor);

        system("pause");

        fclose(pArchR);

        fclose(pArchRS);
    }
    else printf("ERROR EN LA CARGA DE BOBINAS.\n");
}

void carga_stock_suministros (FILE *pArchR, char *nom, FILE *pARchRT, char *nomT)
{
    stock mi_stock;

    time_t hora;

    time (&hora);

    struct tm *mi_tiempo=localtime(&hora);

    pArchR=fopen(nom,"wb");

    if (pArchR!=NULL)
    {
        mi_stock.fecha.dia=mi_tiempo->tm_mday;
        mi_stock.fecha.mes=mi_tiempo->tm_mon+1;
        mi_stock.fecha.anio=mi_tiempo->tm_year+1900;

        fseek(pArchR,0,SEEK_SET);

        printf("Ingrese la cantidad en stock de bobinas de Aglomerado: ");
        mi_stock.cantidad=-1;
        while (mi_stock.cantidad<=0) scanf("%d",&mi_stock.cantidad);
        fflush(stdin);

        mi_stock.general='A';
        strcpy(mi_stock.mercaderia,"AGLOMERADO");

        fwrite(&mi_stock,sizeof(stock),1,pArchR);

        memset(mi_stock.mercaderia,0,strlen(mi_stock.mercaderia));

        printf("Ingrese la cantidad en Stock de bobinas de Micro: ");

        mi_stock.cantidad=-1;
        while (mi_stock.cantidad<=0) scanf("%d",&mi_stock.cantidad);
        fflush(stdin);

        mi_stock.general='M';
        strcpy(mi_stock.mercaderia,"MICRO");

        fwrite(&mi_stock,sizeof(stock),1,pArchR);

        memset(mi_stock.mercaderia,0,strlen(mi_stock.mercaderia));

        printf("Ingrese la cantidad en Stock de bobinas de Flores Suaves: ");

        mi_stock.cantidad=-1;
        while (mi_stock.cantidad<=0) scanf("%d",&mi_stock.cantidad);
        fflush(stdin);

        mi_stock.general='F';
        strcpy(mi_stock.mercaderia,"FLORES SUAVES");

        fwrite(&mi_stock,sizeof(stock),1,pArchR);

        memset(mi_stock.mercaderia,0,strlen(mi_stock.mercaderia));

        printf("Ingrese la cantidad en Stock de bobinas de Brisas del Bosque: ");

        mi_stock.cantidad=-1;
        while (mi_stock.cantidad<=0) scanf("%d",&mi_stock.cantidad);
        fflush(stdin);

        mi_stock.general='B';
        strcpy(mi_stock.mercaderia,"BRISAS DEL BOSQUE");

        fwrite(&mi_stock,sizeof(stock),1,pArchR);

        memset(mi_stock.mercaderia,0,strlen(mi_stock.mercaderia));

        printf("Ingrese la cantidad en Stock de bobinas de Stritch: ");

        mi_stock.cantidad=-1;
        while (mi_stock.cantidad<=0) scanf("%d",&mi_stock.cantidad);
        fflush(stdin);

        mi_stock.general='S';
        strcpy(mi_stock.mercaderia,"STRITCH");

        fwrite(&mi_stock,sizeof(stock),1,pArchR);

        memset(mi_stock.mercaderia,0,strlen(mi_stock.mercaderia));

        printf("Ingrese la cantidad en Stock de bobinas de Phill largo: ");

        mi_stock.cantidad=-1;
        while (mi_stock.cantidad<=0) scanf("%d",&mi_stock.cantidad);
        fflush(stdin);

        mi_stock.general='L';
        strcpy(mi_stock.mercaderia,"PHILL LARGO");

        fwrite(&mi_stock,sizeof(stock),1,pArchR);

        memset(mi_stock.mercaderia,0,strlen(mi_stock.mercaderia));

        printf("Ingrese la cantidad en Stock de bobinas de Phill corto: ");

        mi_stock.cantidad=-1;
        while (mi_stock.cantidad<=0) scanf("%d",&mi_stock.cantidad);
        fflush(stdin);

        mi_stock.general='C';
        strcpy(mi_stock.mercaderia,"PHILL CORTO");

        fwrite(&mi_stock,sizeof(stock),1,pArchR);

        fclose(pArchR);
    }
    else printf("ERROR EN LA APERTURA DE CARGA DE STOCK SUMINISTROS.\n");

    muestraC_texto(pArchR,nom,pARchRT,nomT);

    printf("\nCARGA DE STOCK EXITOSA\n\n");

    system("pause");
}

void baja_suministros (FILE *pArchR, char *nom)
{
    stock mi_stock;

    time_t hora;

    time(&hora);

    struct tm *mi_tiempo=localtime(&hora);

    int cantidad=0, opcion=-1;

    if ((pArchR=fopen(nom,"r+b"))!=NULL)
    {
        printf("Hubo disminuci%cn de bobina de \n1. AGLOMERANTE.\n2. MICRO.\n3. FLORES SUAVES.\n4. BRISAS DEL BOSQUE.\n",162);
        printf("5. STRTICH.\n6. PHILL LARGO.\n7. PHILL CORTO\n");

        while(opcion<=0 || opcion>7) scanf("%d",&opcion);
        fflush(stdin);

        printf("Ingrese cantidad a bajar de stock: ");
        while (cantidad<=0) scanf("%d",&cantidad);
        fflush(stdin);

        if (opcion==1)
        {
            fseek(pArchR,0,SEEK_SET);

            fread(&mi_stock,sizeof(stock),1,pArchR);

            mi_stock.fecha.dia=mi_tiempo->tm_mday;
            mi_stock.fecha.mes=mi_tiempo->tm_mon+1;
            mi_stock.fecha.anio=mi_tiempo->tm_year+1900;

            mi_stock.cantidad-=cantidad;

            if (mi_stock.cantidad<=4) printf("\nOJO, QUEDAN SOLO %d BOBINAS DE %s. AVISAR!!!!!!\n\n",mi_stock.cantidad,mi_stock.mercaderia);

            fseek(pArchR,-sizeof(stock),SEEK_CUR);

            fwrite(&mi_stock,sizeof(stock),1,pArchR);
        }
        else if (opcion==2)
        {
            fseek(pArchR,(opcion-1)*sizeof(stock),SEEK_SET);

            fread(&mi_stock,sizeof(stock),1,pArchR);

            mi_stock.fecha.dia=mi_tiempo->tm_mday;
            mi_stock.fecha.mes=mi_tiempo->tm_mon+1;
            mi_stock.fecha.anio=mi_tiempo->tm_year+1900;

            mi_stock.cantidad-=cantidad;

            if (mi_stock.cantidad<=4) printf("\nOJO, QUEDAN SOLO %d BOBINAS DE %s. AVISAR!!!!!!\n\n",mi_stock.cantidad,mi_stock.mercaderia);

            fseek(pArchR,-sizeof(stock),SEEK_CUR);

            fwrite(&mi_stock,sizeof(stock),1,pArchR);
        }
        else if(opcion==3)
        {
            fseek(pArchR,(opcion-1)*sizeof(stock),SEEK_SET);

            fread(&mi_stock,sizeof(stock),1,pArchR);

            mi_stock.fecha.dia=mi_tiempo->tm_mday;
            mi_stock.fecha.mes=mi_tiempo->tm_mon+1;
            mi_stock.fecha.anio=mi_tiempo->tm_year+1900;

            mi_stock.cantidad-=cantidad;

            if (mi_stock.cantidad<=4) printf("\nOJO, QUEDAN SOLO %d BOBINAS DE %s. AVISAR!!!!!!\n\n",mi_stock.cantidad,mi_stock.mercaderia);

            fseek(pArchR,-sizeof(stock),SEEK_CUR);

            fwrite(&mi_stock,sizeof(stock),1,pArchR);
        }
        else if (opcion==4)
        {
            fseek(pArchR,(opcion-1)*sizeof(stock),SEEK_SET);

            fread(&mi_stock,sizeof(stock),1,pArchR);

            mi_stock.fecha.dia=mi_tiempo->tm_mday;
            mi_stock.fecha.mes=mi_tiempo->tm_mon+1;
            mi_stock.fecha.anio=mi_tiempo->tm_year+1900;

            mi_stock.cantidad-=cantidad;

            if (mi_stock.cantidad<=4) printf("\nOJO, QUEDAN SOLO %d BOBINAS DE %s. AVISAR!!!!!!\n\n",mi_stock.cantidad,mi_stock.mercaderia);

            fseek(pArchR,-sizeof(stock),SEEK_CUR);

            fwrite(&mi_stock,sizeof(stock),1,pArchR);
        }
        else if (opcion==5)
        {
            fseek(pArchR,(opcion-1)*sizeof(stock),SEEK_SET);

            fread(&mi_stock,sizeof(stock),1,pArchR);

            mi_stock.fecha.dia=mi_tiempo->tm_mday;
            mi_stock.fecha.mes=mi_tiempo->tm_mon+1;
            mi_stock.fecha.anio=mi_tiempo->tm_year+1900;

            mi_stock.cantidad-=cantidad;

            if (mi_stock.cantidad<=4) printf("\nOJO, QUEDAN SOLO %d BOBINAS DE %s. AVISAR!!!!!!\n\n",mi_stock.cantidad,mi_stock.mercaderia);

            fseek(pArchR,-sizeof(stock),SEEK_CUR);

            fwrite(&mi_stock,sizeof(stock),1,pArchR);
        }
        else if (opcion==6)
        {
            fseek(pArchR,(opcion-1)*sizeof(stock),SEEK_SET);

            fread(&mi_stock,sizeof(stock),1,pArchR);

            mi_stock.fecha.dia=mi_tiempo->tm_mday;
            mi_stock.fecha.mes=mi_tiempo->tm_mon+1;
            mi_stock.fecha.anio=mi_tiempo->tm_year+1900;

            mi_stock.cantidad-=cantidad;

            if (mi_stock.cantidad<=4) printf("\nOJO, QUEDAN SOLO %d BOBINAS DE %s. AVISAR!!!!!!\n\n",mi_stock.cantidad,mi_stock.mercaderia);

            fseek(pArchR,-sizeof(stock),SEEK_CUR);

            fwrite(&mi_stock,sizeof(stock),1,pArchR);
        }
        else
        {
            fseek(pArchR,(opcion-1)*sizeof(stock),SEEK_SET);

            fread(&mi_stock,sizeof(stock),1,pArchR);

            mi_stock.fecha.dia=mi_tiempo->tm_mday;
            mi_stock.fecha.mes=mi_tiempo->tm_mon+1;
            mi_stock.fecha.anio=mi_tiempo->tm_year+1900;

            mi_stock.cantidad-=cantidad;

            if (mi_stock.cantidad<=4) printf("\nOJO, QUEDAN SOLO %d BOBINAS DE %s. AVISAR!!!!!!\n\n",mi_stock.cantidad,mi_stock.mercaderia);

            fseek(pArchR,-sizeof(stock),SEEK_CUR);

            fwrite(&mi_stock,sizeof(stock),1,pArchR);
        }

        fclose(pArchR);
    }
    else printf("ERROR EN LA CARGA DE BAJA DE STOCK DE BOBINAS.\n");

    opcion=-1;

    printf("\nDesea dar de baja a otra bobina? (\"1\" CONFIRMAR. \"0\" NEGAR): ");
    while(opcion!=1 && opcion!=0) scanf("%d",&opcion);
    fflush(stdin);

    if (opcion==1) return baja_suministros(pArchR,nom);

    printf("DADA DE BAJA EXITOSA!\n\n");

    system("pause");
}

void muestra_bobinas (FILE *pArch, char *nom)
{
    stock mi_stock;

    int dim;

    if ((pArch=fopen(nom,"rb"))!=NULL)
    {
        fseek(pArch,0,SEEK_END);

        dim=ftell(pArch)/sizeof(stock);

        printf("%d",dim);

        printf("\t\t\t================================================================\n");
        printf("\t\t\t\t\t\t Stock de BOBINAS\n");
        printf("\t\t\t================================================================\n\n");

        fseek(pArch,0,SEEK_SET);

        printf("\t\t\t\tBOBINA\t\t\tCANTIDAD\n");

        for (int i=0; i<dim; i++)
        {
            fread(&mi_stock,sizeof(stock),1,pArch);

            printf("\t\t\t\t%-24s%d\n",mi_stock.mercaderia,mi_stock.cantidad);
        }

        fclose(pArch);
    }
    else printf("ERROR EN LA MUESTRA");

    printf("\n");

    system("pause");
}

void muestra_compra_bobinas (FILE *pArch, char *nom)
{
    bobinas wonder;

    int mes, cant_A, cant_M, cant_F, cant_B, cant_S, cant_L, cant_C;

    mes=cant_A=cant_B=cant_C=cant_F=cant_L=cant_M=cant_S=0;

    float peso_favor=0, peso_contra=0, suma_A, suma_B, suma_C, suma_L, suma_F, suma_M, suma_S;

    suma_A=suma_B=suma_C=suma_F=suma_L=suma_M=suma_S=0;

    pArch=fopen(nom, "rb");

    if (pArch!=NULL)
    {
        printf("Ingrese mes a consultar: ");
        while(mes<=0 || mes>12) scanf("%d",&mes);
        fflush(stdin);

        fseek(pArch,0,SEEK_SET);

        printf("\t\t\t====================================================================\n");
        printf("\t\t\t                    COMPRA DE BOBINAS MES %d\n",mes);
        printf("\t\t\t====================================================================\n\n");

        printf("\t\t\t%-15s%-15s%-15s%-12s%s\n", "FECHA","BOBINA","PESO ESPERADO", "PESO REAL","DIFERENCIA");

        while (!feof(pArch))
        {
            fread(&wonder,sizeof(bobinas),1,pArch);

            if (wonder.fecha.mes==mes)
            {
                printf("\t\t\t%d/%d/%-10d%-15s%-15.2f%-12.2f%.2f\n",wonder.fecha.dia,
                                              wonder.fecha.mes,wonder.fecha.anio,wonder.tipo,wonder.peso_esperado,wonder.peso_real,
                                              wonder.diferencia);

                if (strcmp(wonder.tipo,"AGLOMERANTE")==0)
                {
                    cant_A+=1;

                    suma_A+=wonder.diferencia;
                }
                else if (strcmp(wonder.tipo,"MICRO")==0)
                {
                    cant_M+=1;

                    suma_M+=wonder.diferencia;
                }
                else if (strcmp(wonder.tipo,"FLORES SUAVES")==0)
                {
                    cant_F+=1;

                    suma_F+=wonder.diferencia;
                }
                else if (strcmp(wonder.tipo,"BRISAS DEL BOSQUE")==0)
                {
                    cant_B+=1;

                    suma_B+=wonder.diferencia;
                }
                else if (strcmp(wonder.tipo,"STRITCH")==0)
                {
                    cant_S+=1;

                    suma_S+=wonder.diferencia;
                }
                else if (strcmp(wonder.tipo,"PHILL CORTO")==0)
                {
                    cant_C+=1;

                    suma_C+=wonder.diferencia;
                }
                else
                {
                    cant_L+=1;

                    suma_L+=wonder.diferencia;
                }
            }

            else if (mes==wonder.fecha.mes+1) break;
        }

        printf("\n\n%-20s%-15s%s\n","BOBINA", "CANTIDAD","TOTAL DIFERENCIA");
        printf("%-20s%-15d%.2f\n","AGLOMERADO",cant_A,suma_A);
        printf("%-20s%-15d%.2f\n","MICRO",cant_M,suma_M);
        printf("%-20s%-15d%.2f\n","FLORES SUAVES",cant_F,suma_F);
        printf("%-20s%-15d%.2f\n","BRISAS DEL BOSQUE",cant_B,suma_B);
        printf("%-20s%-15d%.2f\n","STRITCH",cant_S,suma_S);
        printf("%-20s%-15d%.2f\n","PHILL CORTO",cant_C,suma_C);
        printf("%-20s%-15d%.2f\n\n","PHILL LARGO",cant_L,suma_L);

        fclose(pArch);

        system("pause");
    }
    else printf("ERROR EN MOSTRAR COMPRA DE BOBINAS.\n");
}

void carga_egresos (FILE *pArch, char *nom)
{
    pArch=fopen(nom,"r+b");

    gastos salidas;

    int mes=0, opcion=0;

    if (pArch!=NULL)
    {
        printf("Ingrese el mes a cargar: ");
        do
        {
            scanf("%d",&mes);
            fflush(stdin);

            fseek(pArch,(mes-1)*sizeof(gastos),SEEK_SET);

            fread(&salidas,sizeof(gastos),1,pArch);

            if (salidas.mes==mes)
            {
                printf("ESTE MES YA ESTA CARGADO. DESEA MODIFICAR? (\"1\"CONFIRMAR, \"2\" CANCELAR): ");

                opcion=-1;

                while (opcion!=1 && opcion!=2) scanf("%d",&opcion);

                fflush(stdin);

                if (opcion==1) salidas.mes=mes;
                else
                {
                    printf("PROCESO CANCELADO.\n\n");

                    system("pause");

                    return 0;
                }
            }
            else salidas.mes=mes;

        } while (salidas.mes<=0 || salidas.mes>12);

        printf("Ingrese gastos de electricidad: ");
        do
        {
            scanf("%f",&salidas.electricidad);
            fflush(stdin);
        } while (salidas.electricidad<=0);

        printf("Gastos de alquiler: ");
        do
        {
            scanf("%f",&salidas.alquiler);
            fflush(stdin);
        } while (salidas.alquiler<=0);

        printf("Gastos en agua: ");
        do
        {
            scanf("%f",&salidas.agua);
            fflush(stdin);
        } while (salidas.agua<0);

        printf("Gastos en sueldos: ");
        do
        {
            scanf("%f",&salidas.sueldos);
            fflush(stdin);
        } while (salidas.sueldos<=0);

        printf("Gastos en flete: ");
        do
        {
            scanf("%f",&salidas.flete);
            fflush(stdin);
        } while (salidas.flete<=0);

        printf("Ingrese otros gastos: ");
        do
        {
            scanf("%f",&salidas.otros);
            fflush(stdin);
        } while (salidas.otros<0);

        fseek(pArch,-sizeof(gastos),SEEK_CUR);

        fwrite(&salidas,sizeof(gastos),1,pArch);

        printf("REGISTRO EXITOSO.\n\n");

        fclose(pArch);
    }
    else printf("ERROR EN LA CARGA DE EGRESOS.\n");

    system("pause");
}

void muestra_costo (FILE *pArchP, char *nomP, FILE *pArchE, char *nomE)
{
    pArchE=fopen(nomE,"rb");

    gastos salidas;

    int mes=0;

    if (pArchE!=NULL)
    {
        fseek(pArchE,0,SEEK_SET);

        printf("Ingrese mes a consultar: ");
        while (mes<=0 || mes>12) scanf("%d",&mes);
        fflush(stdin);

        printf("\n\n");

        fseek(pArchE,(mes-1)*sizeof(gastos),SEEK_SET);

        fread(&salidas,sizeof(gastos),1,pArchE);

        printf("\t\t\==============================================================================================================\n");
        printf("\t\t\t                          \tEgresos del mes %d\n",mes);
        printf("\t\t\==============================================================================================================\n\n");

        printf("\t\t%-8s%-15s%-12s%-15s%-15s%-15s%-15s%s\n","MES","ELECTRICIDAD","ALQUILER","AGUA", "FLETE","SUELDOS", "OTROS","TOTAL");

        printf("\t\t%-8d%-15.2f%-12.2f%-15.2f%-15.2f%-15.2f%-15.2f%.2f\n\n\n",
               salidas.mes, salidas.electricidad,salidas.alquiler,salidas.agua,salidas.flete,salidas.sueldos,salidas.otros,
               salidas.electricidad+salidas.alquiler+salidas.agua+salidas.flete+salidas.sueldos+salidas.otros);

        fclose(pArchE);

        produccion_mensual(pArchP,nomP,mes);
    }
    else printf("ERROR EN MUESTRA EGRESOS.\n");
}

void carga_pallets (FILE *pArch, char *nom)
{
    time_t hora;

    time (&hora);

    struct tm *mi_tiempo=localtime(&hora);

    bobinas pallets, auxiliar;

    int opcion=-1;

    float diferencia_favor=0, difrencia_contra=0;

    if ((pArch=fopen(nom,"r+b"))!=NULL)
    {
        fseek(pArch,0,SEEK_SET);

        pallets.fecha.dia=mi_tiempo->tm_mday;
        pallets.fecha.mes=mi_tiempo->tm_mon+1;
        pallets.fecha.anio=mi_tiempo->tm_year+1900;

        while(!feof(pArch))
        {
            fread(&auxiliar,sizeof(bobinas),1,pArch);

            if (auxiliar.fecha.dia==0) break;
        }

        fseek(pArch,-sizeof(bobinas),SEEK_CUR);

        printf("\n1. Big Bag de Aglomerado.\n2. Big Bag de Micro.\n\n");

        while (opcion!=1 && opcion!=2) scanf("%d",&opcion);
        fflush(stdin);

        if (opcion==1) strcpy(pallets.tipo,"AGLOMERANTE");
        else strcpy(pallets.tipo,"MICRO");

        opcion=-1;

        printf("Ingrese la cantidad a cargar: ");
        while (opcion<=0) scanf("%d",&opcion);
        fflush(stdin);

        for (int i=0;i<opcion;i++)
        {
            printf("Big Bag %d\n",i+1);
            do
            {
                printf("Peso Esperado: ");
                pallets.peso_esperado=0;
                scanf("%f",&pallets.peso_esperado);
                fflush (stdin);
            } while (pallets.peso_esperado<=0);

            do
            {
                printf("Peso real: ");
                pallets.peso_real=0;
                scanf("%f",&pallets.peso_real);
                fflush (stdin);

            } while (pallets.peso_real<=0);

            if ((pallets.diferencia=pallets.peso_real-pallets.peso_esperado)>=0) diferencia_favor+=pallets.diferencia;
            else if ((pallets.peso_real-pallets.peso_esperado)<0)
            {
                pallets.diferencia=fabs(pallets.peso_real-pallets.peso_esperado);

                difrencia_contra+=pallets.diferencia;
            }

            fwrite(&pallets,sizeof(bobinas),1,pArch);

            fflush(pArch);

            printf("\n");
        }

        printf("\n\tTOTAL DE PESO A FAVOR: %.2f\n\tTOTAL DE PESOS EN CONTRA: %.2f\n\n",diferencia_favor,difrencia_contra);

        system("pause");

        fclose(pArch);
    }
    else printf("ERROR EN LA CARGA DE PALLETS.\n");
}

void muestra_compra_pallets (FILE *pArch, char *nom)
{
    bobinas pallets;

    int mes, cant_A, cant_M;

    mes=cant_A=cant_M=0;

    float peso_favor=0, peso_contra=0, suma_A, suma_M;

    suma_A=suma_M=0;

    pArch=fopen(nom, "rb");

    if (pArch!=NULL)
    {
        printf("Ingrese mes a consultar: ");
        while(mes<=0 || mes>12) scanf("%d",&mes);
        fflush(stdin);

        fseek(pArch,0,SEEK_SET);

        printf("\t\t\t====================================================================\n");
        printf("\t\t\t                    COMPRA DE BIGS BAGS MES %d\n",mes);
        printf("\t\t\t====================================================================\n\n");

        printf("\t\t\t%-15s%-15s%-15s%-12s%s\n", "FECHA","PRODUCTO","PESO ESPERADO", "PESO REAL","DIFERENCIA");

        while (!feof(pArch))
        {
            fread(&pallets,sizeof(bobinas),1,pArch);

            if (pallets.fecha.mes==mes)
            {
                printf("\t\t\t%d/%d/%-11d%-15s%-15.2f%-12.2f%.2f\n",pallets.fecha.dia,
                                              pallets.fecha.mes,pallets.fecha.anio,pallets.tipo,pallets.peso_esperado,pallets.peso_real,
                                              pallets.diferencia);

                if (strcmp(pallets.tipo,"AGLOMERANTE")==0)
                {
                    cant_A+=1;

                    suma_A+=pallets.diferencia;
                }
                else if (strcmp(pallets.tipo,"MICRO")==0)
                {
                    cant_M+=1;

                    suma_M+=pallets.diferencia;
                }
            }
            else if (mes==pallets.fecha.mes+1) break;
        }

        printf("\n\n%-20s%-15s%s\n","PRODUCTO", "CANTIDAD","TOTAL DIFERENCIA");
        printf("%-20s%-15d%.2f\n","AGLOMERADO",cant_A,suma_A);
        printf("%-20s%-15d%.2f\n","MICRO",cant_M,suma_M);

        fclose(pArch);

        system("pause");
    }
    else printf("ERROR EN MOSTRAR COMPRA DE BOBINAS.\n");
}

