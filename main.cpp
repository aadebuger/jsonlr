#include "json.hpp"
#include <iostream>
// for convenience
using json = nlohmann::json;
int main()
{
    json j = "{ \"happy\": true, \"pi\": 3.141 }"_json;
    
    for (json::iterator it = j.begin(); it != j.end(); ++it) {
        std::cout << *it << '\n';
        std::cout << it.key() << " : " << it.value() << "\n";
    }

    for (auto& element : j) {
        std::cout << element <<  element.is_<<'\n';
    }

    
    std::cout<< j<< std::endl;
}
