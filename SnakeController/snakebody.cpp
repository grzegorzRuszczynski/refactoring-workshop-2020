#include "snakebody.hpp"

#include <algorithm>


void SnakeBody::addSegment(int x, int y)
{
    SnakeBody::Segment seg;
    seg.x = x;
    seg.y = y;
    m_segments.push_back(seg);
}

/*SnakeBody::Segment SnakeBody::calculateNewHead() const
{
   Segment const& currentHead = m_segments.front();

   Segment newHead;
   newHead.x = currentHead.x + (isHorizontal(m_currentDirection) ? isPositive(m_currentDirection) ? 1 : -1 : 0);
   newHead.y = currentHead.y + (isVertical(m_currentDirection) ? isPositive(m_currentDirection) ? 1 : -1 : 0);

   return newHead;
}*/

bool SnakeBody::isSegmentAtPosition(int x, int y) const
{
    return m_segments.end() !=  std::find_if(m_segments.cbegin(), m_segments.cend(),
        [x, y](auto const& segment){ return segment.x == x and segment.y == y; });
}


/*
Segment calculateNewHead() const;
void updateSegmentsIfSuccessfullMove(Segment const& newHead);
void addHeadSegment(Segment const& newHead);
void removeTailSegmentIfNotScored(Segment const& newHead);
void removeTailSegment();

bool isPositionOutsideMap(int x, int y) const;*/


