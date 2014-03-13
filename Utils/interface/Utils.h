//--------------------------------------------------------------------------------------------------
// Utils
//
// Utility functions useful when workign with root. Basically helping some of the interfaces to
// be more convenient of produce better debug output.
//
// Authors: C.Paus
//--------------------------------------------------------------------------------------------------
#ifndef MITCOMMON_UTILS_UTILS_H
#define MITCOMMON_UTILS_UTILS_H

#include <TString.h>
#include <TSystem.h>

namespace mithep
{
  class Utils
  {

    public:
      static TString     GetEnv(const char* name);   // get environment variable with proper check
      static TString     GetEnv(TString name);       // "

    ClassDef(Utils, 0) // Utitily functions
  };
}

using namespace mithep;
//--------------------------------------------------------------------------------------------------
inline TString Utils::GetEnv(TString name)
{
  return GetEnv(name.Data());
}

inline TString Utils::GetEnv(const char* name)
{
  if (! gSystem->Getenv(name)) {
    printf(" Environment variable: %s  not defined. EXIT!\n",name);
    return TString("");
  } 
  return TString(gSystem->Getenv(name));  
}
#endif