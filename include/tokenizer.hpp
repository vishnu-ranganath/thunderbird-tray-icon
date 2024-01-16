#pragma once

#include <deque>
#include <iostream>
#include <istream>
#include <sstream>
#include <string>

class Tokenizer {
    public:
        static void init(std::istream& is);
        static bool has_next_token();
        static std::string get_token();

    private:
        static std::deque<std::istringstream> line_buf;
        static std::deque<std::string> token_buf;
};
