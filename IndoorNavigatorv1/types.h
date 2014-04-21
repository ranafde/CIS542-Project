
#include <map>
#include <deque>
#include <vector>
#define INF 9000
#define NODES 8

using namespace std;

/* Structure to store the cost of the node and direction to be taken when this node is visited. Used in Dijkstra.cpp in function setNodes() to build the infrastructure. */
typedef struct Plan{
    unsigned cost;   // INT_MAX denotes infinity
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

/* */
typedef map<unsigned, unsigned> routeMap;