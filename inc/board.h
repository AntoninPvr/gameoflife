#ifndef BOARD_H
#define BOARD_H

#include <stdint.h>

struct Board{
    uint_fast32_t row;
    uint_fast32_t column;
    uint8_t *p_array;
};

#endif //BOARD_H