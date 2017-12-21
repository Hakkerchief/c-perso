/*
 * Pixel.hpp
 *
 *  Created on: Dec 15, 2017
 *      Author: omayaki
 */

#ifndef PIXEL_HPP_
#define PIXEL_HPP_

#include <vector>

class Pixel {
	std::vector<int> couleur;
	std::vector<float> position;
public:
	Pixel();
	Pixel(float x, float y, float z);
	virtual ~Pixel();

	std::vector<float> getPosition() const {return position;};
	void setPosition(std::vector<float> pos) {position = pos;};
	std::vector<int> getCouleur() const {return couleur;};
	void setCouleur(std::vector<int> col) {couleur= col;};

};

#endif /* PIXEL_HPP_ */
