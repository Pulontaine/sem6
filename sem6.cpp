#include <iostream>
#include <fstream>
#include "lab2_2_mirror/Graph.h"
#include "lab2_1_mirror/Matrix.h"
using namespace std;


int main(){
    graph::Graph<string, int, int> g;
    g["Москва"] = 1147;
    g["Санкт-Петербург"] = 1703;
    g["Новосибирск"] = 1893;
    g["Новгород"] = 859;
    g["Казань"] = 1005;
    g.insert_edge({"Санкт-Петербург", "Москва"}, 634);
    g.insert_edge({"Москва", "Казань"}, 717);
    g.insert_edge({"Казань", "Новгород"}, 322);
    g.insert_edge({"Казань", "Новосибирск"}, 2115);

    //2 задание:
    linalg::Matrix<int> adjacency_matrix = {{0,1,0,1}, {0,0,1,1}, {0,1,0,0}, {1,0,1,0}};

    //3 задание:
    //метод print_graphviz реализован в lab2_2_mirror в файлах .hpp и .h (в самом низу)
    std::ofstream graph_viz("graph_viz.gv");
    g.print_graphviz(graph_viz);
}