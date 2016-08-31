#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/String.h"
#include "System/DateTime.h"
#include "System/Double.h"
#include "System/UInt16.h"
#include "System/Int32.h"
//#include "System/Boxing.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_PIVOTITEM() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotField;
class PivotItemCollection;
class SxFDB;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
#ifdef WIN32

	class ASPOSE_CELLS_API PivotItem : public Aspose::Cells::System::Object
#else	class PivotItem : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Pivot::PivotItemCollection* _u_pivotItems;
			Aspose::Cells::System::UInt16 _type;
			Aspose::Cells::System::UInt16 _sxViOption;
			intrusive_ptr<Aspose::Cells::System::String> _name;
			Aspose::Cells::Pivot::PivotField* _dataField;
			Aspose::Cells::System::Int32 _dataIndex;
			bool _isHaveChild;
			bool _isExpand;
			bool _isChar;
			intrusive_ptr<Aspose::Cells::System::Object> _keepValue;
			 PivotItem(intrusive_ptr<Aspose::Cells::Pivot::PivotItemCollection> pivotItems);
			 PivotItem(intrusive_ptr<Aspose::Cells::Pivot::PivotItemCollection> pivotItems , intrusive_ptr<Aspose::Cells::Pivot::PivotField> pivotField);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::PivotItem> item);
			bool IsHidden();
			void SetIsHidden(bool value);
			void SetPosition(Aspose::Cells::System::Int32 value);
			void SetPositionInSameParentNode(Aspose::Cells::System::Int32 value);
			void Move(Aspose::Cells::System::Int32 count , bool isSameParent);
			void MoveInSameParentNode(Aspose::Cells::System::Int32 count);
			void Move(Aspose::Cells::System::Int32 count);
			bool IsHideDetail();
			void SetIsHideDetail(bool value);
			bool IsFormula();
			void SetIsFormula(bool value);
			bool IsMissing();
			void SetIsMissing(bool value);
			bool GetSxViOption(Aspose::Cells::System::Int32 mask);
			void SetSxViOption(bool boolValue , Aspose::Cells::System::Int32 mask);
			intrusive_ptr<Aspose::Cells::Pivot::SxFDB> GetSxFDB();
			intrusive_ptr<Aspose::Cells::System::String> GetStringValue();
			Aspose::Cells::System::Double GetDoubleValue();
			intrusive_ptr<Aspose::Cells::System::DateTime> GetDateTimeValue();
			intrusive_ptr<Aspose::Cells::System::Object> GetValue();
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			intrusive_ptr<Aspose::Cells::System::String> GetSxLiName();
			Aspose::Cells::System::Int32 GetIndex();
			void SetIndex(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetInternalPosition();
			 PivotItem();
		public:
			virtual ~PivotItem();
	};

}

}

}
