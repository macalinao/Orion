#include <vector/Vector3.hpp>

Vector3::Vector3(const Vector3& copy) : x_(copy.x_), y_(copy.y_), z_(copy.z_)
{
}

Vector3::Vector3(float x, float y, float z) : x_(x), y_(y), z_(z)
{
}

float Vector3::getX()
{
	return x_;
}

float Vector3::getY()
{
	return y_;
}

float Vector3::getZ()
{
	return z_;
}

void Vector3::setX(float x)
{
	this->x_ = x;
}

void Vector3::setY(float y)
{
	this->y_ = y;
}

void Vector3::setZ(float z)
{
	this->z_ = z;
}

void Vector3::set(float x, float y, float z)
{
	setX(x);
	setY(y);
	setZ(z);
}

int Vector3::getFloorX()
{
	return static_cast<int>(x_);
}

int Vector3::getFloorY()
{
	return static_cast<int>(y_);
}

int Vector3::getFloorZ()
{
	return static_cast<int>(z_);
}

Vector3 & Vector3::pow(float pow)
{
	setX(std::pow(x_, pow));
	setY(std::pow(y_, pow));
	setZ(std::pow(z_, pow));
	return *this;
}

Vector3 & Vector3::ceil()
{
	setX(std::ceil(x_));
	setY(std::ceil(y_));
	setZ(std::ceil(z_));
	return *this;
}

Vector3 & Vector3::floor()
{
	setX(std::floor(x_));
	setY(std::floor(y_));
	setZ(std::floor(z_));
	return *this;
}

Vector3 & Vector3::round()
{
	setX(roundf(x_));
	setY(roundf(y_));
	setZ(roundf(z_));
	return *this;
}

Vector3 & Vector3::abs()
{
	setX(std::abs(x_));
	setY(std::abs(y_));
	setZ(std::abs(z_));
	return *this;
}

Vector3 & Vector3::normalize()
{
	float len = length();
	setX(x_ / len);
	setY(y_ / len);
	setZ(z_ / len);
	return *this;
}

Vector3 & Vector3::cross(Vector3& vec)
{
	return cross(vec.x_, vec.y_, vec.z_);
}

Vector3 & Vector3::cross(float x, float y, float z)
{
	setX(y_ * z - z_ * y);
	setY(z_ * x - x_ * z);
	setZ(x_ * y - y_ * x);
	return *this;
}

float Vector3::dot(Vector3 & vec)
{
	return dot(vec.x_, vec.y_, vec.z_);
}

float Vector3::dot(float x, float y, float z)
{
	return x_ * x + y_ * y + z_ * z;
}

float Vector3::length()
{
	return std::sqrt(lengthSquared());
}

float Vector3::lengthSquared()
{
	return this->dot(*this);
}

float Vector3::distance(Vector3 & vec)
{
	return std::sqrt(distanceSquared(vec));
}

float Vector3::distanceSquared(Vector3 & vec)
{
	return ((x_ - vec.x_) * (x_ - vec.x_)) + ((y_ - vec.y_) * (y_ - vec.y_)) + ((z_ - vec.z_) * (z_ - vec.z_));
}

float* Vector3::toArray()
{
	float* p_array;
	float array[3] = {x_, y_, z_};
	p_array = array;
	return p_array;
}

Vector3 & Vector3::operator=(const Vector3 & rhs)
{
	setX(rhs.x_);
	setY(rhs.y_);
	setZ(rhs.z_);
	return *this;
}

bool Vector3::operator==(const Vector3& rhs)
{
	return x_ == rhs.x_ && y_ == rhs.y_ && z_ == rhs.z_;
}

bool Vector3::operator !=(const Vector3& rhs)
{
	return !(*this == rhs);
}

bool Vector3::operator<(Vector3& rhs)
{
	return this->lengthSquared() < rhs.lengthSquared();
}

bool Vector3::operator>(Vector3& rhs)
{
	return this->lengthSquared() > rhs.lengthSquared();
}

bool Vector3::operator<=(Vector3& rhs)
{
	return this->lengthSquared() <= rhs.lengthSquared();
}

bool Vector3::operator>=(Vector3& rhs)
{
	return this->lengthSquared() >= rhs.lengthSquared();
}

Vector3 Vector3::operator+(const Vector3 & rhs)
{
	return Vector3(x_ + rhs.x_, y_ + rhs.y_, z_ + rhs.z_);
}

Vector3 & Vector3::operator+=(const Vector3 & rhs)
{
	setX(x_ + rhs.x_);
	setY(y_ + rhs.y_);
	setZ(z_ + rhs.z_);
	return *this;
}

Vector3 Vector3::operator+(const float & rhs)
{
	return Vector3(x_ + rhs, y_ + rhs, z_ + rhs);
}

Vector3 & Vector3::operator+=(const float & rhs)
{
	setX(x_ + rhs);
	setY(y_ + rhs);
	setZ(z_ + rhs);
	return *this;
}

Vector3 Vector3::operator-(const Vector3 & rhs)
{
	return Vector3(x_ - rhs.x_, y_ - rhs.y_, z_ - rhs.z_);
}

Vector3 & Vector3::operator-=(const Vector3 & rhs)
{
	setX(x_ - rhs.x_);
	setY(y_ - rhs.y_);
	setZ(z_ - rhs.z_);
	return *this;
}

Vector3 Vector3::operator-(const float & rhs)
{
	return Vector3(x_ - rhs, y_ - rhs, z_ - rhs);
}

Vector3 & Vector3::operator-=(const float & rhs)
{
	setX(x_ - rhs);
	setY(y_ - rhs);
	setZ(z_ - rhs);
	return *this;
}

Vector3 Vector3::operator*(const Vector3 & rhs)
{
	return Vector3(x_ * rhs.x_, y_ * rhs.y_, z_ * rhs.z_);
}

Vector3 & Vector3::operator*=(const Vector3 & rhs)
{
	setX(x_ * rhs.x_);
	setY(y_ * rhs.y_);
	setZ(z_ * rhs.z_);
	return *this;
}

Vector3 Vector3::operator*(const float & rhs)
{
	return Vector3(x_ * rhs, y_ * rhs, z_ * rhs);
}

Vector3 & Vector3::operator*=(const float & rhs)
{
	setX(x_ * rhs);
	setY(y_ * rhs);
	setZ(z_ * rhs);
	return *this;
}

Vector3 Vector3::operator/(const Vector3 & rhs)
{
	return Vector3(x_ / rhs.x_, y_ / rhs.y_, z_ / rhs.z_);
}

Vector3 & Vector3::operator/=(const Vector3 & rhs)
{
	setX(x_ / rhs.x_);
	setY(y_ / rhs.y_);
	setZ(z_ / rhs.z_);
	return *this;
}

Vector3 Vector3::operator/(const float & rhs)
{
	return Vector3(x_ / rhs, y_ / rhs, z_ / rhs);
}

Vector3 & Vector3::operator/=(const float & rhs)
{
	setX(x_ / rhs);
	setY(y_ / rhs);
	setZ(z_ / rhs);
	return *this;
}

Vector3 & Vector3::operator!()
{
	setX(-x_);
	setY(-y_);
	setZ(-z_);
	return *this;
}
