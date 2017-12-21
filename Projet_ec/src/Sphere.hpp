/*
 * Sphere.hpp
 *
 *  Created on: Nov 29, 2017
 *      Author: omayaki
 */

#ifndef SPHERE_HPP_
#define SPHERE_HPP_

#include "Objet.hpp"
#include <iostream>

class Sphere : public Objet{
	double rayon;

public:
	Sphere();
	Sphere(double ray);
	virtual ~Sphere();

	double getRayon() const {return rayon;}
	void setRayon(double rayon) {this->rayon = rayon;}

	void affiche() const;
	bool contient(std::vector<float> point) const;

};

#endif /* SPHERE_HPP_ */
