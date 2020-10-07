#include <iostream>

using namespace std;

int main() 
{
  for(int i=1; i<10; i++)
  {
    for(int j=1; j<10; j++)
    {
      if(i==1 and j<9)
      {
        cout << "##";
      }
      else if(i==2 and j<8)
      {
        cout << "##";
      }
      else if(i==3 and j<7)
      {
        cout << "##";
      }
      else if(i==4 and j<6)
      {
        cout << "##";
      }
      else if(i==5 and j<5)
      {
        cout << "##";
      }
      else if(i==6 and j<4)
      {
        cout << "##";
      }
      else if(i==7 and j<3)
      {
        cout << "##";
      }
      else if(i==8 and j<2)
      {
        cout << "##";
      }
      else if(i==9 and j<1)
      {
        cout << "##";
      }
    }
    cout << endl;
  }
  return 0;
}