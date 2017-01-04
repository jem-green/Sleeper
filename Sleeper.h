// Sleeper.h

#ifndef _SLEEPER_h
#define _SLEEPER_h

	#if defined(ARDUINO) && ARDUINO >= 100
		#include "Arduino.h"
	#else
		#include "WProgram.h"
	#endif

	class Sleeper
	{
		public:
			void init();
			byte sleepForaWhile (word msecs);												// timed sleep using the watchdog
			void sleep(byte pinToWakeOn, byte direction = FALLING, byte bPullup = true);	// full sleep woken by pin interrupt
	};

#endif

