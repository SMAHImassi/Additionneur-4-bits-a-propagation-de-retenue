/*
 * top.cpp
 *
 *  Created on: 24 sept. 2018
 *      Author: massi
 */


#include "top.h"
//include "add4.h"
TOP::TOP(sc_module_name n):sc_module(n),ad("ad"),tb_ad("tb_ad"){




   ad.a(t_a);
   ad.b(t_b);
   ad.cin(t_cin);
   ad.s(t_s);
   ad.co(t_co);


   tb_ad.a(t_a);
   tb_ad.b(t_b);
   tb_ad.cin(t_cin);

//	cin.write(t_c_0.read());
//	a.write(t_a.read());
//	b.write(t_b.read());



   	tracefile= sc_create_vcd_trace_file("chrono1");
   	sc_trace( tracefile, t_a, "Ina");
   	sc_trace( tracefile, t_b, "inb");
   	sc_trace( tracefile, t_cin, "cin");
   	sc_trace( tracefile, t_s, "s");
   	sc_trace( tracefile, t_co, "cout");

   	//sc_close_vcd_trace_file(tracefile);
}


