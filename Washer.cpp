#include "Washer.h"

void Washer::setId(uint64_t id)
{
	this->id = id;
}
void Washer::setName(string name)
{
	(name.empty()) ? this->name = "NULL" : this->name = name;
}
void Washer::setColor(string color)
{
	(color.empty()) ? this->color = "NULL" : this->color = color;
}
void Washer::setLimit(int limit)
{
	this->limit = limit;
}
void Washer::setPower(int power)
{
	this->power = power;
}
void Washer::setTemp(int temp)
{
	this->temp = temp;
}

//getters
uint64_t Washer::getId()
{
	return id;
}
string Washer::getName()
{
	return name;
}
string Washer::getColor()
{
	return color;
}      
int Washer::getLimit()
{
	return limit;
}
int Washer::getPower()
{
	return power;
}
int Washer::getTemp()
{
	return temp;
}

//constructors
Washer::Washer()
{
	setId(0);
	setName("");
	setColor("");
	setLimit(0);
	setPower(0);
	setTemp(0);
}
Washer::Washer(IdProvider id) : Washer()
{
	setId(id.setIdFromGlobal());
}
Washer::Washer(IdProvider id, string name, string color) : Washer(id)
{
	setName(name);
	setColor(color);
}
Washer::Washer(IdProvider id, string name, string color, int limit) : Washer(id, name, color)
{
	setLimit(limit);
}
Washer::Washer(IdProvider id, string name, string color, int limit, int power) : Washer(id, name, color, limit)
{
	setPower(power);
}
Washer::Washer(IdProvider id, string name, string color, int limit, int power, int temp) : Washer(id, name, color, limit, power)
{
	setTemp(temp);
}

//destructor
Washer::~Washer()
{
	cout << "Deleted." << endl;
	this->limit = 0;
	this->name.clear();
	this->color.clear();
	this->power = 0;
	this->temp = 0;
}