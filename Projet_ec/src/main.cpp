//============================================================================
// Name        : Projet_ec.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <string>

#include "Scene.hpp"
#include "Sphere.hpp"
#include "Camera.hpp"
#include "Ecran.hpp"
#include "Objet.hpp"

using namespace std;

int main() {
	/*int array[] = {4,5,0};
	vector<float> pos(array, array + sizeof(array)/sizeof(float));

	array[0] = 7;
	array[1] = -1;
	array[2] = 0;
	vector<float> dir(array, array + sizeof(array)/sizeof(float));

	array[0] = 11;
	array[1] = 3;
	array[2] = 0;
	vector<float> cent(array, array + sizeof(array)/sizeof(float));

	vector<float> resultat;

	Camera camTest(pos);
	Sphere sphTest(1.0);
	sphTest.setPosition(cent);

	resultat = camTest.intersection(dir, sphTest);
	if (resultat.size() == 0) cout << "Pas d'intersection";
	else cout << resultat[0] << " - " << resultat[1] << " - " << resultat[2] << endl;
	*/

	/*vector< vector<int> > listeglob;
	for (int i = 0; i < 10; i++){
		vector<int> ssliste;
		for (int y = 0; y < 10; y++){
			 ssliste.push_back(y);
		}
		listeglob.push_back(ssliste);
	}

	cout << listeglob[0][0] << listeglob[1][0] << listeglob[2][0] << listeglob[5][9] << endl;*/
	return 0;
}
