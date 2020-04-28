#include <iostream>  
#include<deque>  
using namespace std;  
int main()  
{  
	deque<string> v{"Chennai","Bangaluru","Hydrabad","Pune"};  
	deque<string>::reverse_iterator ritr;  
	deque<string>::iterator itr;  
	deque<string>::const_iterator citr;  
	deque<string>::const_reverse_iterator itr1;  
	cout<<"Strings are :"<<endl;
	for(itr=v.begin();itr!=v.end();itr++)  
		cout<<*itr<<" ";  
	cout<<'\n';  
	cout<<"Reverse strings are :"<<endl;
	for(ritr=v.rbegin();ritr!=v.rend();ritr++)  
		cout<<*ritr<<" "; 
	cout<<'\n';
	cout<<"Strings using constant iterator:"<<endl;   
	for(citr=v.cbegin();citr!=v.cend();citr++)  
		cout<<*citr<<" ";
	cout<<'\n';  
	cout<<"Strings using constant reverse iterator :"<<endl;   
	for(itr1=v.crbegin();itr1!=v.crend();itr1++)  
		cout<<*itr1<<" ";  
	cout<<"\n";
}  
