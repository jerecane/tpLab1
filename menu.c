#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "menu.h"

/// MENU PRINCIPAL

void menuPrincipal()
{
    char opcion = 0;

    while (opcion != 27)
        {
        system("cls");
        printf("\n......... MENU PRINCIPAL .........");
        printf("\n\n......... DARK SIDE MOBILE .........");
        printf("\n1. .........CLIENTES.........");
        printf("\n2. .........CONSUMOS.........");
        printf("\nESC. .........Salir.........");

        opcion = getch();
        system("cls");

        switch (opcion)
            {
            case '1':
                menuClientes();
                break;
            case '2':
                menuConsumos();
                break;
            case 27:
                opcion = 27;
                break;
            default:
                printf(".........Ingreso una opcion no valida, por favor elija bien.........");
                getch();
                break;
            }
        }

    system("cls");

}

/// MENU CLIENTES

void menuClientes()
{
    char opcion = 0;

while (opcion != 27)
        {
        system("pause");
        system("cls");
        printf("\n.........CLIENTES.........");
        printf("\n1. Nuevo cliente");
        printf("\n2. Lista de clientes");
        printf("\n3. Lista de clientes de baja");
        printf("\n4. Buscar clientes");
        printf("\n5. Modificar cliente ");
        printf("\n6. Baja de cliente");
        printf("\n7. Alta de cliente");
        printf("\nESC. Volver al menu principal");


        opcion = getch();
        system("cls");
        switch (opcion)
            {
            case '1':
                cargarArchivoClientes("clientes.dat");
                printf("\n Carga con exito");
                break;
            case '2':
                muestraArchivoClientes("clientes.dat",0);///0 muestra los activos
                break;
            case '3':
                muestraArchivoClientes("clientes.dat",1);/// 1 muestra los de baja
                break;
            case '4':
                buscarClienteXDni("clientes.dat");
                break;
            case '5':
                cambiarChar();
                break;
            case '6':
                altaBajaCliente(1); /// 1 el usuario esta dado de baja
                break;
            case '7':
                altaBajaCliente(0); /// 0 esta activo el usuario
            case 27:
                menuPrincipal();
                break;
            default:
                printf("\n.........Ingreso una opcion no valida.........");
                getch();
                break;
            }
        }
}

/// MENU A-B CLIENTE

void altaBajaMenu()
{
    char opcion = 0;

    while (opcion != 27)
        {
        system("cls");
        printf("\tMENU ALTA || BAJA");
        printf("\n1. Alta cliente");
        printf("\n2. Baja cliente");
        printf("\nESC. Volver");

        opcion = getch();
        system("cls");

        switch (opcion)
            {
            case '1':
                altaBajaCliente();
                break;
            case '2':
                altaBajaCliente();
                break;
            case 27:
                menuClientes();
                break;
            default:
                printf(".........Ingreso una opcion no valida.........");
                getch();
                break;
            }
        }
}

/// MENU PARA IMPRIMIR CLIENTES

void imprimirClientes ()
{
    char opcion = 0;

    while (opcion != 27)
        {
        system("cls");
        printf("\nMOSTRAR CLIENTES");
        printf("\n1. Todos los clientes");
        printf("\n2. Clientes dados de alta");
        printf("\n3. Clientes dados de baja");
        printf("\nESC. Volver al menu anterior");

        opcion = getch();
        system("cls");

        switch(opcion)
            {
            case '1':
                printf("\nClientes ordenados por ID");
                muestraArchivoClientes();
                break;
            case '2':
                printf("\nClientes dados de alta");
                muestraArchivoClientes;
                break;
            case '3':
                printf("\nClientes dados de baja");
                ///;
                break;
            case 27:
                menuClientes();
                break;
            default:
                printf(".........Ingreso una opcion no valida.........");
                getch();
                break;
            }
        }
}

/// MENU DE BUSQUEDA DE CLIENTES

void menuBusquedaCliente ()
{
    char opcion = 0;

    while (opcion != 27)
        {
        system("cls");
        printf("\nBUSCAR CLIENTES");
        printf("\n1. Buscar cliente por DNI");
        printf("\n2. Buscar cliente por ID");
        printf("\n3. Buscar cliente por nombre");
        printf("\n4. Buscar cliente por apellido");
        printf("\n5. Buscar cliente por celular");
        printf("\nESC. Volver al menu anterior");


        opcion = getch();
        system("cls");

        switch (opcion)
            {
            case '1':
                ;
                break;
            case '2':
                ;
                break;
            case '3':
                ;
                break;
            case '4':
                ;
                break;
            case '5':
                ;
                break;
            case 27:
                menuClientes();
                break;
            default:
                printf(".........Ingreso una opcion no valida.........");
                getch();
                break;
            }
        }
}

///MENU DE CONSUMOS DE CLIENTES

void menuConsumos ()
{
    char opcion = 0;

    while (opcion != 27)
        {
        system("cls");
        printf("\n.........CONSUMOS.........");
        printf("\n1. Cargar un consumo de un cliente");
        printf("\n2. Mostrar los consumos de un cliente");
        printf("\n3. Modificar los consumos de un cliente");
        printf("\nESC. Volver al menu anterior");

        opcion = getch();
        system("cls");

        switch (opcion)
            {
            case '1':
                CargaArchivoConsumo("consumo.dat")
                ;
                break;
            case '2':
                menuMostrarConsumos()
                ;
                break;
            case '3':
                menuModificarConsumos()
                ;
                break;
            default:
                printf(".........Ingreso una opcion no valida.........");
                getch();
                break;
            case 27:
                menuPrincipal();
                break;
            }
        }
}

void menuMostrarConsumos()
{
    char opcion = 0;

    while (opcion != 27)
    {
        system("pause");
        system("cls");
        printf("\nMOSTRAR CONSUMOS");
        printf("\n1. Mostrar los consumos de un cliente");
        printf("\n2. Mostrar los consumos de una fecha");
        printf("\n3. Mostrar un consumo por fecha y cliente");
        printf("\n4. Mostrar listado de consumos activos");
        printf("\n5. Mostrar listado de consumos inactivos");
        printf("\n6. Mostrar listado de consumos completo");
        printf("\nESC. Volver al menu anterior");

        opcion = getch();
        system("cls");

        switch (opcion)
            {
            case '1':
                MostrarConsumoXUSUARIO()
                ;
                break;
            case '2':
                MostrarConsumoXFECHA()
                ;
                break;
            case '3':
                MostrarConsumoXFyU()
                ;
                break;
            case '4':
                muestraArchivoConsumo("consumo.dat",0,NULL,0);
                ;
                break;
            case '5':
                muestraArchivoConsumo("consumo.dat",0,NULL,1)
                ;
                break;
            case '6':
                muestraArchivoConsumo("consumo.dat",0,NULL,2)
                ;
                break;
            default:
                printf(".........Ingreso una opcion no valida.........");
                getch();
                break;
            case 27:
                menuConsumos ();
                break;
            }
        }
}

void menuModificarConsumos()
{
    char opcion = 0;

    while (opcion != 27)
    {
        system("cls");
        printf("\nMODIFICAR CONSUMO");
        printf("\n1. Modificar cantidad de datos consumidos");
        printf("\n2. Alta-Baja de un consumo");
        printf("\nESC. Volver al menu anterior");

        opcion = getch();
        system("cls");

        switch (opcion)
            {
            case '1':
                ModificarConsumoUsuario()
                ;
                break;
            case '2':
                Alta_Baja_Consumo()
                ;
                break;
            default:
                printf(".........Ingreso una opcion no valida.........");
                getch();
                break;
            case 27:
                menuConsumos ();
                break;
            }
        }
}
