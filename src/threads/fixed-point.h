/**
 * this headfile is used to impl the calculation of nice value 
 * do as what the doc[BSD4.4 scheduler] said
 * 
*/
#include <stdint.h>

#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

#define F_SHIFT 16

#define ITF(x) (((x) << (F_SHIFT)))
#define FTI(x) (x >= 0 ? ((x + (1 << (F_SHIFT - 1))) >> F_SHIFT) : ((x - (1 << (F_SHIFT - 1))) >> F_SHIFT))
// f*f
#define FMUT(x, y) (((int64_t)(x) * (int64_t)(y)) >> (F_SHIFT))
// f/f
#define FDIV(x, y) ((int)((((int64_t) x) << F_SHIFT) / y))
#endif