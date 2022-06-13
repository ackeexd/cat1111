#include <iostream>
using namespace std;

class Cat
{
private:
	string name;
	string color;
	int age;
	double weight;
	bool is_hungry;
	int energy = 100;

public:// прототипы методов
	Cat();
	Cat(string n);
	Cat(string n, string c);
	Cat(string n, string c, int a);
	Cat(string n, string c, int a, double w);
	Cat(string n, string c, int a, double w, bool h);
	Cat(string n, string c, int a, double w, bool h, int e);
    void Play();
	void Sleep();
	void Hunt();
	void Print() const;
	void SetName(string n);
	void SetColor(string c);
	void SetAge(int a);
	void SetWeight(double w);
	void SetHungry(bool h);
	void SetEnergy(int e);
	string GetName() const;
	string GetColor() const;
	int GetAge() const;
	double GetWeight() const;
	bool GetHungry() const;
	int GetEnergy() const;
};