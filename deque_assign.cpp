/* STL Component :Deque
insering functions*/

#include <iostream>  
#include<deque>  
using namespace std;  
int main()  
{  
	deque<int> first={1,2,3,4};  
	deque<int> second;  
	deque<int> deq;    
	deque<int>::iterator itr;  					//iterator pointing to deque


	second.assign(first.begin(),first.end());  			//assigning one deque to another replacing old
	for(itr=second.begin();itr!=second.end();++itr)  
		cout<<*itr<<" ";
	cout<<"\n";  


	deq.assign(5,6);  						//assigning value 6 to deque 5 times
	for(itr=deq.begin();itr!=deq.end();++itr)  
		cout<< *itr <<" ";
	cout<<"\n"; 

  
	deq.emplace(deq.begin(),1);					//emplacing a value to deque in a specified position
  	for(itr=deq.begin();itr!=deq.end();++itr)  
  		cout<<*itr <<" ";
	cout<<"\n";


	deq.emplace_back(8);  						//emplacing value at backend
	for(itr=deq.begin();itr!=deq.end();++itr) 
		cout<<*itr<<" ";
	cout<<"\n";


	
	deq.emplace_front(7);  						//emplacing value at frontend
	for(itr=deq.begin();itr!=deq.end();++itr) 
		cout<<*itr<<" ";
	cout<<"\n";

}

  
