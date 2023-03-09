#include "WasherProvider.h"

void WasherProvider::PrintWasher(Washer* washer)
{
	cout << ">-----------------------------------------<" << endl;
	cout << "Id: " << washer->getId() << endl;
	cout << "Name: " << washer->getName() << endl;
	cout << "Color: " << washer->getColor() << endl;
	cout << "Limit: " << washer->getLimit() << endl;
	cout << "Power: " << washer->getPower() << endl;
	cout << "Temperature: " << washer->getTemp() << endl;
	cout << ">-----------------------------------------<" << endl;
	cout << endl;
}

void WasherProvider::CreateWasher(Washer*& washer)
{
	uint64_t id;
	string name;
	string color;
	int limit;
	int power;
	int temp;

	cout << "Enter name: ";
	getline(cin, name);
	cout << "Enter color: ";
	getline(cin, color);
	cout << "Enter limit: ";
	cin >> limit;
	cout << "Enter power: ";
	cin >> power;
	cout << "Enter temperature: ";
	cin >> temp;
	cin.ignore();
	cout << ">----------------------------<" << endl;
	washer->setName(name);
	washer->setColor(color);
	washer->setLimit(limit);
	washer->setPower(power);
	washer->setTemp(temp);
}