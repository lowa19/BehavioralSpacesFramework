/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * makeHistFutTable.h
 *
 * Code generation for function 'makeHistFutTable'
 *
 */

#ifndef MAKEHISTFUTTABLE_H
#define MAKEHISTFUTTABLE_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "makeHistFutTable_types.h"

/* Function Declarations */
extern void makeHistFutTable(const emlrtStack *sp, const emxArray_uint8_T *testm,
  real_T range, real_T dims, emxArray_real_T *y);

#endif

/* End of code generation (makeHistFutTable.h) */
