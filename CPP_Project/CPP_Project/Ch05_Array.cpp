#include "io.h" 

void DefineArray()
{
  int Num = 0;

  // 선언, declare(define)
  int a[3] = {1,2,3};
  int b[10] = {1,2};
  // int c[3] = {1,2,3,4}; => Syntax Error
  int d[3];

  // 대입 => 접근, access
  // d[3] = {1,2,3};
  d[0] = 1;
  d[1] = 2;
  d[2] = 3;
  for(int i=0; i<5; i++)
  // i<3 에서 3은 i<=2로 적는것보다 원소의 갯수를 쉽게 보여주기 위해 3으로 입력
  // d 배열의 갯수는 3개, 
  {
    cout << "c" << i;
    d[i] = i+1;
  }

  cout << endl; 

  // 출력 => 접근, Access
  for(int i=0; i<3; i++)
    {
      cout << a[i] << " : ";
    }
  
  cout << endl;

  // 배열 갯수는 10개, 13번 반복 출력 => 10개 넘어서는 부분은 쓰레기값 출력
  for(int i=0; i<13; i++)
    {
      cout << b[i] << " : ";
    }

  cout << endl;

  for(int i=0; i<5; i++)
    {
      cout << d[i] << " : ";
    }

  cout << endl;
  
}