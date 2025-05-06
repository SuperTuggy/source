#include <iostream>
#include <osmium/io/any_input.hpp>
#include <osmium/handler.hpp>
#include "DataExtraction/DataExtraction.hpp"
#include "osmium/visitor.hpp"



int main (int argc, char* argv[]) {
    
   if (argc < 2) {
    std::cerr << "Error thingy magigly" << std::endl;
    return 1;
   }

  try {
    osmium::io::Reader my_file(argv[1]);
    DataExtractor handler;

    osmium::apply(my_file, handler);
    std::cout << "The number of nodes in the file are: " << handler.get_node_count() << std::endl;
    std::cout << "The number of ways in the file are: " << handler.get_way_count() << std::endl;
    std::cout << "The number of relations in the file are: " << handler.get_relation_count() << std::endl;
    my_file.close();

    

  } catch (const std::exception& e) {
    std::cerr << "Error" << e.what() << std::endl;

  }
}

