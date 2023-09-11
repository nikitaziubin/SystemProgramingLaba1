// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>


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
        //in >> line;
        getline(in, line);
        cout << line << endl;
    }
    in.close();

    string lineX;
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
            lines[j] = lineX;
            lineX = "";
            j++;
        }
        i++;
    } while (i <= lineLength);

    //for (int i = 0; i <= lineLength; i++)
    //{

    //    int a = int(line[i]);
    //    if (int(line[i]) >= 65 and line[i] <= 90 || line[i] >= 97 and line[i] <= 122)
    //    {
    //        lineX += line[i];
    //    }
    //    else
    //    {
    //        lines[j] = lineX;
    //        lineX = "";
    //        j++;
    //    }
    //}

    i = 0;
    while (lines[i] != "")
    {
        cout << lines[i] << " " << endl;
        i++;
    }




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
