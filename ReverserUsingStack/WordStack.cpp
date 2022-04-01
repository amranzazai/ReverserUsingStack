/*
 * WordStack.cpp
 *
 *  Created on: Mar 1, 2021
 *      Author: amranzazai
 */

#include "WordStack.h"
#include <iostream>
using namespace std;

WordStack::WordStack(){
	// TODO Auto-generated constructor stub
	top = nullptr;
}
void WordStack::push(Word y){
	StackNode *newNode; //creating a pointer to a new StackNode

	//Allocating memory for the node and storing word in node
	newNode = new StackNode;
	newNode->word=y;

	//If there are no nodes in the list make newNode the first node
	if(isEmpty()){
		top = newNode; //setting top to newNode
		newNode->next=nullptr;
	}
	else{
		newNode->next=top;  //inserting newNode before top
		top  = newNode; //setting top to the newNode
	}
}
Word WordStack::pop(){
	StackNode *tempPtr; //creating a temporary pointer
	StackNode  *wordPtr;
	wordPtr = top;

	if(isEmpty()){
		cout<<"The stack is empty"<<endl;
	}
	else{
		tempPtr = top->next;//tempPtr points to tops next
		wordPtr->word = top->word;
		delete top; //calling delete on top
		tempPtr = top; //setting tempPtr to become the new top
	}
	return wordPtr->word;
}
bool WordStack::isEmpty() const{
	if(!top) //if there is no top the stack is empty
		return  true;
	else
		return false;
}
WordStack::~WordStack(){
	StackNode *tempPtr;
	while(top!=nullptr){ //while top does not point to null
		tempPtr=top; //set temp pointer to top
		top=top->next; //set top to tops next
		delete tempPtr; //delete temp which held the old top
	}
}
