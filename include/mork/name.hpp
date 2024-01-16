#pragma once

#include <string>

namespace Mork {
class Name {
    public:
        static Name parse();

        std::string val;
};
} //namespace Mork
