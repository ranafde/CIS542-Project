// don't use stdio in a C++ program
// moreover, it shouldn't be included in the heap data header anyway
#include <stdio.h>
// don't use #define to define global constants in a C++ program
// and in any case, this should be internal to the heap data structure
#define NODES 8
// don't know what this means
#define INF 9000

typedef struct heapNode{
    size_t nodeID;
	// for a priority queue, you should call this priority
    size_t cost;
} heapNode;

class PriorityQueue{
    
    public:
		// why are these public?
    struct heapNode node[NODES+1];
    int indexMap[NODES];
    size_t heapSize;
    
	// This is exposing way too much internal structure.
	// You should expose only finding the minimum node, removing the minimum node, 
	// adding a node, changing a priority of a node, and checking for emptiness
	// also, describe at least informally what each of these methods does 
    PriorityQueue();
    PriorityQueue(size_t sourceNodeID);    
    void extractMin();
    bool decreaseCost(size_t nodeID,size_t newCost);
	void heapify(size_t index);
    void swapNodes(size_t index,size_t smallest);
    heapNode at(size_t nodeID);
};
