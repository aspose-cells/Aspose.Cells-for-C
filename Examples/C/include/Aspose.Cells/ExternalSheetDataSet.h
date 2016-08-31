#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "IIndexedList.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_EXTERNALSHEETDATASET() 

namespace Aspose {
namespace Cells {
class ExternalRow;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataKeep;
}
}
}

namespace Aspose {
namespace Cells {
	class ExternalSheetDataSet : public Aspose::Cells::Collections::IIndexedList
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> Rows;
			intrusive_ptr<Aspose::Cells::OpenXML::DataKeep> _openXMLKeepData;
			Aspose::Cells::System::Int32 GetCount();
			Aspose::Cells::System::Int32 GetIndex(Aspose::Cells::System::Int32 position);
			intrusive_ptr<Aspose::Cells::OpenXML::DataKeep> GetOpenXMLKeepData();
			 ExternalSheetDataSet();
			void Copy(intrusive_ptr<Aspose::Cells::ExternalSheetDataSet> source);
			Aspose::Cells::System::Int32 GetMaxRow();
			Aspose::Cells::System::Int32 GetMinRow();
			bool HasData();
			Aspose::Cells::System::Int32 GetFirstRow(Aspose::Cells::System::Int32 startRowIndex , Aspose::Cells::System::Int32 endRowIndex);
			intrusive_ptr<Aspose::Cells::ExternalRow> GetRowOrNull(Aspose::Cells::System::Int32 rowIndex);
			intrusive_ptr<Aspose::Cells::ExternalRow> GetRowByPosition(Aspose::Cells::System::Int32 pos);
			Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 rowIndex);
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> GetCell(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex);
			intrusive_ptr<Aspose::Cells::System::Object> GetCellValue(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex);
			intrusive_ptr<Aspose::Cells::ExternalRow> GetRow(Aspose::Cells::System::Int32 rowIndex);
			void AddCellValue(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex , intrusive_ptr<Aspose::Cells::System::Object> value);
		public:
			virtual ~ExternalSheetDataSet();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
