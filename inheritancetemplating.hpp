#include <iostream>


using namespace std;


class polygon{
protected: //This is the keyword one should use instead of private if he wants the private properties to be 
//inherited.
	double height;
	double width;
	// static defines class variables. Each instantation of the class will share the same dimensions
	// and cannot be changed
	const static int dimensions=2; 
public:
		void setvalues(double, double);
		double printwidth(){return width;};
		double printheight(){return height;};
		//here I am overloading operators
		polygon operator+(const polygon&);
		polygon operator=(const polygon&);
		//with virtual we create a function that will be overwritten at run time by the children functions.
		// This is useful for extending: at compilation time the compiler knows about the existence of this 
		// function, so anything that uses this function will compile.
		virtual double area(){return 0;}
};


void polygon::setvalues(double h,double w){
	height=h;
	width=w;
	cout<<width<<"	"<<height<<endl;
}

polygon polygon::operator+(const polygon& rhs){
	polygon res;
	res.width=this->width+rhs.width;
	res.height=this->height+rhs.height;
	return res;
}

polygon polygon::operator=(const polygon& rhs){
this->height=rhs.height;
this->width=rhs.width;
return *this;
}


class rectangle:public polygon{
public:
	double area(){
		return width*height;
	}
};


class triangle:public polygon{
public:
	double area(){
		return (width*height/2.0);
	}
};




////////////////////////////////////////////////////
////////////////////////////////////////////////////



//Template function example
template <class T> T maxmin(T a, T b){
	return a > b ? a : b;
}

//Specification of template
template<>bool maxmin(bool a, bool b){
	return a||b;
}







template <class T> class tuple_2{
	public:
	T innerarray[2];
	tuple_2(T,T);
	void printtuple_2();
	
};
template <class T> tuple_2<T>::tuple_2(T aa, T bb){
	innerarray[0]=aa;
	innerarray[1]=bb;
}
template<class T> void tuple_2<T>::printtuple_2(){
	cout<<innerarray[0]<<"	"<<innerarray[1]<<endl;
}





template<> class tuple_2<bool>{
	
};