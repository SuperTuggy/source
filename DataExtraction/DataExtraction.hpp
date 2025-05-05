#pragma once  
#include <osmium/handler.hpp>
#include <iostream>

class DataExtractor : public osmium::handler::Handler {
private:
    int node_count = 0;
    int way_count = 0;
    int relation_count = 0;

public:
    DataExtractor();

    void node(const osmium::Node&);
    void way(const osmium::Way&);
    void relation(const osmium::Relation&);

    int get_node_count() const { return node_count; }
    int get_way_count() const { return way_count; }
    int get_relation_count() const { return relation_count; }
};

