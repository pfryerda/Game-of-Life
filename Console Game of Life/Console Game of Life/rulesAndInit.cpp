//
//  rulesAndInit.cpp
//  Console Game of Life
//
//  Created by Peter Fryer-Davis on 2013-05-08.
//  Copyright (c) 2013 Peter Fryer-Davis. All rights reserved.
//

#include "rulesAndInit.h"

// Figures out the number of neighbours for a cell
int numberOfNeighboursForCell (imatrix grid, int r, int c)
{
    int numNeighbours = 0;
    bool populated = false;
    bool firstColEntry = false;
    bool lastColEntry = false;
    bool firstRowEntry = false;
    bool lastRowEntry = false;
    
    if(c == 0)
        firstColEntry = true;
    else if (c == grid[r].size() - 1)
        lastColEntry = true;
    
    if(r == 0)
        firstRowEntry = true;
    else if (r == grid.size() - 1)
        lastRowEntry = true;
    
    //cout << "lastRowEntry = " << lastRowEntry << endl;
    
    if (grid[r][c] == 1)
    {
        cout << "Entry is a 1." << endl;
        populated = true;
    }
    else
    {
        cout << "Entry is a 0." << endl;
    }
    
    //First Row
    if (firstRowEntry)
    {
        cout << "First Row";
        //First entry
        if (firstColEntry)
        {
            cout << " First Col" << endl;
            if (grid[r][c+1] == 1)
            {
                cout << "    Its right neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its right neighbour is 0" << endl;
            }
            
            if (grid[r+1][c] == 1)
            {
                cout << "    Its bottom neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its bottom neighbour is 0" << endl;
            }
            
            if (grid[r+1][c+1] == 1)
            {
                cout << "    Its bottom-right neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its bottom-right neighbour is 0" << endl;
            }
        }
        
        //Last entry
        else if (lastColEntry)
        {
            cout << " Last Col" << endl;
            if (grid[r][c-1] == 1)
            {
                cout << "    Its left neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its left neighbour is 0" << endl;
            }
            
            if (grid[r+1][c] == 1)
            {
                cout << "    Its bottom neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its bottom neighbour is 0" << endl;
            }
            
            if (grid[r+1][c-1] == 1)
            {
                cout << "    Its bottom-left neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its bottom-left neighbour is 0" << endl;
            }
        }
        
        //Every other entry
        else
        {
            cout << " A Col" << endl;
            if (grid[r][c+1] == 1)
            {
                cout << "    Its right neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its right neighbour is 0" << endl;
            }
            
            if (grid[r+1][c+1] == 1)
            {
                cout << "    Its bottom-right neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its bottom-right neighbour is 0" << endl;
            }
            
            if (grid[r+1][c] == 1)
            {
                cout << "    Its bottom neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its bottom neighbour is 0" << endl;
            }
            
            if (grid[r+1][c-1] == 1)
            {
                cout << "    Its bottom-left neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its bottom-left neighbour is 0" << endl;
            }
            
            if (grid[r][c-1] == 1)
            {
                cout << "    Its left neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its left neighbour is 0" << endl;
            }
        }
    }
    
    //Last Row
    else if (lastRowEntry)
    {
        cout << "Last Row" << endl;
        //First entry
        if (firstColEntry)
        {
            cout << " First Col" << endl;
            if (grid[r-1][c] == 1)
            {
                cout << "    Its top neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its top neighbour is 0" << endl;
            }
            
            if (grid[r-1][c+1] == 1)
            {
                cout << "    Its top-right neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its top-right neighbour is 0" << endl;
            }
            
            if (grid[r][c+1] == 1)
            {
                cout << "    Its right neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its right neighbour is 0" << endl;
            }
        }
        
        //Last entry
        else if (lastColEntry)
        {
            cout << " Last Col" << endl;
            if (grid[r-1][c] == 1)
            {
                cout << "    Its top neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its top neighbour is 0" << endl;
            }
            
            if (grid[r][c-1] == 1)
            {
                cout << "    Its left neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its left neighbour is 0" << endl;
            }
            
            if (grid[r-1][c-1] == 1)
            {
                cout << "    Its top-left neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its top-left neighbour is 0" << endl;
            }
        }
        
        else
        {
            cout << " A Col" << endl;
            if (grid[r-1][c] == 1)
            {
                cout << "    Its top neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its top neighbour is 0" << endl;
            }
            if (grid[r-1][c+1] == 1)
            {
                cout << "    Its top-right neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its top-right neighbour is 0" << endl;
            }
            
            if (grid[r][c+1] == 1)
            {
                cout << "    Its right neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its right neighbour is 0" << endl;
            }
            
            if (grid[r][c-1] == 1)
            {
                cout << "    Its left neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its left neighbour is 0" << endl;
            }
            
            if (grid[r-1][c-1] == 1)
            {
                cout << "    Its top-left neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its top-left neighbour is 0" << endl;
            }
            
            
        }
    }
    
    //Every Other Row
    else
    {
        cout << "Normal row" << endl;
        //First entry
        if (firstColEntry)
        {
            cout << " First Col" << endl;
            if (grid[r-1][c] == 1)
            {
                cout << "    Its top neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its top neighbour is 0" << endl;
            }
            
            if (grid[r-1][c+1] == 1)
            {
                cout << "    Its top-right neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its top-right neighbour is 0" << endl;
            }
            
            if (grid[r][c+1] == 1)
            {
                cout << "    Its right neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its right neighbour is 0" << endl;
            }
            
            if (grid[r+1][c+1] == 1)
            {
                cout << "    Its bottom-right neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its bottom-right neighbour is 0" << endl;
            }
            
            
            if(grid[r+1][c] == 1)
            {
                cout << "    Its bottom neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its bottom neighbour is 0" << endl;
            }
        }
        
        //Last entry
        else if (lastColEntry)
        {
            cout << " Last Col" << endl;
            if (grid[r-1][c] == 1)
            {
                cout << "    Its top neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its top neighbour is 0" << endl;
            }
            
            if(grid[r+1][c] == 1)
            {
                cout << "    Its bottom neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its bottom neighbour is 0" << endl;
            }
            
            if (grid[r+1][c-1] == 1)
            {
                cout << "    Its bottom-left neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its bottom-left neighbour is 0" << endl;
            }
            
            if (grid[r][c-1] == 1)
            {
                cout << "    Its left neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its left neighbour is 0" << endl;
            }
            
            if (grid[r+1][c-1] == 1)
            {
                cout << "    Its top-left neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its top-left neighbour is 0" << endl;
            }
        }
        
        else
        {
            cout << " A Col" << endl;

            if (grid[r-1][c] == 1)
            {
                cout << "    Its top neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its top neighbour is 0" << endl;
            }
            
            if (grid[r-1][c+1] == 1)
            {
                cout << "    Its top-right neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its top-right neighbour is 0" << endl;
            }
            
            if (grid[r][c+1] == 1)
            {
                cout << "    Its right neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its right neighbour is 0" << endl;
            }
            
            if (grid[r+1][c+1] == 1)
            {
                cout << "    Its bottom-right neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its bottom-right neighbour is 0" << endl;
            }
            
            if(grid[r+1][c] == 1)
            {
                cout << "    Its bottom neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its bottom neighbour is 0" << endl;
            }
            
            if (grid[r+1][c-1] == 1)
            {
                cout << "    Its bottom-left neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its bottom-left neighbour is 0" << endl;
            }
            
            if (grid[r][c-1] == 1)
            {
                cout << "    Its left neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its left neighbour is 0" << endl;
            }
            
            if (grid[r-1][c-1] == 1)
            {
                cout << "    Its top-left neighbour is 1" << endl;
                numNeighbours++;
            }
            else
            {
                cout << "    Its top-left neighbour is 0" << endl;
            }
        }
    }
    
    if(numNeighbours > 4)
    {
        cout << "Something is wrong, this element on row=" << r << " col=" << c << " has more than 4 neighbours!!!!" << endl;
        return 0;
    }
    
    return numNeighbours;
}

// Returns either a 1 or a 0 depending if the cell lives or dies by the rules
int nextCellState (int state, int numNeighbours)
{
    int nextState = 1;
    
    if (numNeighbours < 2)
        nextState = 0;
    else if (numNeighbours > 3)
        nextState = 0;
    else if (numNeighbours == 3 && state == 0)
        nextState = 1;
    else if ( (numNeighbours == 2 || numNeighbours == 3) && state == 1)
        nextState = 1;
    else
        nextState = 0;
    
    return nextState;
}

// Initializes an imatrix with all 0's
imatrix initIMatrix (int numRows, int numCols)
{
    imatrix returnGrid;
    
    for (int r = 0; r < numRows; r++)
    {
        ivec row;
        for (int c = 0; c < numCols; c++)
        {
            row.push_back(0);
        }
        returnGrid.push_back(row);
    }
    
    return returnGrid;
}

//Creates the new matrix state
imatrix newStateMatrix(imatrix grid, int numRows, int numCols)
{
    imatrix retStateMatrix = initIMatrix(numRows, numCols);
    
    for (int rowCount = 0; rowCount < numRows; rowCount++)
    {
        for (int colCount = 0; colCount < numCols; colCount++)
        {
            // identify number of neighbours of each cell
            int numNeighbours = numberOfNeighboursForCell(grid, rowCount, colCount);
            
            // apply rules to the cell to see if it lives or dies
            int nextState = nextCellState(grid[rowCount][colCount], numNeighbours);
            
            // put the newCellState into the nextStateMatrix
            retStateMatrix[rowCount][colCount] = nextState;
        }
    }
    
    return retStateMatrix;
}
