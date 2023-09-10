//
// Created by noah on 05/09/23.
//
#include<iostream>
using namespace std;
#include <cmath>

#include "points.h"

point2D saisir_point(){
    point2D a{};

    cout << "Entrez l'abscisse du point : " << endl;
    cin >> a.x;

    cout << "Entrez l'ordonnee du point : " << endl;
    cin >> a.y;

    cout << "Entrez le nom du point (une lettre majuscule) : " << endl;
    cin >> a.nom;

    return a;
}

float dist_points(point2D a, point2D b){
    float dist;

    dist = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));

    return dist;
}

point2D plus_proche_premier(point2D tab_p[], int size){
    point2D a = tab_p[0];
    point2D b{};
    point2D plus_proche = tab_p[1];
    float min_dist = dist_points(a, tab_p[1]);

    for(int i = 2; i < size; i++){
        b = tab_p[i];
        if(dist_points(a, b) < min_dist){
            min_dist = dist_points(a, b);
            plus_proche = tab_p[i];
        }
    }

    return plus_proche;
}
