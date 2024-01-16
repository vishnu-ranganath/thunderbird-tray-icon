#pragma once

#include <string>

namespace Mork {
class Value {
    public:
        static Value parse();

        std::string val;
};
} //namespace Mork
