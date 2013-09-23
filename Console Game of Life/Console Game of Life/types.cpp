//
//  types.cpp
//  Console Game of Life
//
//  Created by Peter Fryer-Davis on 2013-05-09.
//  Copyright (c) 2013 Peter Fryer-Davis. All rights reserved.
//

#include "types.h"

ostream & operator<<(ostream & stream, ivec & obj)
{
    for (int i = 0; i < obj.size(); i++)
    {
        stream << obj[i] << " ";
    }
    stream << endl;
    
    return stream;
}

ostream & operator<<(ostream & stream, imatrix & obj)
{
    for (int i = 0; i < obj.size(); i++)
    {
        stream << obj[i];
    }
    stream << endl;
        
    return stream;
}
