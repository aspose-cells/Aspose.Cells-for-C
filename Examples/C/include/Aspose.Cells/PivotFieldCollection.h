#pragma once
//#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
//#include "System/Int16.h"
#include "PivotField.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "PivotFieldType.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_PIVOTFIELDCOLLECTION() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotTable;
class SxFDB;
class PivotCache;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
#ifdef WIN32

	class ASPOSE_CELLS_API PivotFieldCollection : public Aspose::Cells::System::Object
#else	class PivotFieldCollection : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			void CheckValidBeforeDrag(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field , Aspose::Cells::System::Int32 limitation);
			void SetFieldLayout(Aspose::Cells::System::Int32 index);
	public:

			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> InnerList;
			Aspose::Cells::Pivot::PivotTable* _u_pivotTable;
			Aspose::Cells::Pivot::PivotFieldType _type;
			Aspose::Cells::System::Int32 StartDrawingId;
			 PivotFieldCollection(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable , Aspose::Cells::Pivot::PivotFieldType fieldType);
			 PivotFieldCollection(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable , intrusive_ptr<Aspose::Cells::Pivot::PivotCache> pivotCache);
			 PivotFieldCollection(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable , intrusive_ptr<Aspose::Cells::Pivot::PivotCache> pivotCache , Aspose::Cells::System::Int32 count);
			void AddBasedCalculatedField(intrusive_ptr<Aspose::Cells::Pivot::SxFDB> record);
			Aspose::Cells::Pivot::PivotFieldType GetType();
			Aspose::Cells::System::Int32 GetCount();
			intrusive_ptr<Aspose::Cells::Pivot::PivotField> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Pivot::PivotField> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> name);
			void RemoveAt(Aspose::Cells::System::Int32 index);
			bool HasInsertBlankLineField();
			Aspose::Cells::System::Int32 GetDataFieldCount();
			Aspose::Cells::System::Int32 AddByBaseIndex(Aspose::Cells::System::Int32 baseFieldIndex);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField , Aspose::Cells::System::Int32 index);
			void SetFieldLayouts();
			void AddReadField(intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField);
			void InnerRemove(intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField);
			void Clear();
			void Remove(intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField);
			void InitDataPivotField(bool flag , Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 Postion(intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField);
			intrusive_ptr<Aspose::Cells::System::Object> GetFieldFromName(intrusive_ptr<Aspose::Cells::System::String> name);
			void RemoveOtherField(intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField);
			 PivotFieldCollection();
		public:
			virtual ~PivotFieldCollection();
	};

}

}

}
