
#include "main.hpp"
#include "stdc++.hpp"
#include "sysinfo.hpp"

int main(){
    // tests
    /// System information
    mproc::sysinfo s;
    std::cout << "Kernel version: " << s.get_kernel() << std::endl
    << "OS name: " << s.get_os() << std::endl
    << "Username: "<< s.get_user() << std::endl
    << "Arch: "<< s.get_arch() << std::endl;
    return EXIT_SUCCESS;
}
