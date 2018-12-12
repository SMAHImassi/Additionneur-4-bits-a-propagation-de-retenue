/*
 * tb_add4.h
 *
 *  Created on: 24 sept. 2018
 *      Author: massi
 */

#ifndef TB_ADD4_H_
#define TB_ADD4_H_
//#include "add4.h"
#include "systemc.h"
SC_MODULE(TB)
{
sc_out <sc_lv<4> > a;
sc_out <sc_lv<4> > b;
sc_out <sc_logic> cin;

void fa_tb();

	 /* constructeur*/
	 	 SC_CTOR(TB){
	 	 SC_THREAD(fa_tb);

	 	 }
	};
#endif /* TB_ADD4_H_ */
