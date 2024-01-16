#pragma once

#include <vector>

#include "dict.hpp"
#include "table.hpp"
#include "group.hpp"
#include "row.hpp"

class File {
    public:
        std::vector<Dict> dicts;
        std::vector<Table> tables;
        std::vector<Group> groups;
        std::vector<Row> rows;
};
