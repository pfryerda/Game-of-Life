//
//  types.h
//  Console Game of Life
//
//  Created by Peter Fryer-Davis on 2013-05-09.
//  Copyright (c) 2013 Peter Fryer-Davis. All rights reserved.
//

#ifndef __Console_Game_of_Life__types__
#define __Console_Game_of_Life__types__

#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef vector<int> ivec;
typedef vector<ivec> imatrix;
typedef vector <string> svec;

ostream & operator<<(ostream & stream, ivec & obj);
ostream & operator<<(ostream & stream, imatrix & obj);


#endif /* defined(__Console_Game_of_Life__types__) */
