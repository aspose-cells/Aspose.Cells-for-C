#pragma once
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Int16.h"
#include "PivotTableAutoFormatType.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_SXLINODE() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotFieldCollection;
class PivotTable;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class SxLiNode : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Pivot::SxLiNode> parent;
			Aspose::Cells::System::Int32 index;
			Aspose::Cells::System::Int32 GetIndex();
			void SetIndex(Aspose::Cells::System::Int32 value);
			bool isMultiDataOnAxis;
			bool IsMultiDataOnAxis();
			void SetIsMultiDataOnAxis(bool value);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> children;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetChildren();
			void SetChildren(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> value);
			void AddChild(Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::Pivot::SxLiNode> node);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::SxLiNode> node);
			void CopyChildren(intrusive_ptr<Aspose::Cells::Pivot::SxLiNode> node);
			bool HasChilren();
			bool IsRoot();
			void ConverMulti(Aspose::Cells::System::Int32 count);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ToMultiRootSxli(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> table , bool isRow , Aspose::Cells::System::Int32 dataLayout);
			void ToMultiSxli(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> sxlis , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields , Aspose::Cells::System::Int32 layout , Aspose::Cells::System::Int32 dataFieldsCount , Aspose::Cells::Pivot::PivotTableAutoFormatType autoFormat , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> preLine , Aspose::Cells::System::Int32 dataItemIndex , Aspose::Cells::System::Int32 dataLayout , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> end);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ToRootSxli(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> table , bool isRow);
			void ToSxli(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> sxlis , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> fields , Aspose::Cells::System::Int32 layout , intrusive_ptr<Aspose::Cells::System::Array1D<bool>> hasSpace , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> preLine , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> end);
			 SxLiNode();
		public:
			virtual ~SxLiNode();
	};

}

}

}
