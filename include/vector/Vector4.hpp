#ifndef VECTOR4_HPP
#define	VECTOR4_HPP

#include <cmath>

class Vector4 {
public:
	Vector4(const Vector4 & copy);

	//TODO: Vector 3, 4 and N constructors

	Vector4(float x, float y, float z, float w);

	float getX();

	float getY();

	float getZ();

	float getW();

	void setX(float x);

	void setY(float y);

	void setZ(float z);

	void setW(float w);

	void set(float x, float y, float z, float w);

	int getFloorX();

	int getFloorY();

	int getFloorZ();

	int getFloorW();

	Vector4 & pow(float pow);

	Vector4 & ceil();

	Vector4 & floor();

	Vector4 & round();

	Vector4 & abs();

	Vector4 & normalize();

	float dot(Vector4 & vec);

	float dot(float x, float y, float z, float w);

	float length();

	float lengthSquared();

	float distance(Vector4 & vec);

	float distanceSquared(Vector4 & vec);

	float* toArray();

	//Assignment
	Vector4 & operator=(const Vector4 & rhs);

	//Comparision
	bool operator==(const Vector4 & rhs);
	bool operator!=(const Vector4 & rhs);
	bool operator<(Vector4 & rhs);
	bool operator>(Vector4 & rhs);
	bool operator<=(Vector4 & rhs);
	bool operator>=(Vector4 & rhs);

	//Addition
	Vector4 operator+(const Vector4 & rhs);
	Vector4 & operator+=(const Vector4 & rhs);
	Vector4 operator+(const float & rhs);
	Vector4 & operator+=(const float & rhs);

	//Subtraction
	Vector4 operator-(const Vector4 & rhs);
	Vector4 & operator-=(const Vector4 & rhs);
	Vector4 operator-(const float & rhs);
	Vector4 & operator-=(const float & rhs);

	//Multiplication
	Vector4 operator*(const Vector4 & rhs);
	Vector4 & operator*=(const Vector4 & rhs);
	Vector4 operator*(const float & rhs);
	Vector4 & operator*=(const float & rhs);

	//Division
	Vector4 operator/(const Vector4 & rhs);
	Vector4 & operator/=(const Vector4 & rhs);
	Vector4 operator/(const float & rhs);
	Vector4 & operator/=(const float & rhs);

	//Unary operators
	Vector4 & operator!();
private:
	float x_;
	float y_;
	float z_;
	float w_;
};

#endif	/* VECTOR4_HPP */