#include "Cat.h"

int main()
{
	Cat* c = new Cat; // создание одного объекта класса в хипе (область оперативной памяти значительно крупнее - около 2 ГБ)
	cout << c->GetName() << "\n";
	cout << c->GetColor() << "\n";
	cout << c->GetAge() << "\n";
	cout << c->GetWeight() << "\n";
	cout << c->GetHungry() << "\n";
	cout << c->GetEnergy() << "\n";


	//Cat cats[100]; // статический массив типа Cat на 100 элементов
	//for (int i = 0; i < 100; i++)
	//{
	//	
	//	cats[i].Play();
	//}

	//int x = 1234;
	//Cat* ar = new Cat[x]; // создаётся одномерный динамический массив объектов типа Cat 
	//
	//for (int i = 0; i < 1234; i++)
	//{
	//	
	//	ar[i].Play();
	//}
}	//