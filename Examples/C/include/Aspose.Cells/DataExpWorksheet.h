#pragma once
//#include "System/Int32Helper.h"
#include "System/IDisposable.h"
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/GC.h"
//#include "System/Char.h"
#include "System/Array1D.h"
#include "System/Collections/Hashtable.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Text/Encoding.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Drawing/Image.h"
#define STATIC_DATAEXPWORKSHEET() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CustomSheetView;
class QueryTableCollection;
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataExpWhole;
class DataRelationship;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataExpWorksheet : public Aspose::Cells::System::IDisposable , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> keepIdList;
			intrusive_ptr<Aspose::Cells::System::String> GetNewRId(intrusive_ptr<Aspose::Cells::System::String> originId);
			void InitCustPropertyList();
			void InitBgPicture();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> TransToPngFormat(intrusive_ptr<Aspose::Cells::System::Drawing::Image> img);
			void CreatePrinterSetting(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , intrusive_ptr<Aspose::Cells::CustomSheetView> cView , bool isBinary);
			void InitprinterSettings(bool isBinary);
			void InitComments();
			void InitVmlDrawing();
			void AddPivotRelInfo();
			void AddPivotSlicerRelInfo();
			void AddKeepRelInfo();
			void InitDrawingInfo();
			void InitHFVmlDrawingRelList();
			void InitHrefInfoList();
			intrusive_ptr<Aspose::Cells::System::String> AddToRelList(intrusive_ptr<Aspose::Cells::System::String> type , intrusive_ptr<Aspose::Cells::System::String> target , intrusive_ptr<Aspose::Cells::System::String> targetMode);
			Aspose::Cells::System::Int32 GetNexRelId();
	public:

			void Dispose();
			Aspose::Cells::Worksheet* Worksheet;
			Aspose::Cells::Workbook* Workbook;
			Aspose::Cells::System::Int32 SheetsElmIdx;
			Aspose::Cells::System::Int32 SheetFileId;
			Aspose::Cells::OpenXML::DataExpWhole* ExpData;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> HrefInfoList;
			intrusive_ptr<Aspose::Cells::System::String> CommentFileName;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> RelList;
			Aspose::Cells::System::Int32 MaxRelId;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> RelIdMap;
			intrusive_ptr<Aspose::Cells::System::String> RId;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> OleObjDataList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> ControlList;
			intrusive_ptr<Aspose::Cells::System::String> BgPictureRId;
			intrusive_ptr<Aspose::Cells::System::String> PrinterSettingsRId;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> PrinterSettings;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> CustPropertyList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> Tables;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> AlternateVmlShapes;
			 DataExpWorksheet(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> expData , intrusive_ptr<Aspose::Cells::Worksheet> worksheet , Aspose::Cells::System::Int32 sheetsElmIdx , Aspose::Cells::System::Int32 sheetFileId);
			void InitQueryTable(intrusive_ptr<Aspose::Cells::QueryTableCollection> qs);
			void InitActiveX();
			void InitTables(bool isBinary);
			Aspose::Cells::System::Int32 QueryTableId;
			intrusive_ptr<Aspose::Cells::System::String> TableSingleCellsPath;
			void UpdateKeepRelList();
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> SlicerMap;
			bool HasComment();
			void AddToRelListWithId(intrusive_ptr<Aspose::Cells::System::String> relId , intrusive_ptr<Aspose::Cells::System::String> type , intrusive_ptr<Aspose::Cells::System::String> target);
			intrusive_ptr<Aspose::Cells::OpenXML::DataRelationship> AddToRelList(intrusive_ptr<Aspose::Cells::System::String> type , intrusive_ptr<Aspose::Cells::System::String> target);
			 DataExpWorksheet();
		public:
			virtual ~DataExpWorksheet();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
