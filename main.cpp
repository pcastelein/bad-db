#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include "database.cpp"

using namespace std;

// enum CommandType
// {
//     GET,
//     SET
// };

// struct Command
// {
//     string name;
//     CommandType type;
//     vector<string> args;
// };

/**
 * The main input/output loop should happen here
 **/

int main()
{
    cout << "let's do database things\n";
    string command = "";
    Database database = Database();
    // int lineno = 0;
    // for (string line; getline(cin, line);)
    // { // read into line buffer
    //     ++lineno;
    //     smatch matches;                       //matched strings go here
    //     if (regex_search(line, matches, pat)) // search for pat in line
    //         cout << lineno << ": " << matches[0] << '\n';
    // }
}