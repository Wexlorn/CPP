#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    for(int i=1; i<=10; i++)
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
