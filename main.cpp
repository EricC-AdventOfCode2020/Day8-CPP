#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
#include "utility.h"

using namespace std;

int part_1(vector<string> data);
int part_2(vector<string> data);

void nop(int *accumulator, vector<string> split, int *instruction);
void acc(int *accumulator, vector<string> split, int *instruction);
void jmp(int *accumulator, vector<string> split, int *instruction);

int main(int argc, char const *argv[])
{
    vector<string> data = read_input("./input");

    int accumulator = 0;

    cout << "Part 1: " << part_1(data) << endl;
    return 0;
}

int part_1(vector<string> data)
{
    int accumulator = 0;

    vector<int> readInstructions;
    bool repeatingInstruction = false;

    for (int i = 0; i < data.size(); i++)
    {
        readInstructions.push_back(i);
    }

    for (int instruction = 0; !repeatingInstruction;)
    {
        // cout << instruction << " " << accumulator << " " << repeatingInstruction << endl;

        vector<string> split = split_str(data[instruction], ' ');
        
        for (int i = 0; i < readInstructions.size(); i++)
        {
            if (readInstructions[i] == instruction)
            {
                
            }
        }

        if (!repeatingInstruction)
        {

            if (split[0] == "nop")
            {
                nop(&accumulator, split, &instruction);
            }
            else if (split[0] == "acc")
            {
                acc(&accumulator, split, &instruction);
            }
            else
            {
                jmp(&accumulator, split, &instruction);
            }
        }
    }

    return accumulator;
}

void nop(int *accumulator, vector<string> split, int *instruction)
{
    ++*instruction;
}
void acc(int *accumulator, vector<string> split, int *instruction)
{
    if (split[1][0] == '+')
    {
        string value = "";
        for (int i = 0; i < split[1].length() - 1; i++)
        {
            value += split[1][i + 1];
        }

        *accumulator += stoi(value);
    }
    else
    {
        string value = "";
        for (int i = 0; i < split[1].length() - 1; i++)
        {
            value += split[1][i + 1];
        }

        *accumulator -= stoi(value);
    }

    ++*instruction;
}
void jmp(int *accumulator, vector<string> split, int *instruction)
{
    if (split[1][0] == '+')
    {
        string value = "";
        for (int i = 0; i < split[1].length() - 1; i++)
        {
            value += split[1][i + 1];
        }

        *instruction += stoi(value);
    }
    else
    {
        string value = "";
        for (int i = 0; i < split[1].length() - 1; i++)
        {
            value += split[1][i + 1];
        }

        *instruction -= stoi(value);
    }
}
