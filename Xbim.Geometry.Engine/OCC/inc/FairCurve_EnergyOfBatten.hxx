// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FairCurve_EnergyOfBatten_HeaderFile
#define _FairCurve_EnergyOfBatten_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Real.hxx>
#include <FairCurve_BattenLaw.hxx>
#include <FairCurve_DistributionOfTension.hxx>
#include <FairCurve_DistributionOfSagging.hxx>
#include <FairCurve_AnalysisCode.hxx>
#include <FairCurve_Energy.hxx>
#include <Standard_Integer.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Handle_TColgp_HArray1OfPnt2d.hxx>
#include <Standard_Boolean.hxx>
#include <math_Vector.hxx>
class TColStd_HArray1OfReal;
class TColgp_HArray1OfPnt2d;
class FairCurve_BattenLaw;


//! Energy Criterium to minimize in Batten.
class FairCurve_EnergyOfBatten  : public FairCurve_Energy
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Angles corresspond to the Ox axis
  Standard_EXPORT FairCurve_EnergyOfBatten(const Standard_Integer BSplOrder, const Handle(TColStd_HArray1OfReal)& FlatKnots, const Handle(TColgp_HArray1OfPnt2d)& Poles, const Standard_Integer ContrOrder1, const Standard_Integer ContrOrder2, const FairCurve_BattenLaw& Law, const Standard_Real LengthSliding, const Standard_Boolean FreeSliding = Standard_True, const Standard_Real Angle1 = 0, const Standard_Real Angle2 = 0);
  
  //! return  the  lengthSliding = P1P2 + Sliding
      Standard_Real LengthSliding()  const;
  
  //! return  the status
      FairCurve_AnalysisCode Status()  const;
  
  //! compute the variables <X> wich correspond with the field <MyPoles>
  Standard_EXPORT virtual   Standard_Boolean Variable (math_Vector& X)  const;




protected:

  
  //! compute  the  poles wich correspond with the variable X
  Standard_EXPORT virtual   void ComputePoles (const math_Vector& X) ;
  
  //! compute the energy in intermediat format
  Standard_EXPORT virtual   Standard_Boolean Compute (const Standard_Integer DerivativeOrder, math_Vector& Result) ;




private:



  Standard_Real MyLengthSliding;
  Standard_Real OriginalSliding;
  FairCurve_BattenLaw MyBattenLaw;
  FairCurve_DistributionOfTension MyTension;
  FairCurve_DistributionOfSagging MySagging;
  FairCurve_AnalysisCode MyStatus;


};


#include <FairCurve_EnergyOfBatten.lxx>





#endif // _FairCurve_EnergyOfBatten_HeaderFile