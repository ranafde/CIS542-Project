#include <map>
#include <deque>
#include <vector>


// can't tell what this is supposed to represent. Where are its constructor, method, etc?
typedef struct Plan{
    size_t cost;   // INT_MAX denotes infinity
    char direction; // i denotes infinity, 'N','W','S','E' are respective directions
}Plan;

// Headers should not define objects (it should declare them only). These shouldn't be here/
typedef vector< map <size_t,Plan> > nodeMap;
nodeMap nodeGraph;
 
// what is this?
typedef struct PathNode{
    size_t NodeID;
    size_t cost;   // INT_MAX denotes infinity
    char direction; // i denotes infinity, 'N','W','S','E' are respective directions
}PathNode;

//??
void setNodes();

// I assume a route map is supposed to be a sequence. You don't want to use a STL map to store a sequence.
// Instead use a vector, or list, or forward list, or queue.
typedef map<size_t,size_t > routeMap;
