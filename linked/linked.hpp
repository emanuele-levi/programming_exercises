#include <iostream>


//-----------------------------------//
class node{
public:
	double value;
	node* next;
	node(double);
	node();
};


node::node(double vvalue){
		value=vvalue;
		next=NULL;
	}

node::node(){
		value=0.0;
		next=NULL;
	}	






//---------------------------------//
class LinkedList{
	public:
		int length;
		node head;
		//node tail;
		LinkedList(double);
		void linkappend(double);
};


LinkedList::LinkedList(double vvalue){
	 head.value=vvalue;
	 std::cout<<"Head created at: "<<&head<<std::endl;
	 //tail=head;
	 length=1;
}

void LinkedList::linkappend(double v1){
	// if(head.next=NULL){
	// 	tail.value=v1;
	// 	head.next=&tail;
	// 	length++;
	// }

//	if(head.next!=NULL){
		node* newnode=new node;
		newnode->value=v1;
		std::cout<<"node created at: "<<newnode<<" with value:"<<newnode->value<<std::endl;
		node* tmp=&head;
		while((tmp->next)!=NULL){
			tmp=tmp->next;
			std::cout<<"Previous element at: "<<tmp<<std::endl;
		}
		tmp->next=newnode;
//	}
}



