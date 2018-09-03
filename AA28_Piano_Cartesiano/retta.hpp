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
class Line {
public:
    Line(bool,int,string,float,float,float);
    ~Line(){};
//  This bool is forthe straight line with y_coefficent equal to 0, perpendicular to x axis
    bool isSpecial; // b == 0
//  Print the line equation in it's implicit or explicit form
    void PrintImplicit();
    void PrintExplicit();
    void PrintSpecial();
//  Getters for implicit form equation members
    inline float get_x_coefficent(){return x_coefficent_;};
    inline float get_y_coefficent(){return y_coefficent_;};
    inline float get_constant_term(){return constant_term_;};
//  Getters for explicit form equation members
    inline float get_gradient(){return gradient_;};
    inline float get_y_interceptor(){return y_interceptor_;};
//  Getters for ID's
    inline string get_line_name(){return line_name_;};
    inline int get_line_id(){return line_id_;};
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

private:
//  Members of the equation in it's implicit form ( ax+by+c=0 )
    float x_coefficent_;
    float y_coefficent_;
    float constant_term_; // c in the example above
//  Explicit form equation members
    float gradient_;
    float y_interceptor_;
//  Now we have to know the name and the id of the line
    string line_name_;
    int line_id_;
};


#endif /* retta_hpp */
