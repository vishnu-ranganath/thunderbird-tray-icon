#pragma once

#include <vector>

#include "dict.hpp"
#include "table.hpp"
#include "group.hpp"
#include "row.hpp"

namespace Mork {
class File {
    public:
        static File parse();

        std::vector<Dict> dicts;
        std::vector<Table> tables;
        std::vector<Group> groups;
        std::vector<Row> rows;
};
} //namespace Mork
