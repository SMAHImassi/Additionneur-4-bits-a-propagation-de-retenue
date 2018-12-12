/*
 * add4.h
 *
 *  Created on: 24 sept. 2018
 *      Author: massi
 */

#ifndef ADD4_H_
#define ADD4_H_
#include "systemc.h"
#include "fa.h"


SC_MODULE (add4){
/* declaration entrees sorties*/
	sc_in<sc_lv<4> > a;
	sc_in<sc_lv<4> > b;
	sc_in <sc_logic> cin;
	sc_out<sc_lv<4> > s;
	sc_out <sc_logic> co;

/* signaux */
   sc_signal <sc_logic> a_0;
   sc_signal <sc_logic> b_0;

   /* autres declaration
    * sc_signal<sc_logic> a[4];
    * sc_signal<sc_logic> b[4];
    * sc_signal<sc_logic> s[4];
    */
   sc_signal<sc_logic> cin1;
   sc_signal <sc_logic> a_1;
   sc_signal <sc_logic> b_1;

   sc_signal <sc_logic> a_2;
   sc_signal <sc_logic> b_2;

   sc_signal <sc_logic> a_3;
   sc_signal <sc_logic> b_3;

   sc_signal <sc_logic> s_0;
   sc_signal <sc_logic> s_1;
   sc_signal <sc_logic> s_2;
   sc_signal <sc_logic> s_3;

               fa fa_0;
   	 		   fa fa_1;
   	 		   fa fa_2;
   	 		   fa fa_3;


   /*fonction */
	void fa_m1();
	void fa_m2();

	                sc_signal<sc_logic> tc_0;
			 		sc_signal<sc_logic> ta_0;
			 		sc_signal<sc_logic> tb_0;
			 		sc_signal<sc_logic> tc_1;
			 		sc_signal<sc_logic> ts_0;

			 		sc_signal<sc_logic> ta_1;
			 		sc_signal<sc_logic> tb_1;
			 		sc_signal<sc_logic> tc_2;
			 		sc_signal<sc_logic> ts_1;

			 		sc_signal<sc_logic> ta_2;
			 		sc_signal<sc_logic> tb_2;
			 		sc_signal<sc_logic> tc_3;
			 		sc_signal<sc_logic> ts_2;

			 		sc_signal<sc_logic> ta_3;
			 		sc_signal<sc_logic> tb_3;
			 		sc_signal<sc_logic> tc_4;
			 		sc_signal<sc_logic> ts_3;

	 /* constructeur*/
	 	 SC_CTOR(add4) : fa_0("fa_0"),fa_1("fa_1"),fa_2("fa_2"),fa_3("fa_3"){

	 	 SC_METHOD(fa_m1);
	 	 sensitive << a << b << cin;
	 	 SC_METHOD(fa_m2);
	 	 sensitive << ts_0 << ts_1 << ts_2 << ts_3;

	 	/*module 1*/


	 			 		fa_0.a(a_0);
	 			 		fa_0.b(b_0);
	 			 		fa_0.cin(cin);
	 			 		fa_0.cout(tc_1);
	 			 		fa_0.s(ts_0);

	 			 		/*module 2*/


	 			 		fa_1.a(a_1);
	 			 		fa_1.b(b_1);
	 			 		fa_1.cin(tc_1);
	 			 		fa_1.cout(tc_2);
	 			 		fa_1.s(ts_1);

	 			 		/*module 3*/


	 			 		fa_2.a(a_2);
	 			 		fa_2.b(b_2);
	 			 		fa_2.cin(tc_2);
	 			 		fa_2.cout(tc_3);
	 			 		fa_2.s(ts_2);

	 			 		/*module 4*/


	 			 		fa_3.a(a_3);
	 			 		fa_3.b(b_3);
	 			 		fa_3.cin(tc_3);
	 			 		fa_3.cout(co);
	 			 		fa_3.s(ts_3);


	 	 }
	};
#endif /* ADD4_H_ */
