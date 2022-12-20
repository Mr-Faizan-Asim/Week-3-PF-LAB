#include<iostream>
using namespace std;
main()
{
string name;
float matric,intermediate,ecat,aggregrate,matric_per,ecat_per,inter_per;
cout<<"**********************************************************************************"<< endl;
cout<<"*                    AGGREGRATE CALCULATOR OF UET                                *"<< endl;
cout<<"**********************************************************************************"<< endl;
cout<<"Enter Your Name : ";
cin>> name;
cout<<"Enter the number of matric (Out of 1100) : ";
cin>> matric;
cout<<"Enter the number of 12th (Out of 1100) : ";
cin>> intermediate;
cout<<"Enter the number of Ecat (Out of 400): ";
cin>> ecat;
matric_per = (matric/1100)*10;
inter_per = (intermediate/1100)*40;
ecat_per = (ecat/400)*50;
aggregrate = matric_per + inter_per + ecat_per;
cout<<"Your Aggregrate is "<< aggregrate ;



}