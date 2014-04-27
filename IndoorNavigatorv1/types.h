
#include <map>
// where is dequeue used here? r
#include <deque>
#include <vector>
// should be inside of a class
#define INF 9000
#define NODES 8

// usually a bad idea to import the whole std namespace
using namespace std;

/* Structure to store the cost of the node and direction to be taken when this node is visited. Used in Dijkstra.cpp in function setNodes() to build the infrastructure. */
typedef struct Plan{
    unsigned cost;   // INT_MAX denotes infinity
	// why would you store a direction in this way? it's much harder to manipulate in code
	// remember, you can define a Direction type that is more amenable to manipulation
	// e.g. as an enum, and define a conversion operator to a char or string
    char direction; // i denotes infinity, 'N','W','S','E' are respective directions
}Plan;

typedef vector< map <size_t,Plan> > nodeMap;

/* */
typedef struct PathNode{
    unsigned NodeID;
    unsigned cost;   // INT_MAX denotes infinity
    char direction; // i denotes infinity, 'N','W','S','E' are respective directions
}PathNode;

/* Function prototype to initialize the infrastructure. (Build the map of the corridor)*/
void setNodes();

// generally prefer using to typedef
// but a route shouldn't be a map, it should be a sequence
// a map is much more expensive both in memory and traversal time
/* */
typedef map<unsigned, unsigned> routeMap;