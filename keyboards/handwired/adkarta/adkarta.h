#pragma once

#include "quantum.h"

// Used to create a keymap using only KC_ prefixed keys
#define LAYOUT( \
    LA1, LB1, LC1, LD1, LE1, LF1,           RF1, RE1, RD1, RC1, RB1, RA1, \
    LA2, LB2, LC2, LD2, LE2, LF2,           RF2, RE2, RD2, RC2, RB2, RA2, \
    LA3, LB3, LC3, LD3, LE3, LF3,           RF3, RE3, RD3, RC3, RB3, RA3, \
    LA4, LB4, LC4, LD4, LE4, LF4, LF5, RF5, RF4, RE4, RD4, RC4, RB4, RA4, \
                        LC5, LD5, LE5, RE5, RD5, RC5 \
    ) \
    { \
        { LA1, LB1, LC1, LD1, LE1, LF1 }, \
        { LA2, LB2, LC2, LD2, LE2, LF2 }, \
        { LA3, LB3, LC3, LD3, LE3, LF3 }, \
        { LA4, LB4, LC4, LD4, LE4, LF4 }, \
        { KC_NO, KC_NO, LC5, LD5, LE5, LF5 }, \
        { RA1, RB1, RC1, RD1, RE1, RF1 }, \
        { RA2, RB2, RC2, RD2, RE2, RF2 }, \
        { RA3, RB3, RC3, RD3, RE3, RF3 }, \
        { RA4, RB4, RC4, RD4, RE4, RF4 }, \
        { KC_NO, KC_NO, RC5, RD5, RE5, RF5}, \
    }

