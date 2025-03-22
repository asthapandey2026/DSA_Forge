// C++ basic concepts
/*
#include<iostream>
//#include<string>
using namespace std;

int main(){
	sum(2,2);
//	int a=10;
//	char b='A';
//	cout<<a+b<<endl;
//	string name="astha";
//	cout<<"my name is: "<<name.max_size()<<endl;
//	cout<<"my name is: "<<name.length()<<endl;
//	cout<<"my name is: "<<name.size()<<endl;
//	
//	string str = "";
//	if (str.empty()) cout << "String is empty";
//	
//	string str1 = "Hello";
//	string str2 = " World";
//	str1.append(str2);
//	cout << str1<<endl; // Hello World
//	
//	string str4 = "Hello";
//	str4.insert(3, " World");
//	cout << str4<<endl;  // Output: Hel Worldlo 
//	
//	cout<<str4.substr(2,5)<<endl;    // output: l Wor    //takes characters from the index to and iterates 5times frontwards
//	
//	string str5 = "Hello World";
//	str.erase(5, 6);  // Removes " World"
//	cout << str<<endl;  // Output: Hello
//	
//	str.replace(6, 5, "C++");
//	cout << str<<endl;  // Output: Hello C++
//	
//	cout << str.find("World")<<endl;  // Output: 6
//	
//	string str6= "Hello World, Hello";
//	cout << str.rfind("Hello");  // Output: 13  //finds the last occurence of the string
    return 0;
}
*/
/*
//Functions
#include<iostream>
using namespace std;

int sum(int a,int b){
	int c;
	int add=a+b;
	cout<<add<<endl;
}
int main(){
	sum(2,3);
	return 0;
}*/

//pointer
//#include<iostream>
//using namespace std;
//int main(){
//	int a=10;
//	int *ptr=&a;
//	int **q=&ptr;
//	cout<<*q<<endl;
//	cout<<&a<<endl;
//	if(ptr==*q){
//		cout<<"same";
//	}
//	return 0;
//}


//// C++ program for function overriding with data members
//#include <iostream>
//using namespace std;
//
////  base class declaration.
//class Animal {
//public:
//    string color = "Black";
//};
//
//// inheriting Animal class.
//class Dog : public Animal {
//public:
//    string color = "Grey";
//};
//
//// Driver code
//int main(void)
//{
//    Animal d = Dog(); // accessing the field by reference
//                      // variable which refers to derived
//    cout << d.color;
//}



// C++ program for virtual function overriding
//#include <iostream>
//using namespace std;
//
//class base {
//public:
//    virtual void print()
//    {
//        cout << "print base class" << endl;
//    }
//    void show() { cout << "show base class" << endl; }
//};
//
//class derived : public base {
//public:
//    // print () is already virtual function in
//    // derived class, we could also declared as
//    // virtual void print () explicitly
//    void print() { cout << "print derived class" << endl; }
//    
//    void show() { cout << "show derived class" << endl; }
//};
//
//int main()
//{
//    base* bptr;
//    derived d;
//    bptr = &d;
//
//    // Virtual function, binded at
//    // runtime (Runtime polymorphism)
//    bptr->print();
//
//    // Non-virtual function, binded
//    // at compile time
//    bptr->show();
//
//    return 0;
//}

//hackerrank question for classes

/*We can store details related to a student in a class consisting of his age (int), first_name (string), last_name (string) and standard (int).

You have to create a class, named Student, representing the student's details, as mentioned above, and store the data of a student. Create setter and getter functions for each element; that is, the class should at least have following functions:
get_age, set_age
get_first_name, set_first_name
get_last_name, set_last_name
get_standard, set_standard
Also, you have to create another method to_string() which returns the string consisting of the above elements, separated by a comma(,). You can refer to stringstream for this.

Input Format:
Input will consist of four lines.
The first line will contain an integer, representing the age. The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
The fourth line will contain an integer, representing the standard of student.

Note: The number of characters in first_name and last_name will not exceed 50.

Output Format:
The code provided by HackerRank will use your class members to set and then get the elements of the Student class.

#include<iostream>
#include<string>
#include <sstream>
using namespace std;

class Student{
	int age,standard;
	string first_name,last_name;
	
public:
	int set_age(int a){
		age=a;
	}
	string set_first_name(string b){
		first_name=b;
	}	
	void set_last_name(string c){
		last_name=c;
	}
	void set_standard( int d){
		standard=d;
	}
	
	
	int get_age(){
		cout<< age;
	}	
	string get_first_name(){
		return first_name;
	}	
	string get_last_name(){
		return last_name;
	}	
	int get_standard(){
		return standard;
	}
	
	string to_string(){
		string name;
		char sep=',';
		stringstream ss;
		ss << age << "," << first_name << "," << last_name << "," << standard;
		string result = ss.str();
		return result;	

	}
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}


//banking system
#include<iostream>
#include<string>
using namespace std;

class bank{
	int password=1234;
	long long accno=987654321987;
	double balance=100000.00;
	string holder="Ansh Chaurasiya";
	
public:
	void options(){
		int op;
		cout<<"\n\n-----------------------------Welcome to MyBank---------------------------";
		cout<<"\n1. Check Account Details\n";
		cout<<"2. Check Balance\n";
		cout<<"3. Withdraw Amount\n";
		cout<<"4. Deposit Amount\n";
		cout<<"5. Exit\n";
		cout<<"\nEnter Your Choice: ";
		cin>>op;
		switch (op){
			case 1:
				accdetails();
			break;
			case 2:
				show_bal();
				break;
			case 3:
				withdraw();
				break;
			case 4:
				deposit();
				break;
			case 5:
				cout<<"\nThankyou for your visit!";
				break;
			default:
				cout<<"\nInvalid choice! Try again";
				options();
		}

    }
    int accdetails(){
	if(checkpass()){
    	cout<<"\nAccount Holder: "<<holder<<"\nAccount Number: "<<accno;
		options();
    } else { cout<<"Access denied! Invalid Password!";}
	}
	
	void show_bal(){
	if(checkpass()){
		cout<<"\nAccount Balance: "<<balance;
		options();
    } else { cout<<"Access denied! Invalid Password!";}
	}
	
	int withdraw(){
	if(checkpass()){
		int wam;
		cout<<"Enter amount to withdraw: ";
		cin>>wam;
		*(&balance)-=wam;
		cout<<"\nMoney debited from account XXXXXXXX1987: "<<wam;
		cout<<"\nAccount Balance: "<<*(&balance);
		options();
    } else { cout<<"Access denied! Invalid Password!";}
	}
	
	void deposit(){
	if(checkpass()){
		int dam;
		cout<<"Enter amount to deposit: ";
		cin>>dam;
		*(&balance)+=dam;
		cout<<"\nMoney debited from account XXXXXXXX1987: "<<dam;
		cout<<"\nAccount Balance: "<<*(&balance);
		options();
    } else { cout<<"Access denied! Invalid Password!";}
	}

	bool checkpass(){
		int p;
		cout<<"Enter password: ";
		cin>>p;
		return p==password;
	}
};
int main(){
	bank b;
	b.options();
}


//function overloading
#include <iostream>
using namespace std;

class Student{
public:
	Student(){
		cout<<"contructor base class"<<endl;
	}
	int show(int a){
		cout<<"base show called->"<<" a+10 "<<a+10<<endl;
	}
	int show(int a,int b){
		cout<<"base show called->"<<" a+b= "<<a+b<<endl;
	}
	int show(int a,int b,int c){
		cout<<"base show called->"<<" a+b+c= "<<a+b+c<<endl;
	}
};
int main(){
	Student st;
	st.show(10,7);
}


//funtion overriding
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
}

//Constructor & Destructor
#include<iostream>
using namespace std;

class student{
public:
	student(){
		cout<<"\nbase constructor called";
	}	
	~student(){
		cout<<"\n\nbase destructor called";
	}
	void show(){
		cout<<"\nbase class called";
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

//	st.slow();
}*/









