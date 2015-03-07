// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_ArcFunction_HeaderFile
#define _IntPatch_ArcFunction_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Adaptor2d_HCurve2d.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <IntSurf_Quadric.hxx>
#include <gp_Pnt.hxx>
#include <TColgp_SequenceOfPnt.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
class Adaptor2d_HCurve2d;
class Adaptor3d_HSurface;
class IntSurf_Quadric;
class gp_Pnt;



class IntPatch_ArcFunction  : public math_FunctionWithDerivative
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntPatch_ArcFunction();
  
      void SetQuadric (const IntSurf_Quadric& Q) ;
  
      void Set (const Handle(Adaptor2d_HCurve2d)& A) ;
  
      void Set (const Handle(Adaptor3d_HSurface)& S) ;
  
  Standard_EXPORT   Standard_Boolean Value (const Standard_Real X, Standard_Real& F) ;
  
  Standard_EXPORT   Standard_Boolean Derivative (const Standard_Real X, Standard_Real& D) ;
  
  Standard_EXPORT   Standard_Boolean Values (const Standard_Real X, Standard_Real& F, Standard_Real& D) ;
  
  Standard_EXPORT   Standard_Integer NbSamples()  const;
  
  Standard_EXPORT virtual   Standard_Integer GetStateNumber() ;
  
     const  gp_Pnt& Valpoint (const Standard_Integer Index)  const;
  
     const  IntSurf_Quadric& Quadric()  const;
  
     const  Handle(Adaptor2d_HCurve2d)& Arc()  const;
  
     const  Handle(Adaptor3d_HSurface)& Surface()  const;




protected:





private:



  Handle(Adaptor2d_HCurve2d) myArc;
  Handle(Adaptor3d_HSurface) mySurf;
  IntSurf_Quadric myQuad;
  gp_Pnt ptsol;
  TColgp_SequenceOfPnt seqpt;


};


#include <IntPatch_ArcFunction.lxx>





#endif // _IntPatch_ArcFunction_HeaderFile