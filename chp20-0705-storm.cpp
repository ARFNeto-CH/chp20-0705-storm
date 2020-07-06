#include <iostream>
using namespace std;

typedef struct
{
    char    nome[30];
    int     id_planeta; // o planeta
    unsigned int    numero_de_batalhas;
}   Stormtrooper;

typedef struct
{
    int     id_planeta; // comparar nomes pra que?
    char    nome[30];
    unsigned int    numero_de_troopers;
    unsigned int    total_de_batalhas;
}   Planeta;

int main()
{
    Planeta         planeta[30];
    Planeta um  { 0, "Dune", 3, 113 };
    Planeta dois{ 1, "Pandora", 14, 456 };

    cout << "Planeta " << um.id_planeta << ": " <<
        "\"" << um.nome << "\"" <<
        " Stormtroppers: " << um.numero_de_troopers <<
        " Total de batalhas: " << um.total_de_batalhas <<
        " Media de batalhas: " <<
            (double)um.total_de_batalhas/um.numero_de_troopers <<
        endl;

    planeta[0] = um;
    planeta[1] = dois;
    planeta[3] = um;
    planeta[4] = planeta[0];

};

// fim ch 1464938
