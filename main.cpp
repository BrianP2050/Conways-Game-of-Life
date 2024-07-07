/*
 *  Name: Brian Pedroza
 *  Description: Program replicates Conway's Game of Life by taking a two dimentional array and calculating the next state of the array grid.
 *  Input: User inputs file to read from and a two dimentional array is taken in.
 *  Output: The user is prompted for a file name and an error outputs if the name is invalid. Then the current and next iteration of the two dimentional array is printed to the terminal.
 */
#include <iostream>
#include <fstream>
using namespace std;

const int ROW = 9;
const int COLUMN = 9;

int main()
{
    string fileName = "Chef Skinner";
    ifstream inputFile;
   
   //Enter file name to import initial grid
    do
    {
        cout << "Enter a file name: ";
        cin  >> fileName;
       
        inputFile.open (fileName);
       
        if (!inputFile.is_open())
        {
            cout << "Error: Invalid filename" << endl;
        }
       
    } while (!inputFile.is_open());
   
   
    int conArray[ROW][COLUMN] = {0};
    int newArray[ROW][COLUMN] = {0};

    // Intake grid from file
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            inputFile >> conArray[i][j];
           
            if (!inputFile)
            {
                if (inputFile.eof())
                {
                    inputFile.clear();
                    inputFile.ignore(1000,'\n');
                    cout << "Error in line" << endl;
                }
            }
        }
    }
   
   
    // Duplicate data from array 1 to array 2
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            newArray[i][j] = conArray[i][j];
           
            if (!inputFile)
            {
                if (inputFile.eof())
                {
                    inputFile.clear();
                    inputFile.ignore(1000,'\n');
                    cout << "Error in line" << endl;
                }
            }
        }
    }
   
   
    // Find next iteration of array
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            int liveCount = 0;
           
            // Top left corner
            if (i == 0 && j == 0)
            {
                if (conArray[i][j+1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i+1][j] == 1)
                {
                    liveCount++;
                }
                if (conArray[i+1][j+1] == 1)
                {
                    liveCount++;
                }
               
                // Bring back to life
                if ((conArray[i][j] == 0) && (liveCount == 3))
                {
                    newArray[i][j] = 1;
                }
               
                // Solitude
                else if ((conArray[i][j] == 1) && (liveCount <= 1))
                {
                    newArray[i][j] = 0;
                }
               
                // Overpopulation
                else if ((conArray[i][j] == 1) && (liveCount > 3))
                {
                    newArray[i][j] = 0;
                }

            }
           
            // Top right corner
            else if (i == 0 && j == COLUMN - 1)
            {
                if (conArray[i][j-1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i+1][j-1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i+1][j] == 1)
                {
                    liveCount++;
                }
               
                // Bring back to life
                if ((conArray[i][j] == 0) && (liveCount == 3))
                {
                    newArray[i][j] = 1;
                }
               
                // Solitude
                else if ((conArray[i][j] == 1) && (liveCount <= 1))
                {
                    newArray[i][j] = 0;
                }
               
                // Overpopulation
                else if ((conArray[i][j] == 1) && (liveCount > 3))
                {
                    newArray[i][j] = 0;
                }
            }
           
            // Bottom left corner
            else if (i == ROW - 1 && j == 0)
            {
                if (conArray[i-1][j] == 1)
                {
                    liveCount++;
                }
                if (conArray[i-1][j+1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i][j+1] == 1)
                {
                    liveCount++;
                }
               
                // Bring back to life
                if ((conArray[i][j] == 0) && (liveCount == 3))
                {
                    newArray[i][j] = 1;
                }
               
                // Solitude
                else if ((conArray[i][j] == 1) && (liveCount <= 1))
                {
                    newArray[i][j] = 0;
                }
               
                // Overpopulation
                else if ((conArray[i][j] == 1) && (liveCount > 3))
                {
                    newArray[i][j] = 0;
                }

            }
           
            // Bottom right corner
            else if (i == ROW - 1 && j == COLUMN - 1)
            {
                if (conArray[i-1][j-1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i-1][j] == 1)
                {
                    liveCount++;
                }
                if (conArray[i][j-1] == 1)
                {
                    liveCount++;
                }
               
                // Bring back to life
                if ((conArray[i][j] == 0) && (liveCount == 3))
                {
                    newArray[i][j] = 1;
                }
               
                // Solitude
                else if ((conArray[i][j] == 1) && (liveCount <= 1))
                {
                    newArray[i][j] = 0;
                }
               
                // Overpopulation
                else if ((conArray[i][j] == 1) && (liveCount > 3))
                {
                    newArray[i][j] = 0;
                }

            }
           
            // Top
            else if ((i == 0) && (j > 0 && j < COLUMN - 1))
            {
                if (conArray[i][j-1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i][j+1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i+1][j-1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i+1][j] == 1)
                {
                    liveCount++;
                }
                if (conArray[i+1][j+1] == 1)
                {
                    liveCount++;
                }
               
                // Bring back to life
                if ((conArray[i][j] == 0) && (liveCount == 3))
                {
                    newArray[i][j] = 1;
                }
               
                // Solitude
                else if ((conArray[i][j] == 1) && (liveCount <= 1))
                {
                    newArray[i][j] = 0;
                }
               
                // Overpopulation
                else if ((conArray[i][j] == 1) && (liveCount > 3))
                {
                    newArray[i][j] = 0;
                }
               
            }
           
            // Right
            else if ((i > 0 && i < ROW - 1) && (j == COLUMN - 1))
            {
                if (conArray[i-1][j-1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i-1][j] == 1)
                {
                    liveCount++;
                }
                if (conArray[i][j-1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i+1][j-1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i+1][j] == 1)
                {
                    liveCount++;
                }
               
                // Bring back to life
                if ((conArray[i][j] == 0) && (liveCount == 3))
                {
                    newArray[i][j] = 1;
                }
               
                // Solitude
                else if ((conArray[i][j] == 1) && (liveCount <= 1))
                {
                    newArray[i][j] = 0;
                }
               
                // Overpopulation
                else if ((conArray[i][j] == 1) && (liveCount > 3))
                {
                    newArray[i][j] = 0;
                }
               
            }
           
            // Bottom
            else if ((i == ROW - 1) && (j > 0 && j < COLUMN - 1))
            {
                if (conArray[i-1][j-1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i-1][j] == 1)
                {
                    liveCount++;
                }
                if (conArray[i-1][j+1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i][j-1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i][j+1] == 1)
                {
                    liveCount++;
                }
               
                // Bring back to life
                if ((conArray[i][j] == 0) && (liveCount == 3))
                {
                    newArray[i][j] = 1;
                }
               
                // Solitude
                else if ((conArray[i][j] == 1) && (liveCount <= 1))
                {
                    newArray[i][j] = 0;
                }
               
                // Overpopulation
                else if ((conArray[i][j] == 1) && (liveCount > 3))
                {
                    newArray[i][j] = 0;
                }
               
            }
           
            // left
            else if ((i > 0 && i < ROW - 1) && (j == 0))
            {
                if (conArray[i-1][j] == 1)
                {
                    liveCount++;
                }
                if (conArray[i-1][j+1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i][j+1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i+1][j] == 1)
                {
                    liveCount++;
                }
                if (conArray[i+1][j+1] == 1)
                {
                    liveCount++;
                }
               
                // Bring back to life
                if ((conArray[i][j] == 0) && (liveCount == 3))
                {
                    newArray[i][j] = 1;
                }
               
                // Solitude
                else if ((conArray[i][j] == 1) && (liveCount <= 1))
                {
                    newArray[i][j] = 0;
                }
               
                // Overpopulation
                else if ((conArray[i][j] == 1) && (liveCount > 3))
                {
                    newArray[i][j] = 0;
                }
               
            }
           
            // Middle
            else
            {
                if (conArray[i-1][j-1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i-1][j] == 1)
                {
                    liveCount++;
                }
                if (conArray[i-1][j+1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i][j-1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i][j+1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i+1][j-1] == 1)
                {
                    liveCount++;
                }
                if (conArray[i+1][j] == 1)
                {
                    liveCount++;
                }
                if (conArray[i+1][j+1] == 1)
                {
                    liveCount++;
                }
               
                // Bring back to life
                if ((conArray[i][j] == 0) && (liveCount == 3))
                {
                    newArray[i][j] = 1;
                }
               
                // Solitude
                else if ((conArray[i][j] == 1) && (liveCount <= 1))
                {
                    newArray[i][j] = 0;
                }
               
                // Overpopulation
                else if ((conArray[i][j] == 1) && (liveCount > 3))
                {
                    newArray[i][j] = 0;
                }
            }
        }
    }
   
    // Print current grid to screen
    cout << "\nCurrent State:" << endl;
   
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            cout << conArray[i][j] << " ";
           
        }
        cout << endl;
    }
   
    // Print next state grid to screen
    cout << "\nNext State:" << endl;
   
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            cout << newArray[i][j] << " ";
           
        }

        if (i < ROW)
        {
        cout << endl;
        }
    }

   

    return 0;
}