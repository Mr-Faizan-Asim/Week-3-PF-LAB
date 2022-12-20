#include<iostream>
using namespace std;
main()
{
float pounds,kgs;
cout<< "Enter in Pounds Weight : ";
cin>> pounds;
kgs= 0.45*pounds;
cout<<"Weight in Kilograms : "<< kgs;
cout<< " kgs"<< endl << endl;

cout<< "Enter in KIllogram Weight : ";
cin>> kgs;
pounds= kgs/0.45;
cout<<"Weight in Kilograms : "<< pounds;


}