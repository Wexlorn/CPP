#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
using namespace std;
string ds(int x)
{
  string c;
  c=x+48;
  return c;
}
int main()
{
    int a,d=0,i=0,j=0,r=0,t=0,h=0,MyFile;
    string c="0",b="DAMIR";
    for(i=1; i<=10; i++)
    {
      string aa="in_"+ds(i)+".txt";
      ofstream MyFileI(aa.c_str());
    int x,y;
    cout<<i<<"-test"<<endl;
    cin>>x>>y;
      MyFileI << x<<" "<<y;
      MyFileI.close();
      cout<<endl;
      string bb="out_"+ds(i)+".txt";
      ofstream MyFileO(bb.c_str());
      MyFileO<< x+y;
      MyFileO.close();
    }  
}
