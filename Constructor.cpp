#include<iostream>
#include<string>
using namespace std;

/*Constructor is created by writing the name same as class followed by paranthesis()
className(){
code goes here
}
*/
/**
class car{
	public:
		string name = "Audi";
		int make = 2023; //sorry integers are written without inverted commas
		car(){
			cout<<"Car Name: "<<name<<" Make: "<<make;
		}
};
int main(){
	car obj;
	return 0;
}
*/

//constructors can also take the paremeter. let me show u
class car{
	public:
		string name;
		int make;
		car(string nm, int mk)
		{
			name = nm;
			make = mk;
		}
};
int main(){
	car obj("Audi", 2004);
	cout<<"Car Name: "<<obj.name<<"Car Make: "<<obj.make;
	return 0;
}

/*worked properly!
if it helped u like it, consider subscring and share it
i will see u in next video
till then goodbye*/
