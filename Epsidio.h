#include "Video.h"

#ifndef EPISODIO_H
#define EPISODIO_H

class Episodio: public Video{
    private:
        int numeroEpisodio;
        int numeroTemporada;
        string nombreSerie;

    public:
        Episodio();
        Episodio(string _id, string _nombre, float _duracion, string _genero, int _calificacion, int _numeroEpisodio, int _numeroTemporada, string _nombreSerie);

        void setNumeroEpisodio(int _numeroEpisodio);
        int getNumeroEpisodio();

        void setNumeroTemporada(int _numeroTemporada);
        int getNumeroTemporada();

        void setNombreSerie(string _nombreSerie);
        string getNombreSerie();

        void mostrarInformacion();

};

Episodio::Episodio():Video(){
    numeroEpisodio = 0;
    numeroTemporada = 0;
    nombreSerie = "";
    calificacion = 0;
}

Episodio::Episodio(string _id, string _nombre, float _duracion, string _genero, int _calificacion, int _numeroEpisodio, int _numeroTemporada, string _nombreSerie):Video(_id, _nombre, _duracion, _genero, _calificacion){
    numeroEpisodio = _numeroEpisodio;
    numeroTemporada = _numeroTemporada;
    nombreSerie = _nombreSerie;
}

void Episodio::setNumeroEpisodio(int _numeroEpisodio){
    numeroEpisodio = _numeroEpisodio;
}

int Episodio::getNumeroEpisodio(){
    return numeroEpisodio;
}

void Episodio::setNumeroTemporada(int _numeroTemporada){
    numeroTemporada = _numeroTemporada;
}

int Episodio::getNumeroTemporada(){
    return numeroTemporada;
}

void Episodio::setNombreSerie(string _nombreSerie){
    nombreSerie = _nombreSerie;
}

string Episodio::getNombreSerie(){
    return nombreSerie;
}

void Episodio::mostrarInformacion(){
    Video::mostrarInformacion();
    cout << "Número de episodio: " << numeroEpisodio << endl;
    cout << "Número de temporada: " << numeroTemporada << endl;
    cout << "Nombre de la serie: " << nombreSerie << endl;
}

#endif
