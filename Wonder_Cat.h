#ifndef WONDER_CAT_H_INCLUDED
#define WONDER_CAT_H_INCLUDED

typedef struct date
{
    int dia;
    int mes;
    int anio;

} tiempo ;

typedef struct mercancia
{
    tiempo fecha;
    char general;
    char mercaderia[30];
    int pallets;
    int bolsones;
    float quiebres;
    int roturas;

} productos;

typedef struct sell
{
    tiempo fecha;
    char general;
    char cliente[50];
    char mercaderia[30];
    int cantidad;

} venta;

typedef struct control
{
    tiempo fecha;
    char general;
    char mercaderia[30];
    int cantidad;

} stock;

typedef struct rollos
{
    tiempo fecha;
    char tipo[30];
    float peso_esperado;
    float peso_real;
    float diferencia;

} bobinas;

typedef struct egresos
{
    int mes;
    float electricidad;
    float sueldos;
    float alquiler;
    float flete;
    float agua;
    float otros;

} gastos;


void crea_archivo(FILE *pArch, char *nom);

char letra_mayus(char c);

void cadena_mayus (char cadena[]);

void llenado_inicial (FILE *pArch, char *nom);

void muestraC_texto (FILE *pArch, char *nom, FILE *pArchT, char *nomT);

void carga (FILE *pArch, char *nom, FILE *pArchR, char *nomR);

void produccion_mensual(FILE *pArch, char *nom, int mes);

void produccion_rango (FILE *pArch, char *nom);

void ventas (FILE *pArch, char *nom, FILE *pArchS, char *nomS);

void carga_stock (FILE *pArchS, char *nomS);

void aumenta_stock (FILE *pArch, char *nom, FILE *pArchS, char *nomS);

void muestra_stock (FILE *pArchS, char *nomS);

void muestra_ventas_mensual (FILE *pArchV, char *nomV);

void muestra_ventas_pedidas(FILE *pArchV, char *nomV);

void inicio_anio (FILE *pArch, char *nom, FILE *pArchV, char *nomV);

void carga_bobinas (FILE *pArchR, char *nom, FILE *pArchRS, char *nomRS);

void carga_stock_suministros (FILE *pArchR, char *nom, FILE *pARchRT, char *nomT);

void baja_suministros (FILE *pArchR, char *nom);

void muestra_bobinas (FILE *pArch, char *nom);

void muestra_compra_bobinas (FILE *pArch, char *nom);

void carga_egresos (FILE *pArch, char *nom);

void muestra_costo (FILE *pArchP, char *nomP, FILE *pArchE, char *nomE);

void carga_pallets (FILE *pArch, char *nom);



#endif // WONDER_CAT_H_INCLUDED
