#ifndef VECTOR3_HPP
#define	VECTOR3_HPP

#include <cmath>

class Vector3 {
public:
	Vector3(const Vector3 & copy);

	//TODO: Vector 3, 4 and N constructors

	Vector3(float x, float y, float z);

	float getX();

	float getY();

	float getZ();

	void setX(float x);

	void setY(float y);

	void setZ(float z);

	void set(float x, float y, float z);

	int getFloorX();

	int getFloorY();

	int getFloorZ();

	Vector3 & pow(float pow);

	Vector3 & ceil();

	Vector3 & floor();

	Vector3 & round();

	Vector3 & abs();

	Vector3 & normalize();

	Vector3 & cross(Vector3 & vec);

	Vector3 & cross(float x, float y, float z);

	float dot(Vector3 & vec);

	float dot(float x, float y, float z);

	float length();

	float lengthSquared();

	float distance(Vector3 & vec);

	float distanceSquared(Vector3 & vec);

	float* toArray();

	//Assignment
	Vector3 & operator=(const Vector3 & rhs);

	//Comparision
	bool operator==(const Vector3 & rhs);
	bool operator!=(const Vector3 & rhs);
	bool operator<(Vector3 & rhs);
	bool operator>(Vector3 & rhs);
	bool operator<=(Vector3 & rhs);
	bool operator>=(Vector3 & rhs);

	//Addition
	Vector3 operator+(const Vector3 & rhs);
	Vector3 & operator+=(const Vector3 & rhs);
	Vector3 operator+(const float & rhs);
	Vector3 & operator+=(const float & rhs);

	//Subtraction
	Vector3 operator-(const Vector3 & rhs);
	Vector3 & operator-=(const Vector3 & rhs);
	Vector3 operator-(const float & rhs);
	Vector3 & operator-=(const float & rhs);

	//Multiplication
	Vector3 operator*(const Vector3 & rhs);
	Vector3 & operator*=(const Vector3 & rhs);
	Vector3 operator*(const float & rhs);
	Vector3 & operator*=(const float & rhs);

	//Division
	Vector3 operator/(const Vector3 & rhs);
	Vector3 & operator/=(const Vector3 & rhs);
	Vector3 operator/(const float & rhs);
	Vector3 & operator/=(const float & rhs);

	//Unary operators
	Vector3 & operator!();
private:
	float x_;
	float y_;
	float z_;
};

#endif	/* VECTOR3_HPP */