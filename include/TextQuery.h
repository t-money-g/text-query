//
// Created by tyoun on 11/16/2021.
//

#ifndef TEXT_QUERY_TEXTQUERY_H
#define TEXT_QUERY_TEXTQUERY_H

#include <fstream>
#include <vector>
#include <string>
#include <memory>
#include <map>
#include <set>

class QueryResult;          // declaration needed for return type in query function
class TextQuery {
public:
    using line_no = std::vector<std::string>::size_type;

    TextQuery(std::ifstream&);
    QueryResult query(const std::string&) const;

private:
    std::shared_ptr<std::vector<std::string>> file; // input file

    // map of each word to the set of the lines in which that word appers
    std::map<std::string,
            std::shared_ptr<std::set<line_no>>> wm;
};


#endif //TEXT_QUERY_TEXTQUERY_H
