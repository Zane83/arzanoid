#ifndef BALL_H
#define BALL_H
#include "drawable.h"

namespace arkanoid{

    class Ball: public Drawable{

        bool is_moving;

        public:
        bool is_ball_moving();
        void move();
        void stop();
        Ball();

    };

}

#endif