/* STL Component Deque 
   Pushing and Poping Functions*/

#include <iostream>  
#include<deque>  
using namespace std;  
int main()  
{  
	deque<int> d={10,20,30,40};  
	deque<int>::iterator itr;

	cout<<"The elements in deque are:";  
	for(itr=d.begin();itr!=d.end();++itr)  
		cout<<*itr<<" ";  
	cout<<"\n";

	d.push_back(50);  				//pushing an element at backend
	cout<<"The elements in deque are after pushing 50 at back:";  
	for(itr=d.begin();itr!=d.end();++itr)  
		cout<<*itr<<" ";  
	cout<<"\n";

	d.push_front(5);  				//pusing an element at front
	cout<<"The elements in deque are after pushing 5 at front :";  
   	for(itr=d.begin();itr!=d.end();++itr)  
    		cout<<*itr<<" ";  
	cout<<"\n";

	
	d.pop_back(); 					//poping an element from back 
	cout<<"The elements in deque are after pop_back :";  
    	for(itr=d.begin();itr!=d.end();++itr)  
   		 cout<<*itr<<" ";  
	cout<<"\n";

    	d.pop_front();  				//poping an element from front
	cout<<"The elements in deque are after pop_front :";  
    	for(itr=d.begin();itr!=d.end();++itr)  
    		cout<<*itr<<" ";  
	cout<<"\n";

}
