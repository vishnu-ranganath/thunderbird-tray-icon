#pragma once

#include <deque>
#include <istream>
#include <sstream>
#include <string>

#include "tokenizer.hpp"

void Tokenizer::init(std::istream& is) {
    std::string next_line;
    while(std::getline(is, next_line)) {
        line_buf.emplace_back(next_line);
    }
}

bool Tokenizer::has_next_token() {
    while(!line_buf.empty() && token_buf.empty()) {
        std::istringstream& next_line = line_buf.front();
        std::string next_token;
        while(next_line >> next_token) {
            token_buf.push_back(next_token);
        }
        line_buf.pop_front();
    }
    return !token_buf.empty();
}

std::string Tokenizer::get_token() {
    auto t = token_buf.front();
    token_buf.pop_front();
    return t;
}

std::deque<std::istringstream> Tokenizer::line_buf = std::deque<std::istringstream>();
std::deque<std::string> Tokenizer::token_buf = std::deque<std::string>();
