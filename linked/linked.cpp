#include <iostream>
#include "linked.hpp"


using namespace std;

int fibonacci(int n) { 
   if((n==1) || (n=2)){
        return 1;
    }
    else{
        int t1=1;
        int t2=1;
        int i=1;
        int res=0;
        while(i<n+1){
           res=t1+t2;
           t1=t2;
           t2=res; 
           i++;
        }
        return res;
    }
}

int main(){
	node n1(10.1);
	//cout<<n1.value<<endl;

	LinkedList List1(1.0);
	//cout<<List1.head.value<<endl;
	//cout<<List1.head.next<<endl;
	List1.linkappend(2.0);
	List1.linkappend(3.0);
	List1.linkappend(4.0);
	List1.linkappend(5.0);
	List1.linkappend(6.0);
	node* pointn1=List1.head.next;
	// cout<<List1.head.next<<endl;
	// cout<<pointn1<<endl;
	// cout<<pointn1->value<<endl;

return 0;
}