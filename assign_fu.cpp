/* operator function */

#include<iostream>  
#include<vector>  
using namespace std;  
int main()  							//main pgm
{  
	vector<string> v{"java"};  
	vector<string> v1{".NET"};  
	cout<<"initially,value of v1 is :";  
	for(int i=0;i<v1.size();i++)  
		cout<<v1[i];  
	cout<<'\n';  
	cout<<"Now, the value of vector v1 is :";  
	v1.operator=(v);  					//operator function
	for(int i=0;i<v1.size();i++)  
		cout<<v1[i];    
}  
