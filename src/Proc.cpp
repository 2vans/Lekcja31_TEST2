/*
 * Proc.cpp
 *
 *  Created on: 8 gru 2015
 *      Author: Michau
 */
#include <iostream>
#include  "Proc.h"
using namespace std;

void Proc::speak() {
	cout << "I AM THE PROCESSOR PRIME!" << endl;
}

Proc::Proc() {
	id = 0;
	cout << "no no no" << endl;
}

Proc::~Proc() {
	cout << "This is your end, procesor!" << endl;
}

