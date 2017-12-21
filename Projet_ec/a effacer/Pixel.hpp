/*
 * Ecran.h
 *
 *  Created on: Nov 29, 2017
 *      Author: omayaki
 */

#ifndef PIXEL_HPP_
#define PIXEL_HPP_

#include <vector>
#include <math.h>
#include <iostream>
#include <string>
#include <fstream>

class Pixel {

	std::vector<int> couleur; // taille 3 rgb


public:
	Pixel(){};
	~Pixel(){};

	std::vector<int> getCouleur(){
		return couleur;
	}
};

#endif /* ECRAN_HPP_ */
