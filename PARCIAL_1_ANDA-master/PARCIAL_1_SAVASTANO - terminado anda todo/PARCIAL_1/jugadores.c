
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "funciones.h"
#include "validaciones.h"
#include "equipos.h"
#include "jugadores.h"

#define CANT_EQUIPOS 12
#define CANT_JUGADORES 100
#define CANT_PARTIDOS 25
#define CANT_REFERIS 6

#define TRUE 0
#define FALSE 1




/** \brief hardcodea la lista de jugadores
 *
 * \param listaJugadores eJugador* la lista de jugadors que esta en el main
 * \param cantidad int cantidad de jugadores
 * \return void
 *
 */
void hardcodeoJugadores(eJugador* listaJugadores, int cantidad)
{


char nombreJugador[][50]={"JUAN","JOSÉ LUIS","JOSÉ","MARÍA GUADALUPE","FRANCISCO","GUADALUPE","MARÍA","JUANA","ANTONIO","JESÚS","MIGUEL ÁNGEL","PEDRO","ALEJANDRO","MANUEL","MARGARITA","MARÍA DEL CARMEN","JUAN CARLOS","ROBERTO","FERNANDO","DANIEL",
"CARLOS","JORGE","RICARDO","MIGUEL","EDUARDO","JAVIER","RAFAEL","MARTÍN","RAÚL","DAVID","JOSEFINA","JOSÉ ANTONIO","ARTURO","MARCO ANTONIO","JOSÉ MANUEL","JUAN","JOSÉ LUIS","JOSÉ","MARÍA GUADALUPE","FRANCISCO","GUADALUPE","MARÍA","JUANA",
"ANTONIO","JESÚS","MIGUEL ÁNGEL","PEDRO","ALEJANDRO","MANUEL","MARGARITA","MARÍA DEL CARMEN","JUAN CARLOS",
"ROBERTO","FERNANDO","DANIEL","CARLOS","JORGE","RICARDO","MIGUEL","EDUARDO","JAVIER","RAFAEL","MARTÍN","RAÚL","DAVID","JOSEFINA","JOSÉ ANTONIO","ARTURO","MARCO ANTONIO","JOSÉ MANUEL","JUAN","JOSÉ LUIS","JOSÉ","MARÍA GUADALUPE",
"FRANCISCO","GUADALUPE","MARÍA","JUANA","ANTONIO","JESÚS","MIGUEL ÁNGEL","PEDRO","ALEJANDRO","MANUEL","MARGARITA","MARÍA DEL CARMEN","JUAN CARLOS","ROBERTO","FERNANDO","DANIEL","CARLOS","JORGE","RICARDO","MIGUEL","EDUARDO","JAVIER",
"RAFAEL","MARTÍN","RAÚL","DAVID","JOSEFINA","JOSÉ ANTONIO","ARTURO","MARCO ANTONIO","JOSÉ MANUEL","JUAN","JOSÉ LUIS","JOSÉ","MARÍA GUADALUPE","FRANCISCO","GUADALUPE","MARÍA","JUANA","ANTONIO","JESÚS","MIGUEL ÁNGEL","PEDRO","ALEJANDRO",
"MANUEL","MARGARITA","MARÍA DEL CARMEN","JUAN CARLOS","ROBERTO","FERNANDO","DANIEL","CARLOS","JORGE","RICARDO","MIGUEL","EDUARDO","JAVIER","RAFAEL","MARTÍN","RAÚL","DAVID","JOSEFINA","JOSÉ ANTONIO","ARTURO","MARCO ANTONIO",
"JOSÉ MANUEL","JUAN","JOSÉ LUIS","JOSÉ","MARÍA GUADALUPE","FRANCISCO","GUADALUPE","MARÍA","JUANA","ANTONIO","JESÚS","MIGUEL ÁNGEL","PEDRO","ALEJANDRO","MANUEL","MARGARITA","MARÍA DEL CARMEN","JUAN CARLOS","ROBERTO","FERNANDO","DANIEL","CARLOS","JORGE","RICARDO","MIGUEL","EDUARDO","JAVIER","RAFAEL","MARTÍN","RAÚL","DAVID","JOSEFINA","JOSÉ ANTONIO","ARTURO","MARCO ANTONIO","JOSÉ MANUEL","JUAN","JOSÉ LUIS","JOSÉ","MARÍA GUADALUPE","FRANCISCO","GUADALUPE","MARÍA","JUANA","ANTONIO","JESÚS","MIGUEL ÁNGEL","PEDRO","ALEJANDRO","MANUEL","MARGARITA","MARÍA DEL CARMEN","JUAN CARLOS","ROBERTO","FERNANDO","DANIEL","CARLOS","JORGE","RICARDO","MIGUEL","EDUARDO","JAVIER","RAFAEL","MARTÍN","RAÚL","DAVID","JOSEFINA","JOSÉ ANTONIO","ARTURO","MARCO ANTONIO","JOSÉ MANUEL","JUAN","JOSÉ LUIS","JOSÉ","MARÍA GUADALUPE","FRANCISCO","GUADALUPE","MARÍA","JUANA","ANTONIO","JESÚS","MIGUEL ÁNGEL","PEDRO","ALEJANDRO","MANUEL","MARGARITA","MARÍA DEL CARMEN","JUAN CARLOS","ROBERTO","FERNANDO","DANIEL","CARLOS","JORGE","RICARDO","MIGUEL","EDUARDO","JAVIER","RAFAEL","MARTÍN","RAÚL","DAVID","JOSEFINA","JOSÉ ANTONIO","ARTURO","MARCO ANTONIO","JOSÉ MANUEL"};
char sexo[]= {'M','M','M','F','M','F','F','F','M','M','M','M','M','M','F','F','M','M','M','M','M','M','M','M','M','M','M','M','M','M','F','M','M','M','M'};
char apellidoJugador[][50]= {"González","Rodríguez","Gómez","Fernández","López","Díaz","Martínez","Pérez","Romero","Sánchez","García","Sosa","Torres","Ramírez","Álvarez","Benítez","Acosta","Flores","Medina","Ruiz","González","Rodríguez","Gómez","Fernández","López","Díaz","Martínez","Pérez","Romero","Sánchez","García","Sosa","Torres","Ramírez","Álvarez","Benítez","Acosta","Flores","Medina","Ruiz","González","Rodríguez","Gómez","Fernández","López","Díaz","Martínez","Pérez","Romero","Sánchez","García","Sosa","Torres","Ramírez","Álvarez","Benítez","Acosta","Flores","Medina","Ruiz"};
int codigoEquipoJugador[] = { 1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,4,4,4,4,4,4,4,4,4,4,5,5,5,5,5,5,5,5,5,5,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,7,7,7,8,8,8,8,8,8,8,8,8,8,9,9,9,9,9,9,9,9,9,9,10,10,10,10,10,10,10,10,10,10};
int anio[]={ 2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995,2000, 2001,2000,1998,1995};
int mes[]={ 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1, 1,3,5,7,8,10,12,5,4,6,3,1};
int dia[]= { 25,30,29,10,1,5,4,2,8,18,19,6,11,22,25,30,29,10,1,5,4,2,8,18,19,6,11,22,25,30,29,10,1,5,4,2,8,18,19,6,11,22,25,30,29,10,1,5,4,2,8,18,19,6,11,22,25,30,29,10,1,5,4,2,8,18,19,6,11,22,25,30,29,10,1,5,4,2,8,18,19,6,11,22,25,30,29,10,1,5,4,2,8,18,19,6,11,22,25,30,29,10,1,5,4,2,8,18,19,6,11,22,25,30,29,10,1,5,4,2,8,18,19,6,11,22,25,30,29,10,1,5,4,2,8,18,19,6,11,22};
int codigoJugador[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105};

    /* HARDCODEO MIO
    int codigoJugador[] = {10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160};
    char apellidoJugador[] [31] = {/*"Rodriguez"*///"Wayne", "Marquez","Pelaez",/*"Mantuqui"*/"Wayne","Garchulo","Wayne",/*"Oltorno"*/"Wayne","Ostorno","Arquitequi","Procenex","Hache","Rainer","Ultron" ,"Lombos" ,"Bolos" ,"Dachunqui" };
    //char nombreJugador[] [31] = {"Juan", "John","Joao","Joco","Orcho","Mocho","Acho","Pacho","Cuacho","Racho","Tacho","Uno","Cuarentaytres" ,"Lombos" ,"Kofler" ,"Queda" };
    //int codigoEquipoJugador [] ={ 1,1,1, 10,10,9,8,8,8,8,3 ,3 ,5, 5, 5 ,6    }; //REVISAR SI ESTO TIENE QUE ESTAR LIGADO AL ESTRUC DE EQUIPOS
    //char sexo[]={'m','m','m','m','m','m','m','m','m','m','m','m','m','m','m','m'};

    //eFechaJugador fechaNacimiento[];
    //int dia={10};
    //int mes={8};
    //int anio[] ={1999,1990,1992,1990,1982,1980,1992,1998,1995,1990,1992,1998,1993,1994,1995,1996};

    int i;
    for(i=0;i<cantidad;i++)
    {
        listaJugadores[i].codigoJugador=codigoJugador[i];
        listaJugadores[i].codigoEquipoJugador=codigoEquipoJugador[i];
        listaJugadores[i].fechaNacimiento.dia=dia;
        listaJugadores[i].fechaNacimiento.mes=mes;
        listaJugadores[i].fechaNacimiento.anio=anio[i];
        listaJugadores[i].sexo=sexo[i];

        strcpy(listaJugadores[i].apellidoJugador,apellidoJugador[i]);
        strcpy(listaJugadores[i].nombreJugador,nombreJugador[i]);

        listaJugadores[i].estaVacioJugador=FALSE;
    }


}




/** \brief Carga un equipo al array lista de equipos devuelve 0 si lo hizo bien, -1 si falló.
 *
 * \param listaEquipos eEquipo* puntero al array a donde cargar
 * \param cantidad int cantidad de elementos que tiene el array
 * \param codigo int codigo incrementado que se copia de otra funcion
 * \param nombre[] char nombre a cargar
 * \param localidad[] char localidad a cargar
 * \param lugarVacio int el indice donde cargar
 * \return int 0 si fue exitoso , -1 si falló
 *
 */
int agregarJugador(eJugador* listaJugadores, int cantidad, int codigoJugador, char apellido[] ,char nombre[], char sexo, int codigoEquipo, eFechaJugador fechaJugador ,int lugarVacio)
{
    if(listaJugadores!=NULL && cantidad==CANT_JUGADORES)
    {
        ponerMayusculas(nombre);
        ponerMayusculas(apellido);

        listaJugadores[lugarVacio].codigoJugador=codigoJugador;
        strcpy(listaJugadores[lugarVacio].nombreJugador,nombre);
        strcpy(listaJugadores[lugarVacio].apellidoJugador,apellido);


        listaJugadores[lugarVacio].codigoEquipoJugador=codigoEquipo;
        ///CODIGO DE EQUIPO VALIDAR

        listaJugadores[lugarVacio].sexo=sexo;

        listaJugadores[lugarVacio].fechaNacimiento=fechaJugador;

        listaJugadores[lugarVacio].estaVacioJugador=FALSE;

        return 0;
    }

    return -1;

}

/** \brief Guarda la fecha de nacimiento de un jugador
 *
 * \return la estructura de fecha jugador
 *
 */

 int introducirFechaJugador2( eFechaJugador * fechaAux)
 {
    eFechaJugador fechaDeUnJugador;
    int validDia;
    int validMes;
    int validAnio;
    printf("Ingrese la fecha de nacimiento del jugador\n");

   validDia= getValidInt("Dia : ", "Dia no valido", &fechaDeUnJugador.dia,1,31,3 );
   validMes= getValidInt("Mes : ", "Mes no valido", &fechaDeUnJugador.mes, 1,12,3);
   validAnio= getValidInt("Anio : ", "Anio no valido", &fechaDeUnJugador.anio,1940,2019,3  );

   if(validDia==0 && validMes==0 && validAnio==0)
    {
        *fechaAux = fechaDeUnJugador;
        return 0;
    }
    return -1;

 }

/*
eFechaJugador introducirFechaJugador ()
{
    eFechaJugador fechaDeUnJugador;
    int validDia;
    int validMes;
    int validAnio;

    printf("Ingrese la fecha de nacimiento del jugador\n");
   // printf("Dia : ");
   validDia= getValidInt("Dia : ", "Dia no valido", &fechaDeUnJugador.dia,1,31,3 );
    //scanf("%d",&fechaDeUnJugador.dia);
   validMes= getValidInt("Mes : ", "Mes no valido", &fechaDeUnJugador.mes, 1,12,3);
   validAnio= getValidInt("Anio : ", "Anio no valido", &fechaDeUnJugador.anio,1940,2019,3  );
   // printf("Mes : ");
   // scanf("%d",&fechaDeUnJugador.mes);
    //printf("Anio : ");
    //scanf("%d",&fechaDeUnJugador.anio);

    if(validDia==0 && validMes==0 && validAnio==0)
    {
        return fechaDeUnJugador;
    }



}
*/









/** \brief busca lugar vacio en el array de jugadores, devuelve el indice del primer lugar vacio
 *
 * \param listaJugadores eJugador* array de jugadores
 * \param cantidad int cantidad de elementos del array
 * \return int el indice encontrado o -1 si no hay mas lugar
 *
 */
int buscarLugarVacioJugadores(eJugador* listaJugadores, int cantidad   )
{
    int i;
    int lugarVacioValido=0;
    int indiceEncontrado;

    for(i=0;i<cantidad;i++)
    {
        if(listaJugadores[i].estaVacioJugador==TRUE)
        {
            indiceEncontrado=i;
            lugarVacioValido=1;
            break;
        }else if(listaJugadores[i].estaVacioJugador=='\0' && lugarVacioValido==0)
        {
            indiceEncontrado=-1;
        }
    }

    return indiceEncontrado;
}







/** \brief inicializa el array de jugadores poniendo el esta vacio en true
 *
 * \param lista de array de jugadores
 * \param cantidad de elementos del array
 * \return 0 si lo realizó o -1 si no hubo una falla
 *
 */
int inicializarJugadores (eJugador* listaJugadores, int cantidad )
{
    int returnInit;
    if(listaJugadores!=NULL && cantidad==CANT_JUGADORES)
    {
        int i;
        for(i=0;i<cantidad;i++)
        {
            listaJugadores[i].estaVacioJugador=TRUE;
            returnInit = 0;
        }
    }else{
        returnInit= -1;
    }

    return returnInit;
}


void mostrarJugadores(eJugador* listaJugadores, int cantidad )
{
    printf("JUGADORES\n");
    //printf("\n\tCodigo\tApellido\tNombre\tSexo\tFecha de Nacimiento\tCodigo de Equipo\t\n\n");
    printf("\n");
    //printf("Codigo\t"); printf("Apellido\t");printf("Nombre\t");printf("Sexo\t");
    printf("Codigo "); printf("  Apellido  ");printf("  Nombre  ");printf(" Sexo ");printf("  Fecha de Nac.  ");printf(" Codigo de Equipo ");
    printf("\n");printf("\n");
    int ij;
    for(ij=0;ij<cantidad;ij++)
    {
        if(listaJugadores[ij].estaVacioJugador==FALSE)
        {
            printf("\n %3d\t %8s\t %4s\t  %2c\t   %4d/%3d/%5d\t   %3d\t \n", listaJugadores[ij].codigoJugador, listaJugadores[ij].apellidoJugador,
                   listaJugadores[ij].nombreJugador, listaJugadores[ij].sexo, listaJugadores[ij].fechaNacimiento.dia, listaJugadores[ij].fechaNacimiento.mes,
                   listaJugadores[ij].fechaNacimiento.anio, listaJugadores[ij].codigoEquipoJugador);
        }
    }
}


void mostrarUnJugador(eJugador* listaJugadores, int codigo, int cantidadJugadores)
{
    int ij;
    for(ij=0;ij<cantidadJugadores;ij++)
    {
        if( (listaJugadores[ij].estaVacioJugador==FALSE) && (listaJugadores[ij].codigoJugador==codigo) )
        {
            printf("\n %3d\t %8s\t %4s\t  %2c\t   %4d/%3d/%5d\t   %3d\t \n", listaJugadores[ij].codigoJugador, listaJugadores[ij].apellidoJugador,
                   listaJugadores[ij].nombreJugador, listaJugadores[ij].sexo, listaJugadores[ij].fechaNacimiento.dia, listaJugadores[ij].fechaNacimiento.mes,
                   listaJugadores[ij].fechaNacimiento.anio, listaJugadores[ij].codigoEquipoJugador);
        }
    }



}




/** \brief ordena los jugadores del array alfabeticamente
 *
 * \param  la lista de jugadores
 * \param cantidad de elementos en la lista jugadores
 * \return void
 *
 */

void ordenarJugadoresAlfabeticamente(eJugador* listaJugadores, int cantidad)
{
    int i;
    int j;
    eJugador auxJugador;

    for(i=0;i<cantidad-1;i++)
    {
        for(j=i+1;j<cantidad;j++)
        {
            if( ( strcmp(listaJugadores[i].apellidoJugador,listaJugadores[j].apellidoJugador) > 0 )   )
            {
                auxJugador= listaJugadores[i];
                listaJugadores[i]= listaJugadores[j];
                listaJugadores[j]= auxJugador;
            }//if( ( strcmp(listaEquipos[i].nombre,listaEquipos[j].nombre) > 0 )



            if(  ( strcmp(listaJugadores[i].apellidoJugador,listaJugadores[j].apellidoJugador) == 0 )    )
            {
                if(   ( strcmp(listaJugadores[i].nombreJugador,listaJugadores[j].nombreJugador) > 0 ) ){
                    auxJugador= listaJugadores[i];
                    listaJugadores[i]= listaJugadores[j];
                    listaJugadores[j]= auxJugador;

                  }
            }
        }//for(j=i-1;i<cantidad;j++)
    }//for(i=0;i<cantidad-1;i++)
}






/** \brief da de baja a un jugador
 *
 * \param
 * \param
 * \return
 *
 */
int bajaJugadorConfirm (eJugador* listaJugadores, int cantidad, int codigo)
{
    int i;

    char confirmaSN;
    //int retorno;
    //printf("EL CODIGO QUE LE LLEGA A LA FUNCION ES %d\n\n",codigo);


    if(listaJugadores!=NULL && cantidad==CANT_JUGADORES)
    {
        for(i=0;i<cantidad;i++)
        {
            //printf("LOS CODIGOS QUE SE ESTAN MANEJANDO ACA SON : %d\n\n", listaEquipos[i].codigoEquipo);

            if(listaJugadores[i].estaVacioJugador==FALSE)
            {


                if(listaJugadores[i].codigoJugador == codigo )
                {
                    printf(" Esta a punto de dar de baja a %s  , %s ", listaJugadores[i].apellidoJugador , listaJugadores[i].nombreJugador);
                    confirmaSN=getChar("Confirma? [ S / N ]\n");
                    if(confirmaSN=='s' || confirmaSN=='S')
                    {
                       listaJugadores[i].estaVacioJugador=TRUE;
                        return 0;
                        break;
                    }else{
                        return -1;
                        break;
                    }

                }




            }else if(listaJugadores[cantidad].estaVacioJugador==FALSE){
               printf("\nNo se encuentra ese codigo \n");
                return -1;
                break;
            }
        }//FOR
    }

    return -1;

}











int sacarPromedioEdadesJugadores( int codigoEquipo, int cantidadEquipos , eJugador* listaJugadores, int cantidadJugadores)
{

    int j;
    int edadJugador;
    int acumuladorEdades=0;
    int promedioEdades=0;
    int cantidadJugadoresDelEquipo=0;


        for(j=0;j<cantidadJugadores;j++)
        {
            if(codigoEquipo == listaJugadores[j].codigoEquipoJugador)
            {
                 edadJugador= 2019 - listaJugadores[j].fechaNacimiento.anio;
                 //printf("Nacio en el anio %d  \n",listaJugadores[j].fechaNacimiento.anio);
                 //printf("la edad de este jugador %s %s  me esta dando : %d \n", listaJugadores[j].nombreJugador,listaJugadores[j].apellidoJugador,edadJugador);
                cantidadJugadoresDelEquipo++;
                acumuladorEdades=acumuladorEdades + edadJugador;

            }

        }

    //printf("El la suma de edades esta en : %d ",acumuladorEdades);
    promedioEdades=acumuladorEdades/cantidadJugadoresDelEquipo;


    //printf("El promedio de edades de este equipo es de : %d ",promedioEdades);

    return promedioEdades;



}

void equipoMasJoven(/*int codigoEquipo,*/ int cantidadEquipos, eJugador* listaJugadores, int cantidadJugadores , eEquipo* listaEquipos )
{
    int i;
    int indiceEquipoMasJoven;
    int min=110;
    int promedio;

    for(i=0;i<cantidadEquipos;i++)
    {
        promedio=sacarPromedioEdadesJugadores(listaJugadores[i].codigoEquipoJugador,cantidadEquipos,listaJugadores,cantidadJugadores);
        if(promedio<min)
        {
            min=promedio;
            indiceEquipoMasJoven=i;

        }

    }
    printf("El equipo mas joven es el :  ");
    mostrarUnEquipo(listaEquipos,cantidadEquipos,listaJugadores[indiceEquipoMasJoven].codigoEquipoJugador);
    printf("  con un promedio de %d ", min);








}









int modificarJugador( eJugador* listaJugadores, int indice)
{
    if( listaJugadores!= NULL && indice<CANT_JUGADORES)
    {
        int opcion;
        char confirmaSN;

        char auxNombreJugador[51];

        char auxApellidoJugador[51];
        char auxsexo;
        int auxCodigoEquipo;
        int auxdia;
        int auxmes;
        int auxanio;

        int momento;

        printf("\n");
        printf("Elija que desea modificar : ");
        printf("\n");
        printf(" 1. Nombre del jugador ");
        printf("\n");
        printf(" 2. Apellido del jugador ");
        printf("\n");
        printf(" 3. Codigo del equipo ");
        printf("\n");
        printf(" 4. Sexo ");
        printf("\n");
        printf(" 5. Fecha de nacimiento ");
        printf("\n");
        printf(" 6. Salir ");
        printf("\n");
        printf("\n");
        scanf("%d",&opcion);

        while(opcion!=6)
        {
            switch(opcion)
            {
            case 1:
                if(  (getValidString(" Ingrese el nuevo nombre : ", " Nombre no valido \n", " Nombre demasiado largo \n", auxNombreJugador, 51, 3) )==0   )
                {
                    ponerMayusculas(auxNombreJugador);
                    printf("Se va a modificar el nombre %s  por  %s  \n", listaJugadores[indice].nombreJugador, auxNombreJugador);
                    confirmaSN=getChar("Confirma? [ S / N ] \n");

                    if(confirmaSN=='s' || confirmaSN=='S')
                    {
                        strcpy( listaJugadores[indice].nombreJugador, auxNombreJugador );
                        printf("\n");
                        printf("Nombre modificado exitosamente \n");
                        printf("\n");
                        break;
                    }else{
                        printf("\n");
                        printf("No se pudo modificar el nombre. Intentelo de vuelta ");
                        printf("\n");
                        break;
                    }
                }
                break;

            case 2:
                if(  (getValidString(" Ingrese el nuevo nombre : ", " Apellido no valido \n", " Apellido demasiado largo \n", auxApellidoJugador, 51, 3) )==0   )
                {
                    ponerMayusculas(auxApellidoJugador);
                    printf("Se va a modificar el apellido %s  por  %s  \n", listaJugadores[indice].apellidoJugador, auxApellidoJugador);
                    confirmaSN=getChar("Confirma? [ S / N ] \n");

                    if(confirmaSN=='s' || confirmaSN=='S')
                    {
                        strcpy( listaJugadores[indice].apellidoJugador, auxApellidoJugador );
                        printf("\n");
                        printf("Apellido modificado exitosamente \n");
                        printf("\n");
                        break;
                    }else{
                        printf("\n");
                        printf("No se pudo modificar el apellido. Intentelo de vuelta ");
                        printf("\n");
                        break;
                    }
                }
                break;

            case 3:

                if(getValidInt("Ingrese el codigo nuevo : "," codigo no valido",&auxCodigoEquipo,1,CANT_EQUIPOS,3)==0)
                {
                    printf(" se modificara %d por %d ",listaJugadores[indice].codigoEquipoJugador,auxCodigoEquipo);
                    confirmaSN=getChar("Confirma? [ S / N ] \n");

                    if(confirmaSN=='s' || confirmaSN=='S')
                    {
                        listaJugadores[indice].codigoEquipoJugador=auxCodigoEquipo;
                        printf("\n");
                        printf("Codigo modificado exitosamente \n");
                        printf("\n");
                        break;
                    }else{
                        printf("\n");
                        printf("No se pudo modificar el codigo. Intentelo de vuelta ");
                        printf("\n");
                        break;

                }
            }
            break;
        case 4:
            auxsexo=getChar("Ingrese el nuevo sexo F o M");
            if ( (auxsexo=='f' || auxsexo=='F')|| (auxsexo=='m' || auxsexo=='M') );
                {
                    printf(" se modificara %c por %c ",listaJugadores[indice].sexo,auxsexo);
                    confirmaSN=getChar("Confirma? [ S / N ] \n");

                    if(confirmaSN=='s' || confirmaSN=='S')
                    {
                        listaJugadores[indice].sexo=auxsexo;
                        printf("\n");
                        printf("sexo modificado exitosamente \n");
                        printf("\n");
                        break;
                    }else{
                        printf("\n");
                        printf("No se pudo modificar el sexo. Intentelo de vuelta ");
                        printf("\n");
                        break;

                }
            }





            break;
        case 5:
            /*
            printf("Ingrese que parte de la fecha quiere modificar: \n");
            printf("1. dia \n 2. mes \n 3. anio\n");

            scanf("%d",&momento);

            switch(momento);
                    case 1:
                        if(getValidInt("Ingrese el dia nuevo : "," dia no valido",&auxdia,1,31,3)==0)
                        {
                            printf(" se modificara %d por %d ",listaJugadores[indice].fechaNacimiento.dia,auxdia);
                            confirmaSN=getChar("Confirma? [ S / N ] \n");

                            if(confirmaSN=='s' || confirmaSN=='S')
                            {
                                listaJugadores[indice].fechaNacimiento.dia=auxdia;
                                printf("\n");
                                printf("dia modificado exitosamente \n");
                                printf("\n");
                                break;
                            }else{
                                printf("\n");
                                printf("No se pudo modificar el dia. Intentelo de vuelta ");
                                printf("\n");
                                break;

                        }
                    }
                    break;
                    case 2:
                     if(getValidInt("Ingrese el mes nuevo : "," mes no valido",&auxmes,1,12,3)==0)
                        {
                            printf(" se modificara %d por %d ",listaJugadores[indice].fechaNacimiento.mes,auxmes);
                            confirmaSN=getChar("Confirma? [ S / N ] \n");

                            if(confirmaSN=='s' || confirmaSN=='S')
                            {
                                listaJugadores[indice].fechaNacimiento.mes=auxmes;
                                printf("\n");
                                printf("mes modificado exitosamente \n");
                                printf("\n");
                                break;
                            }else{
                                printf("\n");
                                printf("No se pudo modificar el mes. Intentelo de vuelta ");
                                printf("\n");
                                break;

                        }
                    }
                    break;
                    case 3:
                     if(getValidInt("Ingrese el anio nuevo : "," anio no valido",&auxanio,1950,2019,3)==0)
                        {
                            printf(" se modificara %d por %d ",listaJugadores[indice].fechaNacimiento.anio,auxanio);
                            confirmaSN=getChar("Confirma? [ S / N ] \n");

                            if(confirmaSN=='s' || confirmaSN=='S')
                            {
                                listaJugadores[indice].fechaNacimiento.anio=auxanio;
                                printf("\n");
                                printf("anio modificado exitosamente \n");
                                printf("\n");
                                break;
                            }else{
                                printf("\n");
                                printf("No se pudo modificar el mes. Intentelo de vuelta ");
                                printf("\n");
                                break;

                        }
                    }
                    break;

            */

            break;





        printf(" 4. Sexo ");








                break;

            }


        printf("\n");
        printf("Elija que desea modificar : ");
        printf("\n");
        printf(" 1. Nombre del jugador ");
        printf("\n");
        printf(" 2. Apellido del jugador ");
        printf("\n");
        printf(" 3. Codigo del equipo ");
        printf("\n");
        printf(" 4. Sexo ");
        printf("\n");
        printf(" 5. Fecha de nacimiento ");
        printf("\n");
        printf(" 6. Salir ");
        printf("\n");
        printf("\n");
        scanf("%d",&opcion);


        }//while(opcion!=3)

        return 0;

    }//if( listaEquipos!= NULL && indice<CANT_EQUIPOS)


    return -1;
}







