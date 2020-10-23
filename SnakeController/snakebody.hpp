#pragma once

#include <list>
#include <memory>
#include <functional>

#include "IEventHandler.hpp"
#include "SnakeInterface.hpp"

class SnakeBody
{
    struct Segment
    {
        int x;
        int y;
    };

    std::list<Segment> m_segments;
    //Direction m_currentDirection;


public:
    void addSegment(int x, int y);
    bool isSegmentAtPosition(int x, int y) const;
    Segment calculateNewHead() const;
    void updateSegmentsIfSuccessfullMove(Segment const& newHead);
    void addHeadSegment(Segment const& newHead);
    void removeTailSegmentIfNotScored(Segment const& newHead);
    void removeTailSegment();

    bool isPositionOutsideMap(int x, int y) const;

};
