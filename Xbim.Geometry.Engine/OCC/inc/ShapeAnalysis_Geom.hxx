// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeAnalysis_Geom_HeaderFile
#define _ShapeAnalysis_Geom_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <Handle_TColStd_HArray2OfReal.hxx>
class Standard_OutOfRange;
class TColgp_Array1OfPnt;
class gp_Pln;
class TColStd_HArray2OfReal;
class gp_Trsf;


//! Analyzing tool aimed to work on primitive geometrical objects
class ShapeAnalysis_Geom 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Builds a plane out of a set of points in array
  //! Returns in <dmax> the maximal distance between the produced
  //! plane and given points
  Standard_EXPORT static   Standard_Boolean NearestPlane (const TColgp_Array1OfPnt& Pnts, gp_Pln& aPln, Standard_Real& Dmax) ;
  
  //! Builds transfromation object out of matrix.
  //! Matrix must be 3 x 4.
  //! Unit is used as multiplier.
  Standard_EXPORT static   Standard_Boolean PositionTrsf (const Handle(TColStd_HArray2OfReal)& coefs, gp_Trsf& trsf, const Standard_Real unit, const Standard_Real prec) ;




protected:





private:





};







#endif // _ShapeAnalysis_Geom_HeaderFile