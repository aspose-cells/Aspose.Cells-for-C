#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Text/RegularExpressions/Regex.h"
//#include "System/String.h"
//#include "System/Boxing.h"
#include "CustomFilter.h"
#include "FilterOperatorType.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_CUSTOMFILTERCOLLECTION() 

namespace Aspose {
namespace Cells {
class Cell;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API CustomFilterCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class CustomFilterCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
			bool m_And;
			bool IsTrueCriteria(intrusive_ptr<Aspose::Cells::System::Object> o , Aspose::Cells::FilterOperatorType operatorType , intrusive_ptr<Aspose::Cells::System::Object> criteria , bool date1904);
			bool IsTrueCriteria(intrusive_ptr<Aspose::Cells::Cell> cell , Aspose::Cells::FilterOperatorType operatorType , intrusive_ptr<Aspose::Cells::System::Object> criteria , bool date1904);
	public:

			void Copy(intrusive_ptr<Aspose::Cells::CustomFilterCollection> source);
			bool GetAnd();
			void SetAnd(bool value);
			void Add(intrusive_ptr<Aspose::Cells::CustomFilter> customFilter);
			intrusive_ptr<Aspose::Cells::CustomFilter> GetIndexObject(Aspose::Cells::System::Int32 index);
			bool IsVisibleRow(intrusive_ptr<Aspose::Cells::System::Object> o , bool date1904);
			bool IsVisibleRow(intrusive_ptr<Aspose::Cells::Cell> cell , bool date1904);
			 CustomFilterCollection();
		public:
			virtual ~CustomFilterCollection();
	};

}

}
