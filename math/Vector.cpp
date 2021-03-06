#include "Common.h"
#include "Vector.h"

#include <iostream>

using namespace Math;

Vector::Vector(float x_, float y_) : x(x_), y(y_), z(0)
{
}

Vector::Vector(float x_, float y_, float z_) : x(x_), y(y_), z(z_)
{
}

float &Vector::operator[](int index)
{
  return *(&this->x + index);
}

bool Vector::operator==(const Vector &b) const
{
  return this->x == b.x &&
         this->y == b.y &&
         this->z == b.z;
}

float Vector::operator*(const Vector& b) const
{
  return this->x * b.x + this->y * b.y + this->z * b.z;
}

Vector Vector::operator*(const float factor) const
{
  return Vector(this->x * factor, this->y * factor, this->z * factor);
}

void Vector::operator*=(const float factor)
{
  this->x *= factor;
  this->y *= factor;
  this->z *= factor;
}

Vector Vector::cross(const Vector &b) const
{
  return Vector(this->y * b.z - this->z * b.y,
                this->z * b.x - this->x * b.z,
                this->x * b.y - this->y * b.x);
}

float Vector::length() const
{
  return static_cast<float>(std::sqrt(std::pow(this->x, 2) +
                                         std::pow(this->y, 2) +
                                         std::pow(this->z, 2)));
}

void Vector::print() const
{
  std::cout << "Vector:" << " x: " << x << " y: " << y << " z: " << z << std::endl;
}



