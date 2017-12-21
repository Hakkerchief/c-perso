/*
 * Ecran.h
 *
 *  Created on: Nov 29, 2017
 *      Author: omayaki
 */

#ifndef ECRAN_HPP_
#define ECRAN_HPP_

#include <vector>
#include <valarray>
#include "Pixel.hpp"

class Ecran {

	std::valarray<float> resolution, // taille 2 -> res horizontale et verticale
					 topLeft, // taille 3
					 topRight,
					 bottomRight,
					 bottomLeft;

	std::vector< std::vector<Pixel> > listePixels;

public:
	Ecran();
	virtual ~Ecran();

	std::valarray<float> getResolution() const {return Ecran::resolution;};
	std::valarray<float> getTopLeft() const {return Ecran::topLeft;};
	std::valarray<float> getTopRight() const {return Ecran::topRight;};
	std::valarray<float> getBottomRight() const {return Ecran::bottomRight;} ;
	std::valarray<float> getBottomLeft() const {return Ecran::bottomLeft;} ;
	void setResolution(std::valarray<float> res) {Ecran::resolution = res;};
	void setTopLeft(std::valarray<float> tl) {Ecran::resolution = tl;};
	void setTopRight(std::valarray<float> tr) {Ecran::resolution = tr;};
	void setBottomRight(std::valarray<float> br) {Ecran::resolution = br;};
	void setBottomLeft(std::valarray<float> bl) {Ecran::resolution = bl;};

	void initEcran();
};

#endif /* ECRAN_HPP_ */
