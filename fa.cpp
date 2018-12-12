/*
 * fa.cpp
 *
 *  Created on: 23 sept. 2018
 *      Author: massi
 */


#include "fa.h"
void fa::fa_m()
{
s.write(a.read()^(b.read()^cin.read()));
cout.write((a.read()&b.read())|(a.read()&cin.read())|(b.read()&cin.read()));
	}





