#include <iostream>

#include "Vehicle.h"

using namespace std;

// Constructor ����
Vehicle::Vehicle(int _Year, int _Price)
{
	Year = _Year;
	Price = _Price;

	cout << "��� �ڵ��� ���� : ";
	PrintYear();
}

// Destructor ����
Vehicle::~Vehicle()
{
	cout << "�ڵ��� Ȯ��" << endl;
}

void Vehicle::PrintYear()
{
	cout << Year << endl;
}

void Vehicle::PrintPrice()
{
	cout << Price << endl;
}

// Get, Set Method
int Vehicle::GetYear()
{
	return Year;
}

void Vehicle::SetYear(int newYear)
{
	Year = newYear;
}