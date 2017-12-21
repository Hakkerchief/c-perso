/*
 * Point.cpp
 *
 *  Created on: Dec 21, 2017
 *      Author: oummar.mayaki
 */

#include "Point.hpp"

Point::Point() {
	// TODO Auto-generated constructor stub

}

Point::Point(float x, float y, float z, std::vector<int> col):couleur(col){

	position[0] = x;
	position[1] = y;
	position[2] = z;
}

Point::Point(std::valarray<float> pos, std::vector<int> col):position(pos), couleur(col){}

Point::Point(std::valarray<float> pos):position(pos){}

Point::~Point() {
	// TODO Auto-generated destructor stub
}

