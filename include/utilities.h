//
// Created by tyoun on 11/16/2021.
//

#ifndef TEXT_QUERY_UTILITIES_H
#define TEXT_QUERY_UTILITIES_H

#include <string>


std::string make_plural(std::size_t ctr, const std::string &word,
                                         const std::string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

#endif //TEXT_QUERY_UTILITIES_H
