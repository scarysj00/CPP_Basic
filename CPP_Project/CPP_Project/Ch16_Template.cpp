#include "io.h"

int SumNumber(int a, int b)
{
	int Sum = a + b;
	
	return Sum;
}

float SumNumber(float a, float b)
{
	float Sum = a + b;
	return Sum; 
}

template <typename T>
T SumType(T a, T b)
{
	return (a + b);
}