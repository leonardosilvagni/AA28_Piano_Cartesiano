//
//  retta.cpp
//  AA28_Piano_Cartesiano
//
//  Created by Leonardo Silvagni on 24/08/18.
//  Copyright © 2018 Leonardo Silvagni. All rights reserved.
//

#include "retta.hpp"
using std::string;
using std::cout;


/*~~~~~~~~~~~~~~~~~~~~~~~~~
 *~~~~~~~Constructor~~~~~~~
 *~~~~~~~~~~~~~~~~~~~~~~~~~
 */
// The line ID should be set automatically by the program not by the programmer
// This is why it has not the setters method
Line::Line(bool verbose,int ID_temp, string line_name_temp, float x_coeff_temp,\
           float y_coeff_temp,float constant_term_temp){
	if(verbose){
		cout << "Please input the line name and then press enter\n?:" ;
		std::cin >> Line::line_name_;
		cout << "Please input the x coefficent considering the line equation in the form of ax+by+c=0\n?:";
		std::cin >> Line::x_coefficent_;
		cout << "Please input the y coefficent\n?:";
		std::cin >> Line::y_coefficent_;
		cout << "Please input the constant term\n?:";
		std::cin >> Line::constant_term_;
	}else {
		cout << "Setting the line Id...";
		Line::line_id_ = ID_temp;
		cout << "Done!\nSetting Line Name...";
		Line::line_name_ = line_name_temp;
		cout << "Done!\nSettnig Equation coefficents and constant term...";
		Line::set_x_coefficent(x_coeff_temp);
		Line::set_y_coefficent(y_coeff_temp);
		Line::set_constant_term(constant_term_temp);}
//	Defining isSpecial if the line is parallel to the y-axis
	Line::isSpecial = (Line::get_y_coefficent()==0)?(true):(false);
		cout << "Done!\nMaximize efficency...Done!\n"<< std::endl;
		if (Line::isSpecial){
			Line::set_gradient(0);
			Line::set_y_interceptor(0);
		}else {
			Line::set_gradient(-(Line::get_x_coefficent()/Line::get_y_coefficent()));
			Line::set_y_interceptor(-(Line::get_constant_term()/Line::get_y_coefficent()));}
//  Set the gradient and the y_interceptor for future requests
//  Prints the explicit or implicit equation, depending on y_coeff
		Line::PrintExplicit();
		Line::PrintImplicit();
};
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *~~~~~~~~Print Functions~~~~~~~~~
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
// +ax +by +c = 0
void Line::PrintExplicit(){
        cout <<std::showpos<< Line::get_x_coefficent()<<"x "<<std::showpos<<\
        Line::get_y_coefficent()<<"y "<<\
		std::showpos<<Line::get_constant_term()<<" = 0"<<std::endl;
}
// y = mx +q
void Line::PrintImplicit(){
	if (Line::isSpecial) {
		Line::PrintSpecial();
	}else {
    	cout << "y = " <<std::showpos<<Line::get_gradient()<<"x "<<std::showpos<<\
		Line::get_y_interceptor()<<std::endl;};
}
// Line::isSpecial == true
void Line::PrintSpecial(){
	cout << "x = " << std::showpos << -(Line::get_constant_term()/Line::get_x_coefficent())<<\
	std::endl;
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *~~~~~~~~Setters Functions~~~~~~~~~~
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

void Line::set_y_interceptor(float temp){
	Line::y_interceptor_ = temp;
}
void Line::set_y_coefficent(float temp){
	Line::y_coefficent_ = temp;
}
void Line::set_x_coefficent(float temp){
	Line::x_coefficent_ = temp;
}
void Line::set_constant_term(float temp){
	Line::constant_term_ = temp;
}
void Line::set_gradient(float temp){
	Line::gradient_ = temp;
}
