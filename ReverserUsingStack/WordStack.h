/*
 * WordStack.h
 *
 *  Created on: Mar 1, 2021
 *      Author: amranzazai
 */
#ifndef WORDSTACK_H_
#define WORDSTACK_H_

#include "Word.h"
using namespace std;

class WordStack{
private:
	struct StackNode
	{
		Word word;
		StackNode *next;
	};

	StackNode *top;

public:
	WordStack();
	void push(Word);
	Word pop();
	bool isEmpty() const;
	~WordStack();
};

#endif /* WORDSTACK_H_ */
