// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
    string line;
    int b;
    string lines[10000];
    ifstream in;
    in.open("C:\\Users\\nikit\\source\\repos\\SystemProgramingLaba1\\Laba1.txt");
    bool a = in.is_open();
    
    if (a)
    {
        getline(in, line);
    }
    in.close();

    string lineX = "";
    int j = 0;
    int i = 0;
    int lineLength = line.length();
    do 
    {
        int a = int(line[i]);
        if (int(line[i]) >= 65 and line[i] <= 90 || line[i] >= 97 and line[i] <= 122)
        {
            lineX += line[i];
        }
        else
        {
            if (lineX != "")
            {
                lines[j] = lineX;
                lineX = "";
                j++;
            }
        }
        i++;
    } while (i <= lineLength);

    int size = 0;
    while (lines[size] != "")
    {
        cout << lines[size] << " " ;
        size++;
    }
    cout << endl;

    string linesWithOut[10000];
    i = 0;
    int k = 0;
    //int size = lines->size();

    while (lines[i] != "")
    {
        for (int j = i+1; j < size+1; j++)
        {
            if (j  == size)
            {
                linesWithOut[k] = lines[i];
                k++;
                break;
            }

            if (lines[i] != lines[j])
            {
                continue;
            }
            else
            {
                break;
            }
        }
        i++;
    }

    size = 0;
    while (linesWithOut[size] != "")
    {
        cout << linesWithOut[size] << " ";
        size++;
    }
    cout << endl;
    string linesFinal[1000];

    int smallest = 0;
    int iFinal = 0;
    for (int i = 0; i < size; i++)
    {
        if (linesWithOut[i].length() >= smallest)
        {
            if (linesWithOut[i].length() == smallest)
            {
                linesFinal[iFinal] = linesWithOut[i];
                iFinal++;
            }
            else
            {
                fill(linesFinal, linesFinal + size, "");
                iFinal = 0;
                linesFinal[iFinal] = linesWithOut[i];
                iFinal++; 
                smallest = linesWithOut[i].length();
            }

        }

    }

    size = 0;
    while (linesFinal[size] != "")
    {
        cout << linesFinal[size] << " ";
        size++;
    }
    cout << endl;
    
    string lines14[1000][2];
    int oneLineLength = linesFinal[0].length();
    int beigestM = 0;
    int midM = -1;
    for (int i = 0; i < size; i++)
    {
        for (int k = 0; k < oneLineLength; k++)
        {
            char a = linesFinal[i][k];
            char b = linesFinal[i + 1][k];
            if (a != b)
            {
                beigestM++;
            }
        }
        if (beigestM >= midM)
        {
            if (beigestM == midM)
            {
                lines14[i][0] = linesFinal[i];
                lines14[i][1] = linesFinal[i + 1];
            }
            else
            {
                /*midM = beigestM;
                beigestM = 0;
                fill(linesFinal, linesFinal + size, "");
                lines14[i][0] = linesFinal[i];
                lines14[i][1] = linesFinal[i + 1];*/
            }
        }
    }
}

