#include "alpha.h"
#include <vector>
#include <string>
#include <boost/ut.hpp>

int main() {
    alpha();
    
    std::vector<std::string> vec;
    vec.push_back("test_package");
    
    alpha_print_vector(vec);

    boost::ut::expect(true);
}
