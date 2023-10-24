#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <functional>
#include "utility.h"

using namespace std;
using func = function<void(int*, vector<string>)>;

using func = function<void(int*, vector<string>, int*)>;

int part_1(vector<string> data, func);
int part_2(vector<string> data, func);

void nop(int *accumulator, vector<string>, int *instruction);
void acc(int *accumulator, vector<string>, int *instruction);
void jmp(int *accumulator, vector<string>, int *instruction);

int main(int argc, char const *argv[])
{
    vector<string> data = read_input("./input");

    map<string, func> instructions
    {
        {"nop", nop},
        {"acc", acc},
        {"jmp", jmp}
    };

    int accumulator = 0;

    cout << "Part 1: " << part_1(data, instructions) << endl;
    return 0;
}

int part_1(vector<string> data, map< string, func> instructions)
{
    int accumulator = 0;

    vector<int> readInstructions;

    for (int instruction = 0; instruction < data.size(); instruction++)

    return accumulator;
}