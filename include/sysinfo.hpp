#pragma once 

#include "stdc++.hpp"


namespace mproc {

    // Create map and table for system information
    class sysinfo {
    public:
        
        sysinfo(){
            initialize_info();
        }

        std::string get_kernel();
        std::string get_arch();
        std::string get_user();
        std::string get_os();
        
    private:
        void set_kernel(std::string __name);
        void set_arch(std::string __name);
        void set_user(std::string __name);
        void set_os(std::string __name);
        void initialize_info();
        std::string name_kernel;
        std::string name_arch;
        std::string name_user;
        std::string name_os;
       
    };
}
