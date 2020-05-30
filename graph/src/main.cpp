#include <iostream>
#include "../include/GraphType.h"

using namespace std;

int main() {
    GraphType <int> thing;

    thing.AddVertex(2);
	thing.AddVertex(3);
	thing.AddEdge(2, 3, 5);
	cout << thing.EdgeExists(2,3) << endl;// outputs 1
	cout << thing.EdgeExists(3,2) << endl; // outputs 0, no edge
	if (thing.EdgeExists(2, 3))
		thing.DeleteEdge(2, 3);// deletes edge
	if (thing.EdgeExists(3, 2))// doesnt run because no edge
		thing.DeleteEdge(3, 2);
	cout << thing.EdgeExists(2, 3) << endl;// no edge, outputs 0
	cout << thing.EdgeExists(3, 2) << endl;// no edge ouputs 0
}