/*
 * Copyright (c) 2014, Realeyes
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 * 
 * Note: this is a generated file. Do not modify.
 */
#ifndef PENCIL_OPENCL_H
#define PENCIL_OPENCL_H
#define babs(x) (abs)((char) (x))
#define sabs(x) (abs)((short) (x))
#define abs(x) (abs)((int) (x))
#define labs(x) (abs)((long) (x))
#define ubabs(x) (abs)((unsigned char) (x))
#define usabs(x) (abs)((unsigned short) (x))
#define uabs(x) (abs)((unsigned int) (x))
#define ulabs(x) (abs)((unsigned long) (x))
#define bmax(a, b) (max)((char) (a), (char) (b))
#define smax(a, b) (max)((short) (a), (short) (b))
#define max(a, b) (max)((int) (a), (int) (b))
#define lmax(a, b) (max)((long) (a), (long) (b))
#define ubmax(a, b) (max)((unsigned char) (a), (unsigned char) (b))
#define usmax(a, b) (max)((unsigned short) (a), (unsigned short) (b))
#define umax(a, b) (max)((unsigned int) (a), (unsigned int) (b))
#define ulmax(a, b) (max)((unsigned long) (a), (unsigned long) (b))
#define bmin(a, b) (min)((char) (a), (char) (b))
#define smin(a, b) (min)((short) (a), (short) (b))
#define min(a, b) (min)((int) (a), (int) (b))
#define lmin(a, b) (min)((long) (a), (long) (b))
#define ubmin(a, b) (min)((unsigned char) (a), (unsigned char) (b))
#define usmin(a, b) (min)((unsigned short) (a), (unsigned short) (b))
#define umin(a, b) (min)((unsigned int) (a), (unsigned int) (b))
#define ulmin(a, b) (min)((unsigned long) (a), (unsigned long) (b))
#define clampf(val, min, max) (clamp)((float) (val), (float) (min), (float) (max))
#define clamp(val, min, max) (clamp)((double) (val), (double) (min), (double) (max))
#define degreesf(rad) (degrees)((float) (rad))
#define degrees(rad) (degrees)((double) (rad))
#define mixf(x, y, a) (mix)((float) (x), (float) (y), (float) (a))
#define mix(x, y, a) (mix)((double) (x), (double) (y), (double) (a))
#define radiansf(deg) (radians)((float) (deg))
#define radians(deg) (radians)((double) (deg))
#define signf(x) (sign)((float) (x))
#define sign(x) (sign)((double) (x))
#define stepf(edge, x) (step)((float) (edge), (float) (x))
#define step(edge, x) (step)((double) (edge), (double) (x))
#define fmodf(x) (fmod)((float) (x))
#define fmod(x) (fmod)((double) (x))
#define remainderf(a, b) (remainder)((float) (a), (float) (b))
#define remainder(a, b) (remainder)((double) (a), (double) (b))
#define remquof(x, y, quo) (remquo)((float) (x), (float) (y),  (quo))
#define remquo(x, y, quo) (remquo)((double) (x), (double) (y),  (quo))
#define fmaf(a, b, c) (fma)((float) (a), (float) (b), (float) (c))
#define fma(a, b, c) (fma)((double) (a), (double) (b), (double) (c))
#define madf(a, b, c) (mad)((float) (a), (float) (b), (float) (c))
#define mad(a, b, c) (mad)((double) (a), (double) (b), (double) (c))
#define fdimf(x, y) (fdim)((float) (x), (float) (y))
#define fdim(x, y) (fdim)((double) (x), (double) (y))
#define fmaxf(a, b) (fmax)((float) (a), (float) (b))
#define fmax(a, b) (fmax)((double) (a), (double) (b))
#define fminf(a, b) (fmin)((float) (a), (float) (b))
#define fmin(a, b) (fmin)((double) (a), (double) (b))
#define fabsf(x) (fabs)((float) (x))
#define fabs(x) (fabs)((double) (x))
#define expf(x) (exp)((float) (x))
#define exp(x) (exp)((double) (x))
#define exp2f(x) (exp2)((float) (x))
#define exp2(x) (exp2)((double) (x))
#define exp10f(x) (exp10)((float) (x))
#define exp10(x) (exp10)((double) (x))
#define expm1f(x) (expm1)((float) (x))
#define expm1(x) (expm1)((double) (x))
#define logf(x) (log)((float) (x))
#define log(x) (log)((double) (x))
#define log2f(x) (log2)((float) (x))
#define log2(x) (log2)((double) (x))
#define log10f(x) (log10)((float) (x))
#define log10(x) (log10)((double) (x))
#define log1pf(x) (log1p)((float) (x))
#define log1p(x) (log1p)((double) (x))
#define powf(x, y) (pow)((float) (x), (float) (y))
#define pow(x, y) (pow)((double) (x), (double) (y))
#define pownf(x, y) (pown)((float) (x),  (y))
#define pown(x, y) (pown)((double) (x),  (y))
#define powrf(x, y) (powr)((float) (x), (float) (y))
#define powr(x, y) (powr)((double) (x), (double) (y))
#define sqrtf(x) (sqrt)((float) (x))
#define sqrt(x) (sqrt)((double) (x))
#define rsqrtf(x) (rsqrt)((float) (x))
#define rsqrt(x) (rsqrt)((double) (x))
#define cbrtf(x) (cbrt)((float) (x))
#define cbrt(x) (cbrt)((double) (x))
#define rootnf(x, n) (rootn)((float) (x),  (n))
#define rootn(x, n) (rootn)((double) (x),  (n))
#define hypotf(x, y) (hypot)((float) (x), (float) (y))
#define hypot(x, y) (hypot)((double) (x), (double) (y))
#define sinf(x) (sin)((float) (x))
#define sin(x) (sin)((double) (x))
#define cosf(x) (cos)((float) (x))
#define cos(x) (cos)((double) (x))
#define tanf(x) (tan)((float) (x))
#define tan(x) (tan)((double) (x))
#define asinf(x) (asin)((float) (x))
#define asin(x) (asin)((double) (x))
#define acosf(x) (acos)((float) (x))
#define acos(x) (acos)((double) (x))
#define atanf(x) (atan)((float) (x))
#define atan(x) (atan)((double) (x))
#define atan2f(x, y) (atan2)((float) (x), (float) (y))
#define atan2(x, y) (atan2)((double) (x), (double) (y))
#define sinpif(x) (sinpi)((float) (x))
#define sinpi(x) (sinpi)((double) (x))
#define cospif(x) (cospi)((float) (x))
#define cospi(x) (cospi)((double) (x))
#define tanpif(x) (tanpi)((float) (x))
#define tanpi(x) (tanpi)((double) (x))
#define asinpif(x) (asinpi)((float) (x))
#define asinpi(x) (asinpi)((double) (x))
#define acospif(x) (acospi)((float) (x))
#define acospi(x) (acospi)((double) (x))
#define atanpif(x) (atanpi)((float) (x))
#define atanpi(x) (atanpi)((double) (x))
#define atan2pif(x, y) (atan2pi)((float) (x), (float) (y))
#define atan2pi(x, y) (atan2pi)((double) (x), (double) (y))
#define sinhf(x) (sinh)((float) (x))
#define sinh(x) (sinh)((double) (x))
#define coshf(x) (cosh)((float) (x))
#define cosh(x) (cosh)((double) (x))
#define tanhf(x) (tanh)((float) (x))
#define tanh(x) (tanh)((double) (x))
#define asinhf(x) (asinh)((float) (x))
#define asinh(x) (asinh)((double) (x))
#define acoshf(x) (acosh)((float) (x))
#define acosh(x) (acosh)((double) (x))
#define atanhf(x) (atanh)((float) (x))
#define atanh(x) (atanh)((double) (x))
#define erff(x) (erf)((float) (x))
#define erf(x) (erf)((double) (x))
#define erfcf(x) (erfc)((float) (x))
#define erfc(x) (erfc)((double) (x))
#define tgammaf(x) (tgamma)((float) (x))
#define tgamma(x) (tgamma)((double) (x))
#define lgammaf(x) (lgamma)((float) (x))
#define lgamma(x) (lgamma)((double) (x))
#define lgamma_rf(x, signp) (lgamma_r)((float) (x),  (signp))
#define lgamma_r(x, signp) (lgamma_r)((double) (x),  (signp))
#define ceilf(x) (ceil)((float) (x))
#define ceil(x) (ceil)((double) (x))
#define floorf(x) (floor)((float) (x))
#define floor(x) (floor)((double) (x))
#define truncf(x) (trunc)((float) (x))
#define trunc(x) (trunc)((double) (x))
#define roundf(x) (round)((float) (x))
#define round(x) (round)((double) (x))
#define logbf(x) (logb)((float) (x))
#define logb(x) (logb)((double) (x))
#define nextafterf(from, to) (nextafter)((float) (from), (float) (to))
#define nextafter(from, to) (nextafter)((double) (from), (double) (to))
#define copysignf(x, y) (copysign)((float) (x), (float) (y))
#define copysign(x, y) (copysign)((double) (x), (double) (y))
inline char __attribute__((const)) bclampi(char val, char min, char max) { return (val<min) ? min : ((val>max) ? max : val); }
inline short __attribute__((const)) sclampi(short val, short min, short max) { return (val<min) ? min : ((val>max) ? max : val); }
inline int __attribute__((const)) clampi(int val, int min, int max) { return (val<min) ? min : ((val>max) ? max : val); }
inline long __attribute__((const)) lclampi(long val, long min, long max) { return (val<min) ? min : ((val>max) ? max : val); }
inline unsigned char __attribute__((const)) ubclampi(unsigned char val, unsigned char min, unsigned char max) { return (val<min) ? min : ((val>max) ? max : val); }
inline unsigned short __attribute__((const)) usclampi(unsigned short val, unsigned short min, unsigned short max) { return (val<min) ? min : ((val>max) ? max : val); }
inline unsigned int __attribute__((const)) uclampi(unsigned int val, unsigned int min, unsigned int max) { return (val<min) ? min : ((val>max) ? max : val); }
inline unsigned long __attribute__((const)) ulclampi(unsigned long val, unsigned long min, unsigned long max) { return (val<min) ? min : ((val>max) ? max : val); }
#endif
