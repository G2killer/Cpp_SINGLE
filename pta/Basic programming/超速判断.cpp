#include<iostream>
using namespace std;
int main()
{
    int speed;
    cin>>speed;
    if(speed>60)
    cout<<"Speed: "<<speed<<" - Speeding";
    else
    cout<<"Speed: "<<speed<<" - OK";
}