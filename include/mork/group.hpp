#pragma once

#include <vector>

#include "dict.hpp"
#include "table.hpp"
#include "row.hpp"
#include "hex.hpp"

namespace Mork {
class Group {
    public:
        static Group parse();

        std::vector<Dict> dicts;
        std::vector<Table> tables;
        std::vector<Row> rows;
        Hex id;
};

enum class GroupType {
    COMMIT_GROUP,
    ABORT_GROUP
};
} //namespace Mork
