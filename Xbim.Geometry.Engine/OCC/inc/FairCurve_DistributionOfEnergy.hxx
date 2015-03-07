// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FairCurve_DistributionOfEnergy_HeaderFile
#define _FairCurve_DistributionOfEnergy_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Handle_TColgp_HArray1OfPnt2d.hxx>
#include <math_FunctionSet.hxx>
class TColStd_HArray1OfReal;
class TColgp_HArray1OfPnt2d;


//! Abstract class to use the Energy of an FairCurve
class FairCurve_DistributionOfEnergy  : public math_FunctionSet
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! returns the number of variables of the function.
  Standard_EXPORT virtual   Standard_Integer NbVariables()  const;
  
  //! returns the number of equations of the function.
  Standard_EXPORT virtual   Standard_Integer NbEquations()  const;
  
  Standard_EXPORT   void SetDerivativeOrder (const Standard_Integer DerivativeOrder) ;




protected:

  
  Standard_EXPORT FairCurve_DistributionOfEnergy(const Standard_Integer BSplOrder, const Handle(TColStd_HArray1OfReal)& FlatKnots, const Handle(TColgp_HArray1OfPnt2d)& Poles, const Standard_Integer DerivativeOrder, const Standard_Integer NbValAux = 0);


  Standard_Integer MyBSplOrder;
  Handle(TColStd_HArray1OfReal) MyFlatKnots;
  Handle(TColgp_HArray1OfPnt2d) MyPoles;
  Standard_Integer MyDerivativeOrder;
  Standard_Integer MyNbVar;
  Standard_Integer MyNbEqua;
  Standard_Integer MyNbValAux;


private:





};







#endif // _FairCurve_DistributionOfEnergy_HeaderFile