#include <iostream>

using namespace std;

struct dados {

    string nome, planeta;
    int batalhas;

};

struct dado {

    string nome;
    int soldados;
    float media;

};

int main (){

    int quantidade_soldados;
    cin >> quantidade_soldados;
    dados stormtroopers[quantidade_soldados];

    for(int i = 0; i < quantidade_soldados; i ++){

        cin >> stormtroopers[i].nome;
        cin >> stormtroopers[i].planeta;
        cin >> stormtroopers[i].batalhas;

    } 

}