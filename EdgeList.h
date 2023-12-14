//
// Created by ea024716 on 12/14/2023.
//
#include "Edge.h"

#ifndef GRAPH_PUZZLE_GAME_EDGELIST_H
#define GRAPH_PUZZLE_GAME_EDGELIST_H

class EdgeList {
private:
    Edge* head;
    Edge* tail;
public:
    EdgeList();
    ~EdgeList();
    bool isEmpty() const;
    Edge* search(int to) const;
    void insert(Edge* newEdge);
    Edge* getHead();
};


#endif //GRAPH_PUZZLE_GAME_EDGELIST_H
