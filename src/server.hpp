//
//  server.hpp
//  alpha
//
//  Created by Alex Yesmanchyk on 4/12/24.
//

#ifndef server_hpp
#define server_hpp

#include <spdlog/spdlog.h>

namespace alpha {

using spdlog_ptr = std::shared_ptr<spdlog::logger>;

class server
{
public:
    server(spdlog_ptr logger) : log(logger)
    {
        log->info("server created");
    }
    
    ~server()
    {
        log->info("server destroyed");
    }
private:
    spdlog_ptr log;
};

} // namespace alpha

#endif /* server_hpp */
