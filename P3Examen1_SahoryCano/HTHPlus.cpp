
#include "HTHPlus.h"

HTHPlus::HTHPlus() {
}

HTHPlus::HTHPlus(const HTHPlus& orig) {
}

HTHPlus::~HTHPlus() {
}

void HTHPlus::agregar_Pelicula(Pelicula* pelicula_nueva) {
    lista_peliculas.push_back(pelicula_nueva);
}

void HTHPlus::imprimir_peliculas_por_genero() {
    for (int i = 0; i < lista_peliculas.size(); i++) {
        if (((Pelicula*) lista_peliculas[i])->GetGenero() == "Ciencia Ficción") {
            Pelicula* pelicula_actual = lista_peliculas[i];
            cout << pelicula_actual->toString();
        }
    }//fin for
    for (int i = 0; i < lista_peliculas.size(); i++) {
        if (((Pelicula*) lista_peliculas[i])->GetGenero() == "Comedia") {
            Pelicula* pelicula_actual = lista_peliculas[i];
            cout << pelicula_actual->toString();
        }
    }//fin for
    for (int i = 0; i < lista_peliculas.size(); i++) {
        if (((Pelicula*) lista_peliculas[i])->GetGenero() == "Musical") {
            Pelicula* pelicula_actual = lista_peliculas[i];
            cout << pelicula_actual->toString();
        }
    }//fin for
    for (int i = 0; i < lista_peliculas.size(); i++) {
        if (((Pelicula*) lista_peliculas[i])->GetGenero() == "Acción") {
            Pelicula* pelicula_actual = lista_peliculas[i];
            cout << pelicula_actual->toString();
        }
    }//fin for
}//fin metodo

void HTHPlus::imprimir_peliculas_por_valoracion() {
    vector<Pelicula*> peliculas_por_valoracion;
    for (int i = 0; i < lista_peliculas.size(); i++) {
        if (((Pelicula*) lista_peliculas[i])->GetValoracion() == 5) {
            Pelicula* pelicula_actual = lista_peliculas[i];
            peliculas_por_valoracion.push_back(pelicula_actual);
        }//fin if
    }//fin for
    for (int i = 0; i < lista_peliculas.size(); i++) {
        if (((Pelicula*) lista_peliculas[i])->GetValoracion() == 4) {
            Pelicula* pelicula_actual = lista_peliculas[i];
            peliculas_por_valoracion.push_back(pelicula_actual);
        }//fin if
    }//fin for
    for (int i = 0; i < lista_peliculas.size(); i++) {
        if (((Pelicula*) lista_peliculas[i])->GetValoracion() == 3) {
            Pelicula* pelicula_actual = lista_peliculas[i];
            peliculas_por_valoracion.push_back(pelicula_actual);
        }//fin if
    }//fin for
    for (int i = 0; i < lista_peliculas.size(); i++) {
        if (((Pelicula*) lista_peliculas[i])->GetValoracion() == 2) {
            Pelicula* pelicula_actual = lista_peliculas[i];
            peliculas_por_valoracion.push_back(pelicula_actual);
        }//fin if
    }//fin for
    for (int i = 0; i < lista_peliculas.size(); i++) {
        if (((Pelicula*) lista_peliculas[i])->GetValoracion() == 1) {
            Pelicula* pelicula_actual = lista_peliculas[i];
            peliculas_por_valoracion.push_back(pelicula_actual);
        }//fin if
    }//fin for
    lista_peliculas.clear();
    for (int i = 0; i < peliculas_por_valoracion.size(); i++) {
        lista_peliculas.push_back(peliculas_por_valoracion[i]);
    }
    for (int i = 0; i < lista_peliculas.size(); i++) {
        Pelicula* pelicula_actual = lista_peliculas[i];
        cout << pelicula_actual->toString();
    }//fin for
}//fin método

void HTHPlus::buscar_peliculas(string buscar) {
    vector<Pelicula*> busqueda;
    for (int i = 0; i < lista_peliculas.size(); i++) {
        Pelicula* pelicula_actual = lista_peliculas[i];
        string pelicula_busqueda = pelicula_actual->toString();
        if (contains(pelicula_busqueda, buscar)) {
            busqueda.push_back(lista_peliculas[i]);
        }
    }//fin for */
}

bool HTHPlus::contains(string cadena1, string cadena2) {
    int contador = 0;
    bool contiene = false;
    if (cadena1.size() >= cadena2.size()) {
        for (int i = 0; i < cadena1.size(); i++) {
            if (cadena2[i] == cadena1[i]) {
                contador++;
                contiene = true;
            } else {
                contador = 0;
            }//fin else
            if (contador == cadena2.size()) {
                i = contador + 1;
            }//fin if
        }//fin for
    } else {
        for (int i = 0; i < cadena2.size(); i++) {
            if ((cadena1[i] == cadena2[i])
                    && (contador < cadena1.size() - 1 && i == cadena2.size() - 1)) {
                contador++;
                contiene = true;
            } else {
                contador = 0;
            }//fin else
            if (contador == cadena1.size()) {
                i = contador + 1;
            }//fin if*/
        }//fin for
    }
    return contiene;
}//fin metodo