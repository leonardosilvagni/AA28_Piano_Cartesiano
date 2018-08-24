//
//  retta.cpp
//  AA28_Piano_Cartesiano
//
//  Created by Leonardo Silvagni on 24/08/18.
//  Copyright © 2018 Leonardo Silvagni. All rights reserved.
//

#include "retta.hpp"
#include <iostream>
using std::string;
using std::cout;


/*~~~~~~~~~~~~~~~~~~~~~~~~~
 *~~~~~~~Constructor~~~~~~~
 *~~~~~~~~~~~~~~~~~~~~~~~~~
 */
line::line(int ID_temp, string line_Name_temp, float x_Coeff_temp,\
           float y_Coeff_temp,float constant_Term_temp){
    cout << "Setting the line Id...";
    line::line_id = ID_temp;
    cout << "Done!\nSetting Line Name...";
    line::line_name = line_Name_temp;
    cout << "Done!\nSettnig Equation coefficents and constant term...";
    line::set_x_coefficent(x_Coeff_temp);
    line::set_y_coefficent(y_Coeff_temp);
    line::set_constant_term(constant_Term_temp);
    cout << "Done!\nMaximize efficency...Done!\n";
    line::set_gradient(-(x_Coeff_temp/y_Coeff_temp));
    line::set_y_interceptor(-(constant_Term_temp/y_Coeff_temp));
//  Set the gradient and the y_interceptor for future requests
//  Prints the explicit or implicit equation, depending on y_coeff
    line::print_explicit();
};
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *~~~~~~~~Void Functions~~~~~~~~~~
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
// +ax +by +c = 0
void line::print_explicit(){
    if (!line::isSpecial) {
        cout <<std::showpos<< line::get_x_coefficent()<<"x "<<std::showpos<<\
        line::get_y_coefficent()<<"y "<<\
        std::showpos<<line::get_constant_term()<<std::endl;
    }else print_implicit();
}
// y = mx +q
void line::print_implicit(){
    cout << "y = " <<std::showpos<<line::get_gradient()<<"x "<<std::showpos<<\
    line::get_y_interceptor();
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *~~~~~~~~Setters Functions~~~~~~~~~~
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

void line::set_y_interceptor(float temp){
	line::y_interceptor = temp;
}
void line::set_y_coefficent(float temp){
	line::y_coefficent = temp;
}
void line::set_x_coefficent(float temp){
	line::x_coefficent = temp;
}
void line::set_constant_term(float temp){
	line::constant_term = temp;
}
void line::set_gradient(float temp){
	line::gradient = temp;
}











