#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
  char a[105],b;
  char y;
  for(int i=1;i<10;i++)
  {
    y=char(i);
    a[i-1]=y;
  }
  for(int j=1;j<9;j++)
  {
    b=a[j];
    ofstream xakerali(char(j) + "txt");
    xakerali<<"XakerAli mashennik";
    xakerali.close();
  }
}
