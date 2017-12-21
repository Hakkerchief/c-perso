/*
 * Point.hpp
 *
 *  Created on: Dec 21, 2017
 *      Author: oummar.mayaki
 */

#ifndef POINT_HPP_
#define POINT_HPP_

#include <vector>
#include <valarray>

class Point {

	std::valarray<float> position;
	std::vector<int> couleur;

public:
	Point();
	Point(float x, float y, float z, std::vector<int> col);
	Point(std::valarray<float> pos, std::vector<int> col);
	Point(std::valarray<float> pos);
	virtual ~Point();

	std::valarray<float> getPosition() const {return position;};
	std::vector<int> getCouleur() const {return couleur;};
	void setPosition(std::valarray<float> pos) {position = pos;};
	void setCouleur(std::vector<int> col) {couleur= col;};
};

#endif /* POINT_HPP_ */
