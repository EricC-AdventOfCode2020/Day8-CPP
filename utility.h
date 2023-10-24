#include <fstream>
#include <sstream>
#include <vector>
#include <string>

std::vector<std::string> read_input(std::string path)
{
    std::vector<std::string> data;

    std::ifstream stream;
    stream.open(path);

    std::string line;

    if (stream.is_open())
    {
        while (getline(stream, line))
        {
            data.push_back(line);
        }
    }

    return data;
}
std::vector<std::string> split_str(std::string line, char split)
{
    // i love you stack overflow user "thelazydeveloper"

    std::stringstream test(line);
    std::string segment;
    std::vector<std::string> subStrings;

    while (getline(test, segment, split))
    {
        subStrings.push_back(segment);
    }

    return subStrings;
}