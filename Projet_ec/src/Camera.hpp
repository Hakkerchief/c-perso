/*
 * Camera.hpp
 *
 *  Created on: Nov 29, 2017
 *      Author: omayaki
 */

#ifndef CAMERA_HPP_
#define CAMERA_HPP_

#include <vector>
#include <valarray>
#include "Sphere.hpp"
#include "Point.hpp"

class Camera
{

    std::valarray<float> position; // taille 3

public:
    Camera();
    Camera(std::valarray<float> pos); //yos
    virtual ~Camera();

    std::valarray<float> getPosition() const {return position;};
    void setPosition(std::valarray<float> pos){position = pos;};

    // renvoie un point(x,y,z) = intersection du rayon emmanant de la caméra dans la direction 'direction' avec la sphère
    Point intersection(std::valarray<float> direction, Sphere sphere); //TODO eventuellement changer en valarray le type de retour
};



#endif /* CAMERA_HPP_ */
