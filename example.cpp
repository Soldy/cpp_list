#include <string>
#include <iostream>
#include "subs/trim/just_trim.hpp"
#include "list.hpp"

int main(){
    try{
        std::vector<std::string> list = simple_list::read("example.lst");
        for(std::string &v : list){
            std::cout << "test result 1" << v << " |" << std::endl;
        }
     }catch (const std::ios_base::failure& e) { 
        std::cerr << e.what() << std::endl;

     }
    return 0;
}
