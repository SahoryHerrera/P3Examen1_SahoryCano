

#include "Pelicula.h"

Pelicula::Pelicula() {
}

Pelicula::Pelicula(const Pelicula& orig) {
}

Pelicula::~Pelicula() {
}

string Pelicula::toString(){
    string cadena_toString = "";
    string valoracion_x = this->valoracion + "";
    cadena_toString+= this->titulo + " - " + genero + " - " + valoracion_x + "/5" + "\n" + "\n";;
    return cadena_toString;
}

