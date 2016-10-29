#include <iostream>
#include <string>
#include "inheritancetemplating.hpp"

using namespace std;

int main(){
	cout<<"hello world!\n";
	polygon test1;
	triangle test2;
	rectangle test3;
	test1.setvalues(10.0,2.0);
	test2.setvalues(10.0,2.0);
	test3.setvalues(10.0,2.0);
	cout<<"Area of triangle: "<<test2.area()<<endl<<endl;

	//Polymorphism
	triangle triangle1;
	rectangle rectangle1;
	polygon * ppoint1= &triangle1;
	polygon * ppoint2= &rectangle1;
	ppoint1->setvalues(3.0,4.0);
	ppoint2->setvalues(3.0,4.0);
	cout<<"Area of triangle: "<<ppoint1->area()<<endl<<endl;

	polygon test4=rectangle1+rectangle1;
	cout<<"After equality: "<<test4.printheight()<<"	"<<test4.printwidth()<<endl;



	cout<<maxmin(2,4)<<endl;
	cout<<maxmin(12.0,40.0)<<endl;
	bool a1=0;
	bool a2=1;
	cout<<maxmin(a1,a2)<<endl;
	cout<<maxmin("Hello","World")<<endl;

	string string1="Hello";
	string string2="World!";
	tuple_2<string> gluestrings(string1,string2);
	gluestrings.printtuple_2();

	iterator<double> k;




}