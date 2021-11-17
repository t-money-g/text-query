// ==========================================================================
//
// Your license here.
//
// ==========================================================================

/// Macro to determine whether to run tests or skip the runner
#define TESTS_ENABLED 0
#define CATCH_CONFIG_RUNNER
#include <catch2/catch.hpp>
#include <iostream>
#include <string>
#include <fstream>
#include "TextQuery.h"
#include "QueryResult.h"

using std::string;
using std::cout, std::cin;

/// using the text query class r
void runQueries(std::ifstream &infile)
{
    /// infile is an fstream that is the file we want to query
    TextQuery tq(infile);       // store the file and build the query map
    while(true) {
        cout << "enter word to look for, or q to quit: ";
        string s;
        /// stop if we hit end of file on the input or if a 'q' is entered
        if(!(cin >> s) || s == "q") break;
       print(cout, tq.query(s)) << std::endl;
    }

}

int main(int argc, char* argv[])
{
#if  TESTS_ENABLED == 1
    int result = Catch::Session().run(argc, argv);
#endif

    std::cout << "Good day!" << std::endl;
    std::ifstream in("example.txt");
    runQueries(in);
#if TESTS_ENABLED == 1
    return result;
#else
    return 0;
#endif

}

