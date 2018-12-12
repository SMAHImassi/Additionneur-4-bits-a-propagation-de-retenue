/*
 * top.h
 *
 *  Created on: 24 sept. 2018
 *      Author: massi
 */

#ifndef TOP_H_
#define TOP_H_
#include "add4.h"
#include "tb_add4.h"
SC_MODULE(TOP)
{
sc_signal <sc_lv<4> > a;
sc_signal <sc_lv<4> > b;
sc_signal <sc_logic>  cin;
sc_signal <sc_lv<4> > s;
sc_signal <sc_logic> cout;

add4 ad;
TB tb_ad;
sc_trace_file *tracefile;

sc_signal<sc_logic> t_cin,t_co;
    sc_signal<sc_lv<4> > t_a;
    sc_signal<sc_lv<4> > t_b,t_s;

//void top();

	 /* constructeur*/
	 	 SC_CTOR(TOP);
	 	//SC_THREAD(top);
	    //sensitive << a << b << cin;

};


#endif /* TOP_H_ */
