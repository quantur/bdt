// Utilities.h

#ifndef ADD_UTILITIES
#define ADD_UTILITIES 

#include <vector>
#include <string>
#include <sstream>
#include "TMath.h"

//////////////////////////////////////////////////////////////////////////
// ------------------Some Helpful Things----------------------------------
//////////////////////////////////////////////////////////////////////////

// Array of counts for error calculation.
extern const Double_t twoJets_scale[16];
extern const std::vector<Double_t> twoJetsScale;

// Array of GeV values for error calculation.
extern const Double_t ptscale[31];
extern const std::vector<Double_t> ptScale;

template <typename T>
std::string numToStr( T num )
{
// Convert a number to a string.
    std::stringstream ss;
    ss << num;
    std::string s = ss.str();
    return s;
};

float processPrediction(float BDTPt, int Quality, float PrelimFit);

void mergeNtuples(const char* ntuplename, const char* filestomerge, const char* outputfile);

void sortNtupleByEvent(const char* ntuplename, const char* filenametosort, const char* outputfile);

#endif
