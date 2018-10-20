//
//  line_vector.hpp
//  AA28_Piano_Cartesiano
//
//  Created by Leonardo Silvagni on 03/09/18.
//  Copyright © 2018 Leonardo Silvagni. All rights reserved.
//

#ifndef line_vec_hpp
#define line_vec_hpp
#include <vector>
#include "retta.hpp"
#include "point.cpp"
#include <boost/variant.hpp>

std::vector<boost::variant<Line*,Point*> > vector;
void push_crt_obj(bool item){
    if(item==1) {vector.push_back(new Line(1,0,"",0,0,0));}
    if(item==0) {vector.push_back(new Point);}
};


#endif /* line_vector_hpp */
