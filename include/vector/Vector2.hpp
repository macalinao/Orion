#ifndef VECTOR2_HPP
#define	VECTOR2_HPP

#include <cmath>

class Vector2 {
public:
	Vector2(const Vector2 & copy);

	Vector2(float x, float y);

	float getX();

	float getY();

	void setX(float x);

	void setY(float y);

	void set(float x, float y);

	int getFloorX();

	int getFloorY();

	Vector2 & pow(float pow);

	Vector2 & ceil();

	Vector2 & floor();

	Vector2 & round();

	Vector2 & abs();
	
	Vector2 & normalize();

	float dot(Vector2 & vec);

	float dot(float x, float y);

	float length();

	float lengthSquared();

	float distance(Vector2 & vec);

	float distanceSquared(Vector2 & vec);

	float* toArray();

	//Assignment
	Vector2 & operator=(const Vector2 & rhs);

	//Comparision
	bool operator==(const Vector2 & rhs);
	bool operator!=(const Vector2 & rhs);
	bool operator<(Vector2 & rhs);
	bool operator>(Vector2 & rhs);
	bool operator<=(Vector2 & rhs);
	bool operator>=(Vector2 & rhs);

	//Addition
	Vector2 operator+(const Vector2 & rhs);
	Vector2 & operator+=(const Vector2 & rhs);
	Vector2 operator+(const float & rhs);
	Vector2 & operator+=(const float & rhs);

	//Subtraction
	Vector2 operator-(const Vector2 & rhs);
	Vector2 & operator-=(const Vector2 & rhs);
	Vector2 operator-(const float & rhs);
	Vector2 & operator-=(const float & rhs);

	//Multiplication
	Vector2 operator*(const Vector2 & rhs);
	Vector2 & operator*=(const Vector2 & rhs);
	Vector2 operator*(const float & rhs);
	Vector2 & operator*=(const float & rhs);

	//Division
	Vector2 operator/(const Vector2 & rhs);
	Vector2 & operator/=(const Vector2 & rhs);
	Vector2 operator/(const float & rhs);
	Vector2 & operator/=(const float & rhs);

	//Unary operators
	Vector2 & operator!();
private:
	float x;
	float y;
};

#endif	/* VECTOR2_HPP */