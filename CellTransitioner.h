#ifndef CELLTRANSITIONER_H
#define CELLTRANSITIONER_H

class CellTransitioner {
public:
  void transition(Cell *cell, int numOfLiveNeighbours);
};

#endif