/*
 * Ecran.cpp
 *
 *  Created on: Nov 29, 2017
 *      Author: omayaki
 */

#include "Ecran.hpp"
#include "MathProj.hpp"
#include "Point.hpp"

Ecran::Ecran() {
	// TODO Auto-generated constructor stub
}

Ecran::~Ecran() {
	// TODO Auto-generated destructor stub
}

void Ecran::initEcran(){
	float longueur = dist(topLeft, topRight);
	float largeur  = dist(topLeft, bottomLeft);

	std::valarray<float> directionAbscisse = vecteurDirecteur(topLeft, topRight); // TODO definir cette *** de fonction mon gars
	std::valarray<float> directionOrdonnee = vecteurDirecteur(topLeft, topRight);

	std::vector<float> abscisse;
	std::vector<float> ordonnee;

	Point ptActuel(topLeft);

	for(int x = 0; x < resolution[0]; x++){
		std::vector<Pixel> sousListe;
		for(int y = 0; y < resolution[1]; y++){
			//sousListe.push_back()
			// TODO attribuer aux pixels de listePixel leur couleur grace à intersection (qui en ce moment ne donne pas la vouleur mais seulement le point)
		}
	}
}
