// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FEmTool_ElementsOfRefMatrix_HeaderFile
#define _FEmTool_ElementsOfRefMatrix_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_PLib_Base.hxx>
#include <Standard_Integer.hxx>
#include <math_FunctionSet.hxx>
#include <Standard_Boolean.hxx>
#include <math_Vector.hxx>
class PLib_Base;
class Standard_ConstructionError;


//! this  class  describes  the  functions  needed  for
//! calculating  matrix  elements  of  RefMatrix  for  linear
//! criteriums  (Tension,  Flexsion  and  Jerk) by  Gauss  integration.
//! Each  function  from  set  gives  value  Pi(u)'*Pj(u)'  or
//! Pi(u)''*Pj(u)''  or  Pi(u)'''*Pj(u)'''  for  each  i  and  j,
//! where  Pi(u)  is  i-th  basis  function  of  expansion  and
//! (')  means  derivative.
class FEmTool_ElementsOfRefMatrix  : public math_FunctionSet
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT FEmTool_ElementsOfRefMatrix(const Handle(PLib_Base)& TheBase, const Standard_Integer DerOrder);
  
  //! returns the number of variables of the function.
  //! It  is  supposed  that  NbVariables  =  1.
  Standard_EXPORT   Standard_Integer NbVariables()  const;
  
  //! returns the number of equations of the function.
  Standard_EXPORT   Standard_Integer NbEquations()  const;
  
  //! computes the values <F> of the functions for the
  //! variable <X>.
  //! returns True if the computation was done successfully,
  //! False otherwise.
  //! F  contains  results  only  for  i<=j  in  following  order:
  //! P0*P0,  P0*P1,  P0*P2...  P1*P1,  P1*P2,...  (upper  triangle of
  //! matrix  {PiPj})
  Standard_EXPORT   Standard_Boolean Value (const math_Vector& X, math_Vector& F) ;




protected:





private:



  Handle(PLib_Base) myBase;
  Standard_Integer myDerOrder;
  Standard_Integer myNbEquations;


};







#endif // _FEmTool_ElementsOfRefMatrix_HeaderFile