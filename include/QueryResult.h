//
// Created by tyoun on 11/16/2021.
//

#ifndef TEXT_QUERY_QUERYRESULT_H
#define TEXT_QUERY_QUERYRESULT_H

#include <iostream>
#include <memory>
#include <string>
#include <set>
#include <vector>

class QueryResult {
    using line_no = std::vector<std::string>::size_type;

    friend std::ostream& print(std::ostream&, const QueryResult&);

public:
    QueryResult(std::string s,
                std::shared_ptr<std::set<line_no>> p,
                std::shared_ptr<std::vector<std::string>> f):
                sought(s), lines(p), file(f) {}
private:
    std::string sought;     // word this query represents
    std::shared_ptr<std::set<line_no>> lines; // lines it's on
    std::shared_ptr<std::vector<std::string>> file; // f
};


#endif //TEXT_QUERY_QUERYRESULT_H
