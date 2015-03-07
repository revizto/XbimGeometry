// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccInt_BParab_HeaderFile
#define _GccInt_BParab_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_GccInt_BParab.hxx>

#include <gp_Parab2d.hxx>
#include <GccInt_Bisec.hxx>
#include <GccInt_IType.hxx>
class gp_Parab2d;


//! Describes a parabola as a bisecting curve between two
//! 2D geometric objects (such as lines, circles or points).
class GccInt_BParab : public GccInt_Bisec
{

public:

  
  //! Constructs a bisecting curve whose geometry is the 2D parabola Parab.
  Standard_EXPORT GccInt_BParab(const gp_Parab2d& Parab);
  
  //! Returns a 2D parabola which is the geometry of this bisecting curve.
  Standard_EXPORT virtual   gp_Parab2d Parabola()  const;
  
  //! Returns GccInt_Par, which is the type of any GccInt_BParab bisecting curve.
  Standard_EXPORT   GccInt_IType ArcType()  const;




  DEFINE_STANDARD_RTTI(GccInt_BParab)

protected:




private: 


  gp_Parab2d par;


};







#endif // _GccInt_BParab_HeaderFile