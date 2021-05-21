
#ifndef PELICULA_H
#define PELICULA_H

#include<string>
using std::string;
using std::stringstream;

class Pelicula {
public:

    Pelicula(string titulo, string director, string genero, int valoracion) :
    titulo(titulo), director(director), genero(genero), valoracion(valoracion) {
    }

    string GetDirector() const {
        return director;
    }

    void SetDirector(string director) {
        this->director = director;
    }

    string GetGenero() const {
        return genero;
    }

    void SetGenero(string genero) {
        this->genero = genero;
    }

    string GetTitulo() const {
        return titulo;
    }

    void SetTitulo(string titulo) {
        this->titulo = titulo;
    }

    int GetValoracion() const {
        return valoracion;
    }

    void SetValoracion(int valoracion) {
        this->valoracion = valoracion;
    }

    string toString();

    Pelicula();
    Pelicula(const Pelicula& orig);
    virtual ~Pelicula();
private:
    string titulo, director, genero;
    int valoracion;
};

#endif /* PELICULA_H */

