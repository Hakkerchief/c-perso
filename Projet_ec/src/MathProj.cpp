/*
 * MathProj.cpp
 *
 *  Created on: Dec 15, 2017
 *      Author: omayaki
 */

#include "MathProj.hpp"
#include <math.h>

float dist(std::valarray<float> point1, std::valarray<float> point2){
	return sqrt(point1[0]*point2[0] + point1[1]*point2[1] + point1[2]*point2[2]);
}


// On part du principe que le vecteur aura une taille de 3
float normeCarre(std::valarray<float> vecteur){
	return vecteur[0]*vecteur[0] + vecteur[1]*vecteur[1] + vecteur[2]*vecteur[2];
}

// On part du principe que les opérandes auront une taille de 3
float produitScalaire(std::valarray<float> op1, std::valarray<float> op2){
	return op1[0]*op2[0] + op1[1]*op2[1] + op1[2]*op2[2];
}

// On part du principe que les points auront une taille de 3
std::valarray<float> vecteurDirecteur(std::valarray<float> point1, std::valarray<float> point2){
	std::valarray<float> resultat(3);
	for (int i = 0; i < 3; i++){
		resultat[i] = (point2[i] - point1[i]);
	}
	return resultat;
}


