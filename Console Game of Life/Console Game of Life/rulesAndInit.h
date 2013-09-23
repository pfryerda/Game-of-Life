//
//  rulesAndInit.h
//  Console Game of Life
//
//  Created by Peter Fryer-Davis on 2013-05-08.
//  Copyright (c) 2013 Peter Fryer-Davis. All rights reserved.
//

#ifndef Console_Game_of_Life_rulesAndInit_h
#define Console_Game_of_Life_rulesAndInit_h

#include "types.h"

int numberOfNeighboursForCell (imatrix grid, int r, int c);
int nextCellState (int state, int numNeighbours);
imatrix initIMatrix (int numRows, int numCols);
imatrix newStateMatrix(imatrix grid, int numRows, int numCols);


#endif
