#include "Cat.h"

void Cat::Play()
{
	cout << name << " is playing\n";
	energy--;
}

void Cat::Sleep()
{
	cout << name << " is sleeping\n";
	energy++;
}

void Cat::Hunt()
{
	cout << name << " is hunting\n";
	energy--;
}

void Cat::Print() const
{
	cout << energy << "\n";
}

void Cat::SetName(string n)
{
	name = n;
}
void Cat::SetColor(string c)
{
	color = c;
}
void Cat::SetAge(int a)
{
	if (a >= 0 && a <= 29) age = a;
	else cout << "invalid value of age\n";
}
void Cat::SetWeight(double w)
{
	if (w >= 1 && w <= 50) weight = w;
	else cout << "invalid value of weight\n";
}
void Cat::SetHungry(bool h)
{
	if (h == 1 || h == 0) is_hungry = h;
	else cout << "invalid value of hungry\n";
}
void Cat::SetEnergy(int e)
{
	if (e >= 0 && e <= 100) energy = e;
	else cout << "invalid value of energy\n";
}
string Cat::GetName() const
{
	return name;
}
string Cat::GetColor() const
{
	return color;
}
int Cat::GetAge() const
{
	return age;
}
double Cat::GetWeight() const
{
	return weight;
}
bool Cat::GetHungry() const
{
	return is_hungry;
}
int Cat::GetEnergy() const
{
	return energy;
}
Cat::Cat():Cat("ackee") {} // pobochniy konstruct
Cat::Cat(string n):Cat(n, "black&white"){} // pobochniy konstruct
Cat::Cat(string n, string c):Cat(n, c, 7){} // pobochniy konstruct
Cat::Cat(string n, string c, int a):Cat(n, c, a, 2){} // pobochniy konstruct
Cat::Cat(string n, string c, int a, double w):Cat(n, c, a, w, false) {} // pobochniy konstruct
Cat::Cat(string n, string c, int a, double w, bool h):Cat(n, c, a, w, h, 50) {} // pobochniy konstruct
Cat::Cat(string n, string c, int a, double w, bool h, int e) // glavniy konstruct
{
	SetName(n);
	SetColor(c);
	SetAge(a);
	SetWeight(w);
	SetHungry(h);
	SetEnergy(e);
}




