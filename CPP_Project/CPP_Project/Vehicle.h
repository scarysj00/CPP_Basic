#pragma once

class Vehicle
{
	int Year;
	

public:
	int Price;

	// Constructor ����
	Vehicle(int _Year, int _Price);

	// Destructor ����
	~Vehicle();

	// Method
	void PrintYear();
	void PrintPrice();
	int GetYear();
	void SetYear(int newYear);

};
