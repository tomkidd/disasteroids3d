
#ifndef TIMER_H
#define TIMER_H

#ifdef _WIN32
#include <windows.h>
#endif
#include <time.h>

#if defined __APPLE__ || defined __linux__
typedef long long __int64;
#endif

#include <SDL.h>

// Create A Structure For The Timer Information
typedef struct d3dtimer_s
{
  __int64			frequency;							// Timer Frequency
  float				resolution;							// Timer Resolution
  unsigned long	mm_timer_start;					// Multimedia Timer Start Value
  unsigned long	mm_timer_elapsed;					// Multimedia Timer Elapsed Time
  bool				performance_timer;				// Using The Performance Timer?
  __int64			performance_timer_start;		// Performance Timer Start Value
  __int64			performance_timer_elapsed;		// Performance Timer Elapsed Time
} d3dtimer_t;

extern d3dtimer_t g_timer;

// Timer routines
void TimerInit(void);
float TimerGetTime(void);
float TimerGetTimeMS(void);

#endif 
