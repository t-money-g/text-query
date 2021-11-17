//
// Created by tyoun on 11/16/2021.
//

#include "QueryResult.h"
#include <iostream>
#include "utilities.h"

using std::ostream;

ostream& print(ostream &os, const QueryResult &qr)
{
    // if the word was found print the count and all occurrences
    os << qr.sought << " occurs " << qr.lines->size() << " "
        << make_plural(qr.lines->size(), "time", "s") << std::endl;

    for( auto num: *qr.lines) // for every element in the set
        // don't confuse the user with text lines starting at 0
        os << "\t(line " << num + 1 << ") "
           << *(qr.file->begin() + num) << std::endl;
    return os;
}