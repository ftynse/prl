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
#define babs(x) abs((char) (x))
#define sabs(x) abs((short) (x))
#define iabs(x) abs((int) (x))
#define labs(x) abs((long) (x))
#define ubabs(x) abs((unsigned char) (x))
#define usabs(x) abs((unsigned short) (x))
#define uabs(x) abs((unsigned int) (x))
#define ulabs(x) abs((unsigned long) (x))
#define bmax(a, b) max((char) (a), (char) (b))
#define smax(a, b) max((short) (a), (short) (b))
#define imax(a, b) max((int) (a), (int) (b))
#define lmax(a, b) max((long) (a), (long) (b))
#define ubmax(a, b) max((unsigned char) (a), (unsigned char) (b))
#define usmax(a, b) max((unsigned short) (a), (unsigned short) (b))
#define umax(a, b) max((unsigned int) (a), (unsigned int) (b))
#define ulmax(a, b) max((unsigned long) (a), (unsigned long) (b))
#define bmin(a, b) min((char) (a), (char) (b))
#define smin(a, b) min((short) (a), (short) (b))
#define imin(a, b) min((int) (a), (int) (b))
#define lmin(a, b) min((long) (a), (long) (b))
#define ubmin(a, b) min((unsigned char) (a), (unsigned char) (b))
#define usmin(a, b) min((unsigned short) (a), (unsigned short) (b))
#define umin(a, b) min((unsigned int) (a), (unsigned int) (b))
#define ulmin(a, b) min((unsigned long) (a), (unsigned long) (b))
#define clampf(val, min, max) clamp((float) (val), (float) (min), (float) (max))
#define clampd(val, min, max) clamp((double) (val), (double) (min), (double) (max))
#define degreesf(rad) degrees((float) (rad))
#define degreesd(rad) degrees((double) (rad))
#define mixf(x, y, a) mix((float) (x), (float) (y), (float) (a))
#define mixd(x, y, a) mix((double) (x), (double) (y), (double) (a))
#define radiansf(deg) radians((float) (deg))
#define radiansd(deg) radians((double) (deg))
#define signf(x) sign((float) (x))
#define signd(x) sign((double) (x))
#define stepf(edge, x) step((float) (edge), (float) (x))
#define stepd(edge, x) step((double) (edge), (double) (x))
//#define fmodf(x) fmod((float) (x))
#define fmodd(x) fmod((double) (x))
#define remainderf(a, b) remainder((float) (a), (float) (b))
#define remainderd(a, b) remainder((double) (a), (double) (b))
#define remquof(x, y, quo) remquo((float) (x), (float) (y),  (quo))
#define remquod(x, y, quo) remquo((double) (x), (double) (y),  (quo))
#define fmaf(a, b, c) fma((float) (a), (float) (b), (float) (c))
#define fmad(a, b, c) fma((double) (a), (double) (b), (double) (c))
#define madf(a, b, c) mad((float) (a), (float) (b), (float) (c))
#define madd(a, b, c) mad((double) (a), (double) (b), (double) (c))
#define fdimf(x, y) fdim((float) (x), (float) (y))
#define fdimd(x, y) fdim((double) (x), (double) (y))
#define fmaxf(a, b) fmax((float) (a), (float) (b))
#define fmaxd(a, b) fmax((double) (a), (double) (b))
#define fminf(a, b) fmin((float) (a), (float) (b))
#define fmind(a, b) fmin((double) (a), (double) (b))
#define fabsf(x) fabs((float) (x))
#define fabsd(x) fabs((double) (x))
#define expf(x) exp((float) (x))
#define expd(x) exp((double) (x))
#define exp2f(x) exp2((float) (x))
#define exp2d(x) exp2((double) (x))
#define exp10f(x) exp10((float) (x))
#define exp10d(x) exp10((double) (x))
#define expm1f(x) expm1((float) (x))
#define expm1d(x) expm1((double) (x))
#define logf(x) log((float) (x))
#define logd(x) log((double) (x))
#define log2f(x) log2((float) (x))
#define log2d(x) log2((double) (x))
#define log10f(x) log10((float) (x))
#define log10d(x) log10((double) (x))
#define log1pf(x) log1p((float) (x))
#define log1pd(x) log1p((double) (x))
#define powf(x, y) pow((float) (x), (float) (y))
#define powd(x, y) pow((double) (x), (double) (y))
#define pownf(x, y) pown((float) (x),  (y))
#define pownd(x, y) pown((double) (x),  (y))
#define powrf(x, y) powr((float) (x), (float) (y))
#define powrd(x, y) powr((double) (x), (double) (y))
#define sqrtf(x) sqrt((float) (x))
#define sqrtd(x) sqrt((double) (x))
#define rsqrtf(x) rsqrt((float) (x))
#define rsqrtd(x) rsqrt((double) (x))
#define cbrtf(x) cbrt((float) (x))
#define cbrtd(x) cbrt((double) (x))
#define rootnf(x, n) rootn((float) (x),  (n))
#define rootnd(x, n) rootn((double) (x),  (n))
#define hypotf(x, y) hypot((float) (x), (float) (y))
#define hypotd(x, y) hypot((double) (x), (double) (y))
#define sinf(x) sin((float) (x))
#define sind(x) sin((double) (x))
#define cosf(x) cos((float) (x))
#define cosd(x) cos((double) (x))
#define tanf(x) tan((float) (x))
#define tand(x) tan((double) (x))
#define asinf(x) asin((float) (x))
#define asind(x) asin((double) (x))
#define acosf(x) acos((float) (x))
#define acosd(x) acos((double) (x))
#define atanf(x) atan((float) (x))
#define atand(x) atan((double) (x))
#define atan2f(x, y) atan2((float) (x), (float) (y))
#define atan2d(x, y) atan2((double) (x), (double) (y))
#define sinpif(x) sinpi((float) (x))
#define sinpid(x) sinpi((double) (x))
#define cospif(x) cospi((float) (x))
#define cospid(x) cospi((double) (x))
#define tanpif(x) tanpi((float) (x))
#define tanpid(x) tanpi((double) (x))
#define asinpif(x) asinpi((float) (x))
#define asinpid(x) asinpi((double) (x))
#define acospif(x) acospi((float) (x))
#define acospid(x) acospi((double) (x))
#define atanpif(x) atanpi((float) (x))
#define atanpid(x) atanpi((double) (x))
#define atan2pif(x, y) atan2pi((float) (x), (float) (y))
#define atan2pid(x, y) atan2pi((double) (x), (double) (y))
#define sinhf(x) sinh((float) (x))
#define sinhd(x) sinh((double) (x))
#define coshf(x) cosh((float) (x))
#define coshd(x) cosh((double) (x))
#define tanhf(x) tanh((float) (x))
#define tanhd(x) tanh((double) (x))
#define asinhf(x) asinh((float) (x))
#define asinhd(x) asinh((double) (x))
#define acoshf(x) acosh((float) (x))
#define acoshd(x) acosh((double) (x))
#define atanhf(x) atanh((float) (x))
#define atanhd(x) atanh((double) (x))
#define erff(x) erf((float) (x))
#define erfd(x) erf((double) (x))
#define erfcf(x) erfc((float) (x))
#define erfcd(x) erfc((double) (x))
#define tgammaf(x) tgamma((float) (x))
#define tgammad(x) tgamma((double) (x))
#define lgammaf(x) lgamma((float) (x))
#define lgammad(x) lgamma((double) (x))
#define lgamma_rf(x, signp) lgamma_r((float) (x),  (signp))
#define lgamma_rd(x, signp) lgamma_r((double) (x),  (signp))
#define ceilf(x) ceil((float) (x))
#define ceild(x) ceil((double) (x))
#define floorf(x) floor((float) (x))
#define floord(x) floor((double) (x))
#define truncf(x) trunc((float) (x))
#define truncd(x) trunc((double) (x))
#define roundf(x) round((float) (x))
#define roundd(x) round((double) (x))
#define logbf(x) logb((float) (x))
#define logbd(x) logb((double) (x))
#define nextafterf(from, to) nextafter((float) (from), (float) (to))
#define nextafterd(from, to) nextafter((double) (from), (double) (to))
#define copysignf(x, y) copysign((float) (x), (float) (y))
#define copysignd(x, y) copysign((double) (x), (double) (y))
#define bclampi clamp
//inline char __attribute__((const)) bclampi(char val, char min, char max) { return (val<min) ? min : ((val>max) ? max : val); }
#define sclampi clamp
//inline short __attribute__((const)) sclampi(short val, short min, short max) { return (val<min) ? min : ((val>max) ? max : val); }
#define iclampi clamp
//inline int __attribute__((const)) iclampi(int val, int min, int max) { return (val<min) ? min : ((val>max) ? max : val); }
#define lclampi clamp
//inline long __attribute__((const)) lclampi(long val, long min, long max) { return (val<min) ? min : ((val>max) ? max : val); }
#define ubclampi clamp
//inline unsigned char __attribute__((const)) ubclampi(unsigned char val, unsigned char min, unsigned char max) { return (val<min) ? min : ((val>max) ? max : val); }
#define usclampi clamp
//inline unsigned short __attribute__((const)) usclampi(unsigned short val, unsigned short min, unsigned short max) { return (val<min) ? min : ((val>max) ? max : val); }
#define uclampi clamp
//inline unsigned int __attribute__((const)) uclampi(unsigned int val, unsigned int min, unsigned int max) { return (val<min) ? min : ((val>max) ? max : val); }
#define ulclampi clamp
//inline unsigned long __attribute__((const)) ulclampi(unsigned long val, unsigned long min, unsigned long max) { return (val<min) ? min : ((val>max) ? max : val); }
#endif
