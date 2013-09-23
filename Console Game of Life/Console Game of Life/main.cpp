//
//  main.cpp
//  Console Game of Life
//
//  Created by Peter Fryer-Davis on 2013-04-21.
//  Copyright (c) 2013 Peter Fryer-Davis. All rights reserved.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

#include "rulesAndInit.h"

using namespace std;

// NEED TO GET THE OSTREAMS BACK!!!! ONE FOR ivec AND ONE FOR imatrix

int main(int argc, const char * argv[])
{
    imatrix grid;
    svec lines;
    
    int rows = 4;
    int cols = 4;
    
    // init matrix
    grid = initIMatrix(rows, cols);
    
    cout << "After initialization " << endl << grid << endl;
    
    cout << "Console Game of Life" << endl;
    
    //Retrieves strings line by line from the file
    string line;
    fstream myfile ("test.txt");
    
    if (myfile.is_open())
    {
        while ( myfile.good() )
        {
            getline (myfile,line);
            lines.push_back(line);
        }
        myfile.close();
    }
    
    else cout << "Unable to open file";
    
    // Populates the imatrix with the data from the lines
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < lines[0].size(); c+=2)
        {
            int ch = lines[r][c];
            int item = ch - '0'; //(either 1 or 0)
            grid[r][c/2] = item;
        }
    }
    
    cout << grid << endl;
    
    
    // Create the new State
    imatrix newState = newStateMatrix(grid, rows, cols);
    
    cout << newState << endl;
        
    return 0;
}




