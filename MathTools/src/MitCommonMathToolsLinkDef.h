// $Id: MitCommonMathToolsLinkDef.h,v 1.3 2009/07/17 10:37:19 loizides Exp $

#ifndef MITCOMMON_MATHTOOLS_LINKDEF_H
#define MITCOMMON_MATHTOOLS_LINKDEF_H

#include "MitCommon/MathTools/interface/Angle.h"
#include "MitCommon/MathTools/interface/Funcs.h"
#include "MitCommon/MathTools/interface/Helix.h"
#include "MitCommon/MathTools/interface/HelixIntersector.h"
#include "MitCommon/MathTools/interface/MathUtils.h"
#endif

#ifdef __CINT__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclass;
#pragma link C++ nestedtypedef;
#pragma link C++ namespace mithep;

#pragma link C++ class mithep::Funcs;
#pragma link C++ class mithep::Helix;
#pragma link C++ class mithep::HelixIntersector;
#pragma link C++ class mithep::HelixIntersector::TrackParams;
#pragma link C++ class mithep::HelixIntersector::Intersection;
#pragma link C++ class mithep::MathUtils;
#pragma link C++ class mithep::SignedAngle;
#pragma link C++ class mithep::UnsignedAngle;
#pragma link C++ typedef mithep::Angle;
#endif
