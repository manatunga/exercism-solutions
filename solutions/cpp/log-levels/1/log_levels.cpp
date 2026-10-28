#include <string>

namespace log_line {
std::string message(std::string line) {
    int start = line.find(" ") + 1;
    std::string extracted = line.substr(start);
    return extracted;
}

std::string log_level(std::string line) {
    int start = line.find("[") + 1;
    int end = line.find("]");
    int length = end - start;
    std::string extracted = line.substr(
        start, length
    );
    return extracted;
}

std::string reformat(std::string line) {
    std::string message = log_line::message(line);
    std::string level = log_line::log_level(line);
    std::string reformatted = message + " (" + level + ")";
    return reformatted;
}
}  // namespace log_line
