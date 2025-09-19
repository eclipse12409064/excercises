#include <string>

namespace log_line {
std::string message(std::string line) {
    char idx = line.find(" ");
    
    std::string msg = line.substr((int)idx+1);
    

    return msg;
}

std::string log_level(std::string line) {
    char idx = line.find(" ");
    std::string lvl = line.substr(1, (int)idx-3);
    

    return lvl;
}

std::string reformat(std::string line) {
    // return the reformatted message

    std::string msg = message(line);
    std::string lvl = log_level(line);
    std::string new_msg = msg+ " (" + lvl + ")";
    

    return new_msg;
    
}
    
}  // namespace log_line
