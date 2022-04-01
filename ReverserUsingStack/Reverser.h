/*
 * Reverser.h
 *
 *  Created on: Mar 1, 2021
 *      Author: amranzazai
 */

#ifndef REVERSER_H_
#define REVERSER_H_
#include <string>
#include "WordStack.h"

class Reverser {
private:
	WordStack reverser_stack;
	string original_string;
public:
	Reverser();
	string reverse(string);
};

#endif /* REVERSER_H_ */
