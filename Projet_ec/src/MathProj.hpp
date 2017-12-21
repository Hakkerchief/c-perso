/*
 * MathProj.hpp
 *
 *  Created on: Dec 15, 2017
 *      Author: omayaki
 */

#ifndef MATHPROJ_HPP_
#define MATHPROJ_HPP_

#include <vector>
#include <valarray>

float dist(std::valarray<float> point1, std::valarray<float> point2);
float normeCarre(std::valarray<float> vecteur);
float produitScalaire(std::valarray<float> op1, std::valarray<float> op2);
std::valarray<float> vecteurDirecteur(std::valarray<float> point1, std::valarray<float> point2);

#endif /* MATHPROJ_HPP_ */
