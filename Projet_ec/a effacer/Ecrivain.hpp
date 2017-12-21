/*
 * Ecran.h
 *
 *  Created on: Nov 29, 2017
 *      Author: omayaki
 */

#ifndef ECRIVAIN_HPP_
#define ECRIVAIN_HPP_

#include <vector>
#include <math.h>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include "Pixel.hpp"

class Ecrivain {

	std::vector<int> informations; // Ordre : largeur hauteur 255

public:
	Ecrivain(int larg, int haut);
	~Ecrivain();

	void Ecriture(std::vector< std::vector<Pixel> > ListePixels);
	std::string Convertisseur(int nbre);
};

#endif /* ECRAN_HPP_ */
