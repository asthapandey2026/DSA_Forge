//INHERITANCE and its TYPES

/*
//single level inheritance
#include<iostream>
using namespace std;

class student{
public:
	void show(){
		cout<<"base class called";
	}
};
class student2:public student{
public:
	void show(){
		cout<<"derived class called";
	}
};
int main(){
	student2 st;
	st.show();
}

//multilevel inheritance
#include<iostream>
using namespace std;

class student{
public:
	void show(){
		cout<<"base class called";
	}
};
class student2:public student{
public:
	void slow(){
		cout<<"1st derived class called";
	}
};
class student3:public student2{
public:
	void snow(){
		cout<<"2nd derived class called";
	}
};
int main(){
	student3 st;
	st.show();
}


//multiple inheritance
#include<iostream>
using namespace std;

class student{
public:
	void show(){
		cout<<"\nbase class called";
	}
};
class student2{
public:
	void slow(){
		cout<<"\n1st derived class called";
	}
};
class student3:public student,public student2{
public:
	void snow(){
		cout<<"\n2nd derived class called";
	}
};
int main(){
	student3 st;
	st.show();
	st.slow();
	st.snow();
}

//Hierarchical inheritance
#include<iostream>
using namespace std;

class student{
public:
	void show(){
		cout<<"\nbase class called";
	}
};
class student2:public student{
public:
	void slow(){
		cout<<"\n1st derived class called";
	}
};
class student3:public student{
public:
	void snow(){
		cout<<"\n2nd derived class called";
	}
};
int main(){
	
	student3 st;
	st.show();
	st.snow();
	
	student2 s;
	s.show();
	s.slow();
	
}


//Hybrid inheritance               //Diamond problem solved through virtual function
#include<iostream>
using namespace std;

class student{
public:
	void show(){
		cout<<"\nbase class called";
	}
};
class student2:virtual public student{
public:
	void slow(){
		cout<<"\n1st derived class called";
	}
};
class student3:virtual public student{
public:
	void snow(){
		cout<<"\n2nd derived class called";
	}
};
class student4:public student2, public student3{
public:
	void hey(){
		cout<<"\nkoi problem nhi h";
	}
};
int main(){
	
	student4 st;
	st.show();
	st.hey();
//	st.slow();
}*/
