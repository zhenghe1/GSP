#include "geo_shortest_path.h"

Point::Point() {}

Point::Point(int x, int y) : m_x(x), m_y(y) {}

Obstacle::Obstacle() : m_p1(NULL), m_p2(NULL) {}

Obstacle::Obstacle(Point *p1, Point *p2) : m_p1(p1), m_p2(p2) {}

Obstacle::Obstacle(const Obstacle &l) {
    m_p1 = new Point(l.m_p1->m_x, l.m_p1->m_y);
    m_p2 = new Point(l.m_p2->m_x, l.m_p2->m_y);
}

Obstacle::~Obstacle() {
    delete m_p1;
    delete m_p2;
    m_p1 = NULL;
    m_p2 = NULL;
}
