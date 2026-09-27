#include "log.h"
#include <filesystem>
namespace fs = std::filesystem;

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Nebyl zadan vstupni soubor!");
        return -1;
    }
    std::string mode;
    mode = fs::path(argv[1]).filename().string();

    if (mode == "-a")
    {
        log_acess(argv[2]);
    }
    if (mode == "-s")
    {
        log_stat(argv[2]);
    }
    if (mode == "-l")
    {
        log_lstat(argv[2]);
    }
    if (mode == "-f")
    {
        log_fstat(argv[2]);
    }
    return 0;
}