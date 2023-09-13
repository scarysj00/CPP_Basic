#include "io.h"

void Structure()
{
  // 구조체 서술 정의 : 데이터 타입을 생성
  struct inflatable 
  {
    char name[20];
    float volume;
    double price;
  };

  inflatable people = { "Tom", 0.75, 15.235 };

  struct sesac
  {
    char name[20];
    char address[100];
    char phone[20];
    int age;
  };

  sesac Banjang; 
  Banjang = {"Jane", "서울시", "01012345678", 25};

  Banjang.age = 30; // 많이 사용하는 구문 형식 
  
}

void ChangeValue(int a)
{
  a = 0;
}

int ChangeValue2()
{
  return 0;
}

int c = 10;

void CallbyValue()
{
  // ChangeValue(c);
  c = ChangeValue2();
}