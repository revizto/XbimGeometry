// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData.hxx>

#include <Standard_Type.hxx>

#include <TopoDS_Shape.hxx>
#include <TopOpeBRepDS_ShapeData.hxx>
#include <TopTools_ShapeMapHasher.hxx>
#include <TopOpeBRepDS_MapOfShapeData.hxx>

 


IMPLEMENT_STANDARD_TYPE(TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData)


IMPLEMENT_DOWNCAST(TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData)


#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem TopOpeBRepDS_ShapeData
#define TheItem_hxx <TopOpeBRepDS_ShapeData.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_IndexedDataMapNode TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData
#define TCollection_IndexedDataMapNode_hxx <TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData
#define TCollection_IndexedDataMapNode_Type_() TopOpeBRepDS_IndexedDataMapNodeOfMapOfShapeData_Type_()
#define TCollection_IndexedDataMap TopOpeBRepDS_MapOfShapeData
#define TCollection_IndexedDataMap_hxx <TopOpeBRepDS_MapOfShapeData.hxx>
#include <TCollection_IndexedDataMapNode.gxx>
