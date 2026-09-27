#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

bool log_acess(std::string path);
void log_stat(std::string path);
void log_lstat(std::string path);
void log_fstat(std::string path);