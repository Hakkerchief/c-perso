/*
 * Sphere.cpp
 *
 *  Created on: Nov 29, 2017
 *      Author: omayaki
 */

#include "Sphere.hpp"
#include "MathProj.hpp"

Sphere::Sphere() {
	// TODO Auto-generated constructor stub
}

Sphere::Sphere(double ray):rayon(ray){

}

Sphere::~Sphere() {
	// TODO Auto-generated destructor stub
}


void Sphere::affiche() const {
	std::cout << "[Sphere : couleur = (" << couleur[0] << "," << couleur[1] << "," << couleur[2] << ");"
			<< " position = (" << position[0] << "," << position[1] << "," << position[2] << ");"
			<< " reflexion = " << reflexion << ";"
			<< " rayon = " << rayon << "]"
			<< std::endl;
}

/*On suppose le vector 'point' de taille 3 */
bool Sphere::contient(std::vector<float> point) const{
	return (pow(point[0] - position[0], 2) + pow(point[1] - position[1], 2) + pow(point[2] - position[2], 2) <= pow(rayon, 2));
}
