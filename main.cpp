#include<bits/stdc++.h>
using namespace std;

struct datetype
{
    int num;
    string month;
    int year;
};

bool isleapyear(int year);
string zellercongruence(int d , int m , int Y,int C ){}

int main(){
    datetype date;
    cout<<"Hello , I am Day Finder.\nTell me a Date and I will Tell the Day (Please Enter in Format like 10 Aug 2010): ";
    cin>>date.num >> date.month >> date.year;
    switch (isleapyear(date.year))
    {
    case 0:
        cout<<"It is not a Leap Year\n";
        break;
    case 1:
        cout<<"It is A Non-Centenial Leap Year\n";
        break;
    case 2 :
        cout<<"It is A Centenial Leap Year\n";
        break;
    default:
        break;
    }

}


bool isleapyear(int year){
    if (year % 100 == 0 ) {
        if (year % 400 == 0 ) return 2 ;
    }else{
        if (year % 4 == 0) return 1 ;
    }
    return 0; 
}

