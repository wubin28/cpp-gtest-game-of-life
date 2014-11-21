#ifndef CELL_INCLUDED
#define CELL_INCLUDED

class Cell {
public:
  virtual Cell *breedWithLiveNeighbours(int numberOfLiveNeighbours) = 0;
};

class LiveCell : public Cell {
public:
  Cell *breedWithLiveNeighbours(int numberOfLiveNeighbours) override;
};

class DeadCell : public Cell {
public:
  Cell *breedWithLiveNeighbours(int numberOfLiveNeighbours) override;
};

class ZombieCell : public Cell {
public:
  Cell *breedWithLiveNeighbours(int numberOfLiveNeighbours) override;
};

#endif
