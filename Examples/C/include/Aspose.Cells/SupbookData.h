#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Text/StringBuilder.h"
#include "System/String.h"
#include "System/Array1D.h"
#include "System/Char.h"
//#include "System/DateTime.h"
//#include "System/CharHelper.h"
#include "EncodedFlag.h"
#include "SupbookType.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_SUPBOOKDATA() 

namespace Aspose {
namespace Cells {
class Workbook;
class ExternalSheetDataSet;
class ExternName;
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
	class SupbookData : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::SupbookType type;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> externNameList;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sheetNamesList;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_DataSets;
			intrusive_ptr<Aspose::Cells::System::String> m_encodedURL;
	public:

			 SupbookData();
			 SupbookData(Aspose::Cells::SupbookType type);
			 SupbookData(intrusive_ptr<Aspose::Cells::Workbook> sourceWorkbook);
			Aspose::Cells::SupbookType GetType();
			void SetType(Aspose::Cells::SupbookType value);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetExternNameList();
			void SetExternNameList(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> value);
			Aspose::Cells::System::Int32 AddNameX(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::String> functionName);
			void AddSheet(intrusive_ptr<Aspose::Cells::System::String> sheetName);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetSheetNamesList();
			void SetSheetNamesList(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> value);
			Aspose::Cells::System::Int32 GetSheetIndex(intrusive_ptr<Aspose::Cells::System::String> sheetName);
			bool Equals(intrusive_ptr<Aspose::Cells::SupbookData> source);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetDataSets();
			void SetDataSets(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> dataSets);
			intrusive_ptr<Aspose::Cells::ExternalSheetDataSet> GetDataSet(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::ExternalSheetDataSet> GetDataSetOrNull(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::ExternalSheetDataSet> GetDataSetOrNull(intrusive_ptr<Aspose::Cells::System::String> sheetName);
			intrusive_ptr<Aspose::Cells::ExternalSheetDataSet> GetDataSet(intrusive_ptr<Aspose::Cells::System::String> sheetName);
			bool IsInternal();
			bool IsAddIn();
			bool IsAddInExternal();
			bool IsExternalRef();
			Aspose::Cells::System::Int32 CheckExNameExist(intrusive_ptr<Aspose::Cells::ExternName> n , Aspose::Cells::System::Int32 i);
			void Copy(intrusive_ptr<Aspose::Cells::SupbookData> source);
			intrusive_ptr<Aspose::Cells::System::String> m_OriginalURL;
			intrusive_ptr<Aspose::Cells::System::String> GetEncodedURL();
			void SetEncodedURL(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetOriginalURL();
			intrusive_ptr<Aspose::Cells::System::String> GetUncodedURL();
			static intrusive_ptr<Aspose::Cells::System::String> GetUncodedFullURL(intrusive_ptr<Aspose::Cells::System::String> m_encodedURL , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			intrusive_ptr<Aspose::Cells::System::String> GetUncodedFullURL(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			void GetLinkedData(intrusive_ptr<Aspose::Cells::System::String>& progId , intrusive_ptr<Aspose::Cells::System::String>& fileName);
			void SetLinkedData(intrusive_ptr<Aspose::Cells::System::String> progId , intrusive_ptr<Aspose::Cells::System::String> fileName);
			void Get2007LinkedData(intrusive_ptr<Aspose::Cells::System::String>& progId , intrusive_ptr<Aspose::Cells::System::String>& fileName);
			void Set2007LinkedData(intrusive_ptr<Aspose::Cells::System::String> progId , intrusive_ptr<Aspose::Cells::System::String> fileName);
			void SetURL(intrusive_ptr<Aspose::Cells::System::String> url , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sheetNamesList , Aspose::Cells::EncodedFlag flag);
			intrusive_ptr<Aspose::Cells::System::String> GetURL();
			intrusive_ptr<Aspose::Cells::System::String> GetUrlFor2007();
			void SetUrlFor2007(intrusive_ptr<Aspose::Cells::System::String> value);
			static intrusive_ptr<Aspose::Cells::System::String> EncodeURL(intrusive_ptr<Aspose::Cells::System::String> url , Aspose::Cells::EncodedFlag flag);
			static intrusive_ptr<Aspose::Cells::System::String> UnEncodeURL(intrusive_ptr<Aspose::Cells::System::String> url);
			static Aspose::Cells::System::Char ConvertEnodeFlag(Aspose::Cells::EncodedFlag flag);
		public:
			virtual ~SupbookData();
	};

}

}
