/*
 * Pixel.cpp
 *
 *  Created on: Dec 15, 2017
 *      Author: omayaki
 */

#include "Pixel.hpp"

Pixel::Pixel() {
	// TODO Auto-generated constructor stub

}

Pixel::Pixel(float x, float y, float z){
	position.push_back(x);
	position.push_back(y);
	position.push_back(z);
}

Pixel::~Pixel() {
	// TODO Auto-generated destructor stub
}

