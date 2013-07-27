#include <vector/Vector4.hpp>

Vector4::Vector4(const Vector4& copy) : x_(copy.x_), y_(copy.y_), z_(copy.z_), w_(copy.w_)
{
}

Vector4::Vector4(float x, float y, float z, float w) : x_(x), y_(y), z_(z), w_(w)
{
}

float Vector4::getX()
{
	return x_;
}

float Vector4::getY()
{
	return y_;
}

float Vector4::getZ()
{
	return z_;
}

float Vector4::getW()
{
	return w_;
}

void Vector4::setX(float x)
{
	this->x_ = x;
}

void Vector4::setY(float y)
{
	this->y_ = y;
}

void Vector4::setZ(float z)
{
	this->z_ = z;
}

void Vector4::setW(float w)
{
	this->w_ = w;
}

void Vector4::set(float x, float y, float z, float w)
{
	setX(x);
	setY(y);
	setZ(z);
	setW(w);
}

int Vector4::getFloorX()
{
	return static_cast<int>(x_);
}

int Vector4::getFloorY()
{
	return static_cast<int>(y_);
}

int Vector4::getFloorZ()
{
	return static_cast<int>(z_);
}

int Vector4::getFloorW()
{
	return static_cast<int>(w_);
}

Vector4 & Vector4::pow(float pow)
{
	setX(std::pow(x_, pow));
	setY(std::pow(y_, pow));
	setZ(std::pow(z_, pow));
	setW(std::pow(w_, pow));
	return *this;
}

Vector4 & Vector4::ceil()
{
	setX(std::ceil(x_));
	setY(std::ceil(y_));
	setZ(std::ceil(z_));
	setW(std::ceil(w_));
	return *this;
}

Vector4 & Vector4::floor()
{
	setX(std::floor(x_));
	setY(std::floor(y_));
	setZ(std::floor(z_));
	setW(std::floor(w_));
	return *this;
}

Vector4 & Vector4::round()
{
	setX(roundf(x_));
	setY(roundf(y_));
	setZ(roundf(z_));
	setW(roundf(w_));
	return *this;
}

Vector4 & Vector4::abs()
{
	setX(std::abs(x_));
	setY(std::abs(y_));
	setZ(std::abs(z_));
	setW(std::abs(w_));
	return *this;
}

Vector4 & Vector4::normalize()
{
	float len = length();
	setX(x_ / len);
	setY(y_ / len);
	setZ(z_ / len);
	setW(w_ / len);
	return *this;
}

float Vector4::dot(Vector4 & vec)
{
	return dot(vec.x_, vec.y_, vec.z_, vec.w_);
}

float Vector4::dot(float x, float y, float z, float w)
{
	return x_ * x + y_ * y + z_ * z + w_ * w;
}

float Vector4::length()
{
	return std::sqrt(lengthSquared());
}

float Vector4::lengthSquared()
{
	return this->dot(*this);
}

float Vector4::distance(Vector4 & vec)
{
	return std::sqrt(distanceSquared(vec));
}

float Vector4::distanceSquared(Vector4 & vec)
{
	return ((x_ - vec.x_) * (x_ - vec.x_)) + ((y_ - vec.y_) * (y_ - vec.y_)) + ((z_ - vec.z_) * (z_ - vec.z_)) + ((w_ - vec.w_) * (w_ - vec.w_));
}

float* Vector4::toArray()
{
	float* p_array;
	float array[4] = {x_, y_, z_, w_};
	p_array = array;
	return p_array;
}

Vector4 & Vector4::operator=(const Vector4 & rhs)
{
	setX(rhs.x_);
	setY(rhs.y_);
	setZ(rhs.z_);
	setW(rhs.w_);
	return *this;
}

bool Vector4::operator==(const Vector4& rhs)
{
	return x_ == rhs.x_ && y_ == rhs.y_ && z_ == rhs.z_;
}

bool Vector4::operator !=(const Vector4& rhs)
{
	return !(*this == rhs);
}

bool Vector4::operator<(Vector4& rhs)
{
	return this->lengthSquared() < rhs.lengthSquared();
}

bool Vector4::operator>(Vector4& rhs)
{
	return this->lengthSquared() > rhs.lengthSquared();
}

bool Vector4::operator<=(Vector4& rhs)
{
	return this->lengthSquared() <= rhs.lengthSquared();
}

bool Vector4::operator>=(Vector4& rhs)
{
	return this->lengthSquared() >= rhs.lengthSquared();
}

Vector4 Vector4::operator+(const Vector4 & rhs)
{
	return Vector4(x_ + rhs.x_, y_ + rhs.y_, z_ + rhs.z_, w_ + rhs.w_);
}

Vector4 & Vector4::operator+=(const Vector4 & rhs)
{
	setX(x_ + rhs.x_);
	setY(y_ + rhs.y_);
	setZ(z_ + rhs.z_);
	setW(w_ + rhs.w_);
	return *this;
}

Vector4 Vector4::operator+(const float & rhs)
{
	return Vector4(x_ + rhs, y_ + rhs, z_ + rhs, w_ + rhs);
}

Vector4 & Vector4::operator+=(const float & rhs)
{
	setX(x_ + rhs);
	setY(y_ + rhs);
	setZ(z_ + rhs);
	setW(w_ + rhs);
	return *this;
}

Vector4 Vector4::operator-(const Vector4 & rhs)
{
	return Vector4(x_ - rhs.x_, y_ - rhs.y_, z_ - rhs.z_, w_ - rhs.w_);
}

Vector4 & Vector4::operator-=(const Vector4 & rhs)
{
	setX(x_ - rhs.x_);
	setY(y_ - rhs.y_);
	setZ(z_ - rhs.z_);
	setW(w_ - rhs.w_);
	return *this;
}

Vector4 Vector4::operator-(const float & rhs)
{
	return Vector4(x_ - rhs, y_ - rhs, z_ - rhs, w_ - rhs);
}

Vector4 & Vector4::operator-=(const float & rhs)
{
	setX(x_ - rhs);
	setY(y_ - rhs);
	setZ(z_ - rhs);
	setW(w_ - rhs);
	return *this;
}

Vector4 Vector4::operator*(const Vector4 & rhs)
{
	return Vector4(x_ * rhs.x_, y_ * rhs.y_, z_ * rhs.z_, w_ * rhs.w_);
}

Vector4 & Vector4::operator*=(const Vector4 & rhs)
{
	setX(x_ * rhs.x_);
	setY(y_ * rhs.y_);
	setZ(z_ * rhs.z_);
	setW(w_ * rhs.w_);
	return *this;
}

Vector4 Vector4::operator*(const float & rhs)
{
	return Vector4(x_ * rhs, y_ * rhs, z_ * rhs, w_ * rhs);
}

Vector4 & Vector4::operator*=(const float & rhs)
{
	setX(x_ * rhs);
	setY(y_ * rhs);
	setZ(z_ * rhs);
	setW(w_ * rhs);
	return *this;
}

Vector4 Vector4::operator/(const Vector4 & rhs)
{
	return Vector4(x_ / rhs.x_, y_ / rhs.y_, z_ / rhs.z_, w_ / rhs.w_);
}

Vector4 & Vector4::operator/=(const Vector4 & rhs)
{
	setX(x_ / rhs.x_);
	setY(y_ / rhs.y_);
	setZ(z_ / rhs.z_);
	setW(w_ / rhs.w_);
	return *this;
}

Vector4 Vector4::operator/(const float & rhs)
{
	return Vector4(x_ / rhs, y_ / rhs, z_ / rhs, w_ / rhs);
}

Vector4 & Vector4::operator/=(const float & rhs)
{
	setX(x_ / rhs);
	setY(y_ / rhs);
	setZ(z_ / rhs);
	setW(w_ / rhs);
	return *this;
}

Vector4 & Vector4::operator!()
{
	setX(-x_);
	setY(-y_);
	setZ(-z_);
	setW(-w_);
	return *this;
}
