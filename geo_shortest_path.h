#ifndef GEO_SHORTEST_PATH_H
#define GEO_SHORTEST_PATH_H

#include <cstddef.h>

class Point {
    public:
        int m_x;
        int m_y;

        explicit Point();
        explicit Point(int x, int y);
};

class Obstacle {
    public:
        Point *m_p1;
        Point *m_p2;

        explicit Obstacle();
        explicit Obstacle(Point *p1, Points *p2);
        explicit Obstacle(const Obstacle &l);
        ~Obstacle();
}

class GSP {
    private:

    public:
};

#endif
