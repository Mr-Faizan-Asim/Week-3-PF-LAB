#include<iostream>
using namespace std;
main()
{
float megabyte,kb,byte,bit;
cout<<"Megabytes = ";
cin>> megabyte;
kb = megabyte*1024 ;
cout<<"In KB = "<< kb << endl;
byte = kb*1024;
cout<<"In Byte = "<< byte << endl;
bit = byte*8;
cout<<"In Bit = "<< bit << endl;

}