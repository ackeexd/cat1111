#include "Cat.h"

int main()
{
	Cat* c = new Cat; // �������� ������ ������� ������ � ���� (������� ����������� ������ ����������� ������� - ����� 2 ��)
	cout << c->GetName() << "\n";
	cout << c->GetColor() << "\n";
	cout << c->GetAge() << "\n";
	cout << c->GetWeight() << "\n";
	cout << c->GetHungry() << "\n";
	cout << c->GetEnergy() << "\n";


	//Cat cats[100]; // ����������� ������ ���� Cat �� 100 ���������
	//for (int i = 0; i < 100; i++)
	//{
	//	
	//	cats[i].Play();
	//}

	//int x = 1234;
	//Cat* ar = new Cat[x]; // �������� ���������� ������������ ������ �������� ���� Cat 
	//
	//for (int i = 0; i < 1234; i++)
	//{
	//	
	//	ar[i].Play();
	//}
}	//