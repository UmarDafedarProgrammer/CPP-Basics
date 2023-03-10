/******************************************************************************
Numeric Limits of integer data types       
*******************************************************************************/
#include <iostream>
#include <limits>

using namespace std;

int main()
{
  cout<<"Limits of integer types"<<endl;
  cout<<"-----------------------"<<endl;
  
  cout<<"char -> signed char "<<endl;
  cout<<"Range:"<<int(numeric_limits<char>::min())<<" to "<<int(numeric_limits<char>::max())<<endl;
  cout<<"unsigned char "<<endl;
  cout<<"Range:"<<int(numeric_limits<unsigned char>::min())<<" to "<<int(numeric_limits<unsigned char>::max())<<endl;
  
  cout<<"short -> signed short -> signed short int"<<endl;
  cout<<"Range:"<<numeric_limits<short>::min()<<" to "<<numeric_limits<short>::max()<<endl;
  cout<<"unsigned short -> unsigned short int "<<endl;
  cout<<"Range:"<<numeric_limits<unsigned short>::min()<<" to "<<numeric_limits<unsigned short>::max()<<endl;
  
  cout<<"int -> signed int ->signed"<<endl;
  cout<<"Range:"<<numeric_limits<int>::min()<<" to "<<numeric_limits<int>::max()<<endl;
  cout<<"unsigned -> unsigned int "<<endl;
  cout<<"Range:"<<numeric_limits<unsigned>::min()<<" to "<<numeric_limits<unsigned>::max()<<endl;
  
  cout<<"long -> long int -> signed long ->signed long int"<<endl;
  cout<<"Range:"<<numeric_limits<long>::min()<<" to "<<numeric_limits<long>::max()<<endl;
  cout<<"unsigned long -> unsigned long int "<<endl;
  cout<<"Range:"<<numeric_limits<unsigned long>::min()<<" to "<<numeric_limits<unsigned long>::max()<<endl;
  
  cout<<"long long-> long long int -> signed long long ->signed long long int"<<endl;
  cout<<"Range:"<<numeric_limits<long long>::min()<<" to "<<numeric_limits<long long>::max()<<endl;
  cout<<"unsigned long long -> unsigned long long int "<<endl;
  cout<<"Range:"<<numeric_limits<unsigned long long>::min()<<" to "<<numeric_limits<unsigned long long>::max()<<endl;
  return 0;
}
