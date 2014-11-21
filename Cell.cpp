#include "Cell.hpp"

Cell* LiveCell::breedWithLiveNeighbours(int numberOfLiveNeighbours) {
  if (numberOfLiveNeighbours < 0 || numberOfLiveNeighbours > 8) return new ZombieCell();
  if (numberOfLiveNeighbours < 2) return new DeadCell();
  return new DeadCell();
}

Cell* DeadCell::breedWithLiveNeighbours(int numberOfLiveNeighbours) {
  if (numberOfLiveNeighbours < 0 || numberOfLiveNeighbours > 8) return new ZombieCell();
  return new DeadCell();
}

Cell* ZombieCell::breedWithLiveNeighbours(int numberOfLiveNeighbours) {
  if (numberOfLiveNeighbours < 0 || numberOfLiveNeighbours > 8) return new ZombieCell();
  return new ZombieCell();
}