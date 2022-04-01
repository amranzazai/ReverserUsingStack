/*
 * Reverser.cpp
 *
 *  Created on: Mar 1, 2021
 *      Author: amranzazai
 */

#include "Reverser.h"
#include <iostream>
#include <fstream>
#include <sstream>

Reverser::Reverser() {
	// TODO Auto-generated constructor stub
	original_string = " ";
}
string Reverser::reverse(string fileContents){

	Word w;
	Word y;
	string return_string;

	istringstream s(fileContents); //placing string with original file contents into s

	while(s >> original_string) //Separating words by space and placing word into original string
	{
		w.setWord(original_string); //setting the word object w's string member to original_string
		reverser_stack.push(w); //pushing the word object w onto the stack
	}

	//pushing a sentence word by word to a stack then popping the stack element by element would result in a reversed string

	while(!reverser_stack.isEmpty())  //while the stack is not empty
	{
		y = reverser_stack.pop(); //pop the top element from the stack and place it into y
		return_string += y.getWord(); //adding the words popped from the stack into return string
	}

	return return_string; //return the string with the original sentence reversed

}

