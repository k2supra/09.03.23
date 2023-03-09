
#include "IdProvider.h"

struct Washer
{
private:
	uint64_t id;
	string name;
	string color;
	int limit;
	int power;
	int temp;
	
public:
	void setId(uint64_t id);
	void setName(string name);
	void setColor(string color);
	void setLimit(int limit);
	void setPower(int power);
	void setTemp(int temp);

	uint64_t getId();
	string getName();
	string getColor();
	int getLimit();
	int getPower();
	int getTemp();


	Washer();
	Washer(IdProvider id);
	Washer(IdProvider id, string name, string color);
	Washer(IdProvider id, string name, string color, int limit);
	Washer(IdProvider id, string name, string color, int limit, int power);
	Washer(IdProvider id, string name, string color, int limit, int power, int temp);

	~Washer();
};
