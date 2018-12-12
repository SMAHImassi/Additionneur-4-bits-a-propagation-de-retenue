/*
 * fa.h
 *
 *  Created on: 23 sept. 2018
 *      Author: massi
 */

#ifndef FA_H_
#define FA_H_
#include "systemc.h"

SC_MODULE (fa){
/* declaration entrees sorties*/
	sc_in <sc_logic> a;
	sc_in <sc_logic> b;
	sc_in <sc_logic> cin;
	sc_out <sc_logic> s;
	sc_out <sc_logic> cout;
/* fonction */
	void fa_m();

	 /* constructeur*/
	 	 SC_CTOR(fa){
	 	 SC_METHOD(fa_m);
	 	 sensitive << a << b << cin;
	 	 }
	};




#endif /* FA_H_ */
