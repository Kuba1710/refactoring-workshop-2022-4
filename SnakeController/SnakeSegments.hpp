#pragma once
#include "SnakeInterface.hpp"
#include <list>

enum Direction
{
    Direction_UP    = 0b00,
    Direction_DOWN  = 0b10,
    Direction_LEFT  = 0b01,
    Direction_RIGHT = 0b11
};

class SnakeSegments
{
private:
    struct Segment
    {
        int x;
        int y;
    };
public:
Segment calculateNewHead() const;

protected:

    std::list<Segment> m_segments;
    Direction m_currentDirection;  
};