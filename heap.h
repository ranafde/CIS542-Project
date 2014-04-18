// the header is the best place to document your API
// typedef below is redundant in C++
// size_t should be reserved for variables measuring sizes or indices

typedef struct heapNode{
    size_t nodeID;
    size_t cost;
} heapNode;

// NODES not defined in scope.
// Also, constants in C++ generally should not be in C-style caps case.
// maybe template this on NODES, rather than using a global constant.
// also, template on the types of indices
class Heap{
    
    
    
    public:
	// internal heap representation shouldn't be public
	// you should document what these members mean; the reader should understand the representation invariant
	// without having to read the code
	// "struct" below is redundant; this is C++
    struct heapNode node[NODES+1];
    int indexMap[NODES];
    size_t heapSize;
    
    Heap();
	// THis constructor makes no sense for a general heap class
    Heap(size_t sourceNodeID);   
    void extractMin();
	// why is this returning a bool?
    bool decreaseCost(size_t nodeID,size_t newCost);
    // shouldn't the heapiness be an invariant of the class (at least from the client perspective)?
	void heapify(size_t index);
    // why is this public? 
	void swapNodes(size_t index,size_t smallest);
	// why is this public? it exposes the internal data structure. you should only be able to get at the minimum node. 
    heapNode at(size_t nodeID);
	// it would be more efficient to allow client to add nodes to the heap
};
