#include <iostream>  
#include<list>  
using namespace std;  
bool pred( float x,float y)  						
{  								//binary predicate function
	return(int(x)==int(y));  
}  
int main()  
{

	list<int> li={1,2,3,4};  
	list<int> li1={5,6,7,8};
	list<float> l1={12,12.5,12.4,13.1,13.5,14.7,15.5};  
	list<float> ::iterator itrf;  


	cout<<"Before splicing First sequence: ";
	for(list<int>::iterator itr=li.begin();itr!=li.end();++itr)  
		cout<<*itr<<" ";
	cout<<"\n";
	cout<<"Before splicing Second sequence: ";
	for(list<int>::iterator itr=li1.begin();itr!=li1.end();++itr)  
		cout<<*itr<<" ";
	cout<<"\n";

	list<int>::iterator itr=li.begin(); 
	li.splice(itr,li1);  					//use of splice function

	cout<<"After splicing First sequence: ";
	for(list<int>::iterator itr=li.begin();itr!=li.end();++itr)  
		cout<<*itr<<" ";
	cout<<"\n";
	cout<<"After splicing Second sequence: ";
	for(list<int>::iterator itr=li1.begin();itr!=li1.end();++itr)  
		cout<<*itr<<" ";
	cout<<"\n";


	li={1,2,3,4};  
	li1={5,6,7,8};

	cout<<"Before Merging First sequence: ";
	for(list<int>::iterator itr=li.begin();itr!=li.end();++itr)  
		cout<<*itr<<" ";
	cout<<"\n";
	cout<<"Before Merging Second sequence: ";
	for(list<int>::iterator itr=li1.begin();itr!=li1.end();++itr)  
		cout<<*itr<<" ";
	cout<<"\n";

	li.merge(li1);  					//use of sorted merging

	cout<<"After Merging First sequence: ";
	for(list<int>::iterator itr=li.begin();itr!=li.end();++itr)  
		cout<<*itr<<" ";
	cout<<"\n";
	cout<<"After Merging Second sequence: ";
	for(list<int>::iterator itr=li1.begin();itr!=li1.end();++itr)  
		cout<<*itr<<" ";
	cout<<"\n";




	cout<<"Before Unique operation : ";		
	for(itrf=l1.begin();itrf!=l1.end();++itrf)  
		cout<<*itrf<< ", ";  
	cout<<endl;

	l1.unique(pred); 					//use of unique function
 
	cout<<"After Unique operation : ";		
	for(itrf=l1.begin();itrf!=l1.end();++itrf)  
		cout<<*itrf<<", ";  
	cout<<endl;





}

