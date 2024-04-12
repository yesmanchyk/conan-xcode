//
//  server.cpp
//  alpha
//
//  Created by Alex Yesmanchyk on 4/12/24.
//

#include "server.hpp"
#include <spdlog/sinks/stdout_color_sinks.h>

int main(int argc, char* argv[])
{
    auto console = spdlog::stdout_color_mt("console");
    alpha::server server(console);
    return 0;
}
