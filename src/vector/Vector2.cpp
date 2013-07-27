#include <vector/Vector2.hpp>

Vector2::Vector2(const Vector2& copy) : x(copy.x), y(copy.y)
{
}

Vector2::Vector2(float x, float y) : x(x), y(y)
{
}

float Vector2::getX()
{
	return x;
}

float Vector2::getY()
{
	return y;
}

void Vector2::setX(float x)
{
	this->x = x;
}

void Vector2::setY(float y)
{
	this->y = y;
}

void Vector2::set(float x, float y)
{
	setX(x);
	setY(y);
}

int Vector2::getFloorX()
{
	return static_cast<int>(x);
}

int Vector2::getFloorY()
{
	return static_cast<int>(y);
}

Vector2 & Vector2::pow(float pow)
{
	setX(std::pow(x, pow));
	setY(std::pow(y, pow));
	return *this;
}

Vector2 & Vector2::ceil()
{
	setX(std::ceil(x));
	setY(std::ceil(y));
	return *this;
}

Vector2 & Vector2::floor()
{
	setX(std::floor(x));
	setY(std::floor(y));
	return *this;
}

Vector2 & Vector2::round()
{
	setX(roundf(x));
	setY(roundf(y));
	return *this;
}

Vector2 & Vector2::abs()
{
	setX(std::abs(x));
	setY(std::abs(y));
	return *this;
}

Vector2 & Vector2::normalize()
{
	float len = length();
	setX(x / len);
	setY(y / len);
	return *this;
}

float Vector2::dot(Vector2 & vec)
{
	return dot(vec.x, vec.y);
}

float Vector2::dot(float x, float y)
{
	return this->x * x + this->y * y;
}

float Vector2::length()
{
	return std::sqrt(lengthSquared());
}

float Vector2::lengthSquared()
{
	return this->dot(*this);
}

float Vector2::distance(Vector2 & vec)
{
	return std::sqrt(distanceSquared(vec));
}

float Vector2::distanceSquared(Vector2 & vec)
{
	return ((x - vec.x) * (x - vec.x)) + ((y - vec.y) * (y - vec.y));
}

float* Vector2::toArray()
{
	float* p_array;
	float array[2] = {x, y};
	p_array = array;
	return p_array;
}

Vector2 & Vector2::operator=(const Vector2 & rhs)
{
	setX(rhs.x);
	setY(rhs.y);
	return *this;
}

bool Vector2::operator==(const Vector2& rhs)
{
	return x == rhs.x && y == rhs.y;
}

bool Vector2::operator !=(const Vector2& rhs)
{
	return !(*this == rhs);
}

bool Vector2::operator<(Vector2& rhs)
{
	return this->lengthSquared() < rhs.lengthSquared();
}

bool Vector2::operator>(Vector2& rhs)
{
	return this->lengthSquared() > rhs.lengthSquared();
}

bool Vector2::operator<=(Vector2& rhs)
{
	return this->lengthSquared() <= rhs.lengthSquared();
}

bool Vector2::operator>=(Vector2& rhs)
{
	return this->lengthSquared() >= rhs.lengthSquared();
}

Vector2 Vector2::operator+(const Vector2 & rhs)
{
	return Vector2(x + rhs.x, y + rhs.y);
}

Vector2 & Vector2::operator+=(const Vector2 & rhs)
{
	setX(x + rhs.x);
	setY(y + rhs.y);
	return *this;
}

Vector2 Vector2::operator+(const float & rhs)
{
	return Vector2(x + rhs, y + rhs);
}

Vector2 & Vector2::operator+=(const float & rhs)
{
	setX(x + rhs);
	setY(y + rhs);
	return *this;
}

Vector2 Vector2::operator-(const Vector2 & rhs)
{
	return Vector2(x - rhs.x, y - rhs.y);
}

Vector2 & Vector2::operator-=(const Vector2 & rhs)
{
	setX(x - rhs.x);
	setY(y - rhs.y);
	return *this;
}

Vector2 Vector2::operator-(const float & rhs)
{
	return Vector2(x - rhs, y - rhs);
}

Vector2 & Vector2::operator-=(const float & rhs)
{
	setX(x - rhs);
	setY(y - rhs);
	return *this;
}

Vector2 Vector2::operator*(const Vector2 & rhs)
{
	return Vector2(x * rhs.x, y * rhs.y);
}

Vector2 & Vector2::operator*=(const Vector2 & rhs)
{
	setX(x * rhs.x);
	setY(y * rhs.y);
	return *this;
}

Vector2 Vector2::operator*(const float & rhs)
{
	return Vector2(x * rhs, y * rhs);
}

Vector2 & Vector2::operator*=(const float & rhs)
{
	setX(x * rhs);
	setY(y * rhs);
	return *this;
}

Vector2 Vector2::operator/(const Vector2 & rhs)
{
	return Vector2(x / rhs.x, y / rhs.y);
}

Vector2 & Vector2::operator/=(const Vector2 & rhs)
{
	setX(x / rhs.x);
	setY(y / rhs.y);
	return *this;
}

Vector2 Vector2::operator/(const float & rhs)
{
	return Vector2(x / rhs, y / rhs);
}

Vector2 & Vector2::operator/=(const float & rhs)
{
	setX(x / rhs);
	setY(y / rhs);
	return *this;
}

Vector2 & Vector2::operator!()
{
	setX(-x);
	setY(-y);
	return *this;
}
