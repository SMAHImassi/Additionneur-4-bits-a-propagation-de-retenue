/*
 * add4.cpp
 *
 *  Created on: 24 sept. 2018
 *      Author: massi
 */

#include "add4.h"
#include "fa.h"

void add4::fa_m1()
{
		 	sc_lv<4> t= a.read();
		 	sc_lv<4> t1= b.read();
		 	cout << "Time: "<<sc_time_stamp() << " A: "<<t<<endl;
		 	cout << "Time: "<<sc_time_stamp() << " B: "<<t1<<endl;



		 	a_0.write(t[0]);
		 	b_0.write(t1[0]);

		 	a_1.write(t[1]);
		 	b_1.write(t1[1]);

		 	a_2.write(t[2]);
		 	b_2.write(t1[2]);

		 	a_3.write(t[3]);
		 	b_3.write(t1[3]);






	}
void add4::fa_m2()
{
	            sc_lv<4> t6;

			 	sc_logic t2=ts_0.read();
			 	t6[0]=ts_0.read();
			 	sc_logic t3=ts_1.read();
			 	t6[1]=ts_1.read();
			 	sc_logic t4=ts_2.read();
			 	t6[2]=ts_2.read();
			 	sc_logic t5=ts_3.read();
			 	t6[3]=ts_3.read();
			 	cout << "Time: "<<sc_time_stamp() << " S: "<<t6<<endl;


			 	s.write(t6);
			 	//s.write(t2)[0];
			 	/*s[1].write(t3);
			 	s[2].write(t4);
			 	s[3].write(t5);*/
	}
