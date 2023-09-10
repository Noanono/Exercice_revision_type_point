#include <iostream>
using namespace std;

#include "points.h"

int main() {

    int nb_points;
    point2D * tab_points;
    point2D pr{};
    point2D proche{};

    cout << "Combien de points voulez vous entrer : " << endl;
    cin >> nb_points;

    tab_points = new point2D[nb_points];

    for(int i = 0; i < nb_points; i++){
        tab_points[i] = saisir_point();
    }

    pr = tab_points[0];
    proche = plus_proche_premier(tab_points, nb_points);

    cout << "Le point le plus proche du premier point est a une distance de " << dist_points(pr, proche) << ", c'est le point " << proche.nom << endl;

    delete [] tab_points;
    return 0;
}
