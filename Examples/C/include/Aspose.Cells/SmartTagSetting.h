#pragma once
#include "System/Object.h"
//#include "System/Collections/ArrayList.h"
#include "System/Collections/CollectionBase.h"
#include "System/Int32.h"
#include "System/String.h"
#include "SmartTagCollection.h"
#define STATIC_SMARTTAGSETTING() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}

namespace Aspose {
namespace Cells {
namespace Markup {
#ifdef WIN32

	class ASPOSE_CELLS_API SmartTagSetting : public Aspose::Cells::System::Collections::CollectionBase
#else	class SmartTagSetting : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::Worksheet* sheet;
	public:

			intrusive_ptr<Aspose::Cells::Worksheet> GetSheet();
			 SmartTagSetting(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> cellName);
			intrusive_ptr<Aspose::Cells::Markup::SmartTagCollection> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Markup::SmartTagCollection> GetIndexObject(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::Markup::SmartTagCollection> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> cellName);
			void Copy(intrusive_ptr<Aspose::Cells::Markup::SmartTagSetting> source);
			void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows);
			void InsertColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 totalColumns);
			void CopyRows(intrusive_ptr<Aspose::Cells::Markup::SmartTagSetting> source , Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 destRow);
			void CopyColumns(intrusive_ptr<Aspose::Cells::Markup::SmartTagSetting> source , Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 totalColumns , Aspose::Cells::System::Int32 destColumn);
			void CopyRange(intrusive_ptr<Aspose::Cells::Markup::SmartTagSetting> source , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn , Aspose::Cells::System::Int32 destRow , Aspose::Cells::System::Int32 destColumn);
			 SmartTagSetting();
		public:
			virtual ~SmartTagSetting();
	};

}

}

}
