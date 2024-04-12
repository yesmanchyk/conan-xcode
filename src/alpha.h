#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define ALPHA_EXPORT __declspec(dllexport)
#else
  #define ALPHA_EXPORT
#endif

ALPHA_EXPORT void alpha();
ALPHA_EXPORT void alpha_print_vector(const std::vector<std::string> &strings);
