//
//  retta.hpp
//  AA28_Piano_Cartesiano
//
//  Created by Leonardo Silvagni on 24/08/18.
//  Copyright © 2018 Leonardo Silvagni. All rights reserved.
//

#ifndef retta_hpp
#define retta_hpp
#include <iostream>
using std::string;
/*  From here there are a few consideration to do.
 *  The implementation of the UI assumes the straight line to be in its implicit form
 *  (ax+by+c=0), but we will also provide the angular coefficent or gradient (m) and the
 *  intercept on the y-axis (q) assuming the straight line to be in it's explicit form (y=mx+q)
 *  The Intercept on the y-axis is the var called y_interceptor
 */
class straight_line {
public:
    straight_line();
    ~straight_line();
//  This bool is forthe straight line with y_coefficent equal to 0, perpendicular to x axis
    bool isSpecial; // b == 0
//  Print the line equation in it's implicit or explicit form
    void print_implicit();
    void print_explicit();
//  Getters for implicit form equation members
    inline float get_x_coefficent(){return x_coefficent;};
    inline float get_y_coefficent(){return y_coefficent;};
    inline float get_constant_term(){return constant_term;};
//  Getters for explicit form equation members
    inline float get_gradient(){return gradient;};
    inline float get_y_interceptor(){return y_interceptor;};
//  Getters for ID's
    inline string get_line_name(){return line_name;};
    inline int get_line_id(){return line_id;};
//  ~~~~~~~~~~~~~~~~~~~~~~~
//  ~~~~~~~~Setters~~~~~~~~
//  ~~~~~~~~~~~~~~~~~~~~~~~
//  Setters for implicit form equation members
    void set_x_coefficent(float);
    void set_y_coefficent(float);
    void set_constant_term(float);
//  Setters for explicit form equation members
    void set_gradient(float);
    void set_y_interceptor(float);
//
private:
//  Members of the equation in it's implicit form ( ax+by+c=0 )
    float x_coefficent;
    float y_coefficent;
    float constant_term; // c in the example above
//  Explicit form equation members
    float gradient;
    float y_interceptor;
//  Now we have to know the name and the id of the line
    string line_name;
    int line_id;
};


#endif /* retta_hpp */
