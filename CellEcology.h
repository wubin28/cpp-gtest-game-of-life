#ifndef CELLECOLOGY_H
#define CELLECOLOGY_H

#include "CellState.h"

class CellEcology {
public:
  CellState virtual transition() = 0;
};

class LiveWithZero : public CellEcology {
public:
  CellState transition() override;
};

class LiveWithOne : public CellEcology {
public:
  CellState transition() override;
};

class LiveWithTwo : public CellEcology {
public:
  CellState transition() override;
};

class LiveWithThree : public CellEcology {
public:
  CellState transition() override;
};

class LiveWithFour : public CellEcology {
public:
  CellState transition() override;
};

class LiveWithFive : public CellEcology {
public:
  CellState transition() override;
};

class LiveWithSix : public CellEcology {
public:
  CellState transition() override;
};

class LiveWithSeven : public CellEcology {
public:
  CellState transition() override;
};

class LiveWithEight : public CellEcology {
public:
  CellState transition() override;
};

class DeadWithZero : public CellEcology {
public:
  CellState transition() override;
};

class DeadWithOne : public CellEcology {
public:
  CellState transition() override;
};

class DeadWithTwo : public CellEcology {
public:
  CellState transition() override;
};

class DeadWithThree : public CellEcology {
public:
  CellState transition() override;
};

class DeadWithFour : public CellEcology {
public:
  CellState transition() override;
};

class DeadWithFive : public CellEcology {
public:
  CellState transition() override;
};

class DeadWithSix : public CellEcology {
public:
  CellState transition() override;
};

class DeadWithSeven : public CellEcology {
public:
  CellState transition() override;
};

class DeadWithEight : public CellEcology {
public:
  CellState transition() override;
};

#endif