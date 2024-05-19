#include <iostream>
#include<string>
using namespace std;
/*
syntax to create a class:
(Keyword)class className{
your code
};
syntax for creating an object:
className objectName;

How to access the fuctions of a class using its object:
objectName.function();
Let's see how it goes practically
*/


class car{
	
	public: 	//Access specifier: to specify what kind of access is allowed
				/*three types: Public(that we are using, can be
				accessed anywhere within the program), private(attributes and)
				functions can only be used within the class, protected*/
	string name = "BMW";
	int make = 1999;
	
	void getData(){
		
		cout<<"Car Name: "<<name<<" Car Make: "<<make;
		
	}
};
int main(int argc, char** argv) {
	car objcar;//creating an object
	objcar.getData();
	return 0;
}
/*So u can see the code is working properly. Hope you understood how to make a class
and how to access it using its object
If it helped you, consider liking, sharing and subscribing.
I will see you in the next video till then goodbye  :)*/
