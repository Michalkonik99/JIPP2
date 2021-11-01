#include "Figure.h"
using std::cout, std::cin, std::endl;

Figure::Figure(int vertex_number) {
    this->vertex_number = vertex_number;
    vertexes = new Point [vertex_number];
}

Figure::~Figure(){
    delete [] vertexes;
};

void Figure::set_vertexes() {
    for(int i = 0; i < vertex_number; ++i){
        while(1){
            cout << "Podaj wspolrzedne (x, y) wierzcholka nr " << i << " :" << endl;
            cin >> vertexes[i].axis_x >> vertexes[i].axis_y;

            if(check_input_correctness()) break;
        }
    }
}

void Figure::get_vertexes() {
    cout << "Nr" << "\tX" << "\tY" << endl << endl;
    for(int i = 0; i < vertex_number; ++i)
        cout << i << "\t" << vertexes[i].axis_x << "\t" << vertexes[i].axis_y << endl;
}