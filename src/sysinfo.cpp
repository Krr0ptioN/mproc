
#include "sysinfo.hpp"
#include "dirs_table.hpp"
#include "utils.hpp"
#include <sys/utsname.h>


using namespace mproc;


std::string sysinfo::get_kernel(){
    return this->name_kernel;
}
std::string sysinfo::get_arch(){
    return this->name_arch;
}
std::string sysinfo::get_user(){
    return this->name_user;
}
std::string sysinfo::get_os(){
    return this->name_os;
}

void sysinfo::set_kernel(std::string __kernel_name) { 
    this->name_kernel = __kernel_name;
}

void sysinfo::set_arch(std::string __arch_name){
    this->name_arch = __arch_name;
}
void sysinfo::set_user(std::string __user_name) { 
    this->name_user = __user_name;
}
void sysinfo::set_os(std::string __os_name) { 
    this->name_os = __os_name;
}

// Initialize data the container 
void sysinfo::initialize_info(){
   
    struct utsname info;
    uname(&info);
    
    // Kernel version
    set_kernel(info.release);
    // OS name
    set_os(info.sysname);
    // CPU Archetecture name
    set_arch(info.machine);
    // Username
    set_user(std::string(getenv("USER")));
}
