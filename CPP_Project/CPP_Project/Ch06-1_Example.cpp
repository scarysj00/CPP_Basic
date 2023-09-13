#include "io.h" 

void IndexChar() // 백준예제 : 문자열 - 문자와 문자열
{ 
  char word[20];
  int number;
  
  cout << "원하는 단어를 입력해주세요.";
  cin >> word;

  cout << "출력을 원하는 자리 수를 입력해주세요.";
  cin >> number; 

  cout << word[number-1];
}

void AlphaNumber() // 백준예제 : 문자열 - 알파벳 찾기
{
  char Word[20];
  
  cout << "원하는 단어를 입력해주세요.";
  cin >> Word;

  char Alpha[30] = "abcdefghijklmnopqrstuvwxz";

  int Check[30];
  for(int i=0; i<30; i++)
    {
      Check[i] = -1;
    }
  
  for(int i=0; i<(sizeof(Word)-1); i++)
    {
      for(int j=0; j<(sizeof(Alpha)-1); j++)
        {
          if(Word[i] == Alpha[j])
          {
            Check[j] = i;
          }
        }
    }
  for(int i=0; i<30; i++)
    {
      cout << Check[i] << " ";
    }
}