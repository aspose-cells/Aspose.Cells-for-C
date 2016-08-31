#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/Collections/ArrayList.h"
#include "System/String.h"
#include "System/Collections/Hashtable.h"
#include "System/Int32.h"
#define STATIC_DATAKEEPSHEET() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataKeepSheet : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 DataKeepSheet(intrusive_ptr<Aspose::Cells::Worksheet> worksheet);
			Aspose::Cells::Worksheet* Worksheet;
			intrusive_ptr<Aspose::Cells::System::String> OriginEntryName;
			intrusive_ptr<Aspose::Cells::System::String> OriginDrawingEntryName;
			intrusive_ptr<Aspose::Cells::System::String> OriginVMLDrawingEntryName;
			intrusive_ptr<Aspose::Cells::System::String> SheetPrPublishedString;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ExtMap;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> KeepRootAttrList;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> TableSingleCellsXml;
			bool HasReadInVmlDrawing();
			bool HasReadInDrawing;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> KeepRelInfoList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> AlternativeChoiceList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> AlternativeFallbackList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> KeepVmlShapeIdList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ReadedVmlShapeIdList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ReadedVmlShapeSpIdList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ReadedVmlImageShapeIdList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> KeepVmlRelInfoList;
			void InsertRows(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 rowNumber);
			void InsertColumns(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 columNumber);
			 DataKeepSheet();
		public:
			virtual ~DataKeepSheet();
	};

}

}

}
