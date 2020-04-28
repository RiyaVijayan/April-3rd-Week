/* STL component  Deque
inserting element functions*/

#include <iostream>  
#include<deque>  
using namespace std;  
int main()  
{  
	deque<int> k={1,2,3,4};  
	deque<int>::iterator itr;				//iterator pointing deque

	cout<<"Elements in Deque are:";
	for(itr=k.begin();itr!=k.end();++itr)  
		cout << *itr <<" ";  
	cout<<"\n";

	itr=k.begin();  
	k.insert(itr,2,5);					//insert the value  at the position pointing iterator 2 times  
	cout<<"Elements in Deque are:";
	for(itr=k.begin();itr!=k.end();++itr)  
		cout << *itr <<" "; 
	cout<<"\n"; 

	itr=k.begin();  
	++itr;  
	k.insert(itr,8);					//insert the value 8 at the position 
	cout<<"Elements in Deque are:";
	for(itr=k.begin();itr!=k.end();++itr)  
		cout << *itr <<" "; 
	cout<<"\n"; 



}
