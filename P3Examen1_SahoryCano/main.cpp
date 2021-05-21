
#include <time.h>
#include <random>
#include <cstdlib>

#include <ctime>

#include<string>
using std::string;

#include <iostream>

#include "Pelicula.h"
#include "HTHPlus.h"
using std::cout;
using std::cin;
using std::endl;

using namespace std;

/*
 * 
 */
int menu();

string menu_genero_pelicula();

int main(int argc, char** argv) {
    int op = menu();
    HTHPlus* registro_de_peliculas = new HTHPlus();
    while (op != 7) {
        switch (op) {
            case 1:
            {
                string titulo = "", director = "", genero = "";
                //int valoracion = 1;
                int valoracion = 1+ rand()%4;
                cout << "Ingrese titulo de la pelicula: ";
                cin >> titulo;
                cout << "Ingrese director de la pelicula: ";
                cin >>director;
                genero = menu_genero_pelicula();
                Pelicula* pelicula = new Pelicula();
                pelicula = new Pelicula(titulo, director, genero, valoracion);
                registro_de_peliculas->agregar_Pelicula(pelicula);
                break;
            }
            case 2:{
				break;
			}
           
            case 3:{
				break;
			}
				
           
            case 4:
            {
                registro_de_peliculas->imprimir_peliculas_por_genero();
                cout << "salio" << endl << endl;
                break;
            }
            case 5:
            {
                string texto = "";
                cout << "Ingrese el texto con el que desea buscar su pelicula: ";
                cin >> texto;
                registro_de_peliculas->buscar_peliculas(texto);
                cout << "salio" << endl << endl;
                break;
            }
            case 6:
            {
                registro_de_peliculas->imprimir_peliculas_por_valoracion();
                cout << "salio" << endl << endl;
                break;
            }
            case 7:
            {
                cout << "Saliendo del programa..." << endl;
                break;
            }
            default:
            {
                cout << "Opcion invalida" << endl;
                menu();
                break;
            }
        }
        op = menu();
    }
    return 0;
}

int menu() {
    int opcion = 0;
    cout << "+------------------------Menu--------------------------+" << endl;
    cout << "| 1. Agregar pelicula                                  |" << endl;
    cout << "| 2. Modificar pelicula                                |" << endl;
    cout << "| 3. Eliminar pelicula                                 |" << endl;
    cout << "| 4. Imprimir peliculas por genero                     |" << endl;
    cout << "| 5. Buscar pelicula                                   |" << endl;
    cout << "| 6. Imprimir peliculas ordenadas por valoracion       |" << endl;
    cout << "| 7. Salir                                             |" << endl;
    cout << "+------------------------------------------------------+" << endl;
    cout << "Elija una opcion: " << endl;
    cin>> opcion;
    return opcion;
}

string menu_genero_pelicula() {
    bool continuar = true;
    int opcion_genero = 0;
    string genero;
    while (continuar) {
        cout << "1. Ciencia Ficcion";
        cout << "2. Accion";
        cout << "3. Musical";
        cout << "4. Comedia";
        cout << "-> Seleccione el genero: ";
        cin>>opcion_genero;
        if (opcion_genero >= 1 && opcion_genero <= 4) {
            continuar = false;
        }
        switch (opcion_genero) {
            case 1:
            {
                genero = "Ciencia Ficcion";
                break;
            }
            case 2:
            {
                genero = "Accion";
                break;
            }
            case 3:
            {
                genero = "Musical";
                break;
            }
            case 4:
            {
                genero = "Comedia";
                break;
            }
            default:
                cout << "La opción no existe.";
        }
    }
    cout << endl;
    return genero;
}

