#define initshell_file
	float z;
	if (rev==0) // which direction does the stimulus go?
					                           //these values can go out of range (less than 0 >1) for some settings -- beware.
																		   // if colours are red and green, out of phase, their amplitudes would be, say, +.5 and -.3
																		   // their means would be +.5 and +.3 for case of 100% phosphor modulation
																		   // their amplitudes for the mixture are the absolute values, so they add rather than subtract
																		   // giving yellow in this case.
																		   // here the mixture wavefore is at 1/8th the ampitude of the colur waveform -- see Cavanagh et al, 1987, Fig 3  for explanation