#include "io.h"

void String()
{
  char a = 'a'; 

  char Hello[5] = {'H','E','L','L','O'};

  char World[6] = "WORLD"; // "\0" 문자가 마지막에 포함됨

  char b[] = "Hello World"; 

  int Size = sizeof(b); // sizeof 함수는 원래 앞이 소문자

  for(int i=0; i<(Size-1); i++)
    {
      cout << b[i] << endl;
    }
}