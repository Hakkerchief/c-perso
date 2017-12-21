/*
 * Camera.cpp
 *
 *  Created on: Nov 29, 2017
 *      Author: omayaki
 */
#include "Camera.hpp"
#include <math.h>
#include "MathProj.hpp"

Camera::Camera(){
    //ctor
}

Camera::Camera(std::valarray<float> pos):position(pos){
    //ctor
}

Camera::~Camera(){
    //dtor
}

/* La direction ce sera celle du point de la caméra vers le pixel qu'on veut déterminer la couleur */
Point Camera::intersection(std::valarray<float> direction, Sphere sphere){
	Point intersection;

	std::valarray<float> point(3);
	std::valarray<float> centre = sphere.getPosition();
	float a, b, c, delta, t = -1; // elements de l'equation de degre 2

	a = normeCarre(direction);
	b = 2*(produitScalaire(position, direction)  -  produitScalaire(direction, centre));
	c = normeCarre(position) + normeCarre(centre) - 2*produitScalaire(position, centre) - (sphere.getRayon()*sphere.getRayon());
 	delta = b*b - 4*a*c;

 	if(delta >= 0){
		if (delta > 0){
			float t1 = (-b + sqrt(delta))/(2*a);
			float t2 = (-b - sqrt(delta))/(2*a);

			t = std::min(t1, t2);
		}
		else if (delta == 0) t = -b/(2*a);

		point[0] = (position[0] + t*direction[0]);
		point[1] = (position[1] + t*direction[1]);
		point[2] = (position[2] + t*direction[2]);
	 	intersection.setCouleur(sphere.getCouleur());
	 	intersection.setPosition(point);

 	}
	return intersection;
}




