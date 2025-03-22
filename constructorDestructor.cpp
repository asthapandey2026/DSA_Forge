//Constructor & Destructor

#include<iostream>
using namespace std;

class tea{
public:
	tea(){
		cout<<"\nbase constructor called";
	}	
	~tea(){
		cout<<"\n\nbase destructor called";
	}
	void show(){
		cout<<"\nbase class called";
	}
};
class student:public tea{
public:
	student(){
		cout<<"\n2 constructor called";
	}	
	~student(){
		cout<<"\n\n2 destructor called";
	}
	void show(){
		cout<<"\n2 class called";
	}
};
class student2: public student{
public:
	student2(){
		cout<<"\nderived constructor called";
	}	
	~student2(){
		cout<<"\n\nderived destructor called";
	}
	void slow(){
		cout<<"\n derived class called";
	}
};

int main(){
	student2 st;
	st.show();
}
/* 1st- constructor of grandparent class
2nd- constructor of parent class
3rd- constructor of child class

other functions to be called

4th- destructor of child class
5th- destructor of parent class
6th- destructor of grandparent class*/






