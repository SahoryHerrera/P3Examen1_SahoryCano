
#ifndef HTHPLUS_H
#define HTHPLUS_H

#include "Pelicula.h"
//#include "Pelicula.cpp"

#include<vector>
using std::vector;

#include<iostream>
using std::cout;

class HTHPlus {
public:
    HTHPlus();
    HTHPlus(const HTHPlus& orig);
    virtual ~HTHPlus();
    
    void imprimir_peliculas_por_genero();
    void imprimir_peliculas_por_valoracion();
    void agregar_Pelicula(Pelicula*);
    void buscar_peliculas(string);
    bool contains(string, string);
    
public:
    vector<Pelicula*> lista_peliculas;
};

#endif /* HTHPLUS_H */

