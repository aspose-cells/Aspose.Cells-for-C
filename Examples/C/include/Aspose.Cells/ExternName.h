#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
#include "Constants.h"
//#include "System/Char.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_EXTERNNAME() 

namespace Aspose {
namespace Cells {
class SupbookData;
class NameCommonInfo;
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
	class ExternName : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::SupbookData* supData;
			Aspose::Cells::System::Int32 m_reserved;
			intrusive_ptr<Aspose::Cells::System::String> m_FormulaString;
			Aspose::Cells::System::Byte externOptoin;
	public:

			intrusive_ptr<Aspose::Cells::NameCommonInfo> Props;
			intrusive_ptr<Aspose::Cells::SupbookData> GetSupbookData();
			void Copy(intrusive_ptr<Aspose::Cells::ExternName> source);
			 ExternName(intrusive_ptr<Aspose::Cells::SupbookData> supbookData);
			Aspose::Cells::System::Int32 GetReServed();
			void SetReServed(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetStorageId();
			void SetStorageId(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetSheetIndex();
			void SetSheetIndex(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetBinaryFormula();
			void SetBinaryFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			intrusive_ptr<Aspose::Cells::System::String> GetInternalFormula(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			void SetInternalFormula(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::String> formula);
			bool GetInternalRange(bool is2007 , Aspose::Cells::System::Int32& startSheetIndex , Aspose::Cells::System::Int32& endSheetIndex , Aspose::Cells::System::Int32& startRow , Aspose::Cells::System::Int32& endRow , Aspose::Cells::System::Int32& startColumn , Aspose::Cells::System::Int32& endColumn);
			Aspose::Cells::System::UInt16 GetGrbit();
			void SetGrbit(Aspose::Cells::System::UInt16 value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetAdditionalData();
			void SetAdditionalData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			Aspose::Cells::System::Int32 BuiltInIndex;
			bool IsBuiltIn();
			void SetIsBuiltIn(bool value);
			bool GetAutoUpdate();
			void SetAutoUpdate(bool value);
			bool IsDDEOle();
			void SetIsDDEOle(bool value);
			bool IsOleLink();
			void SetIsOleLink(bool value);
			bool IsAdvise();
			void SetIsAdvise(bool value);
			bool IsIcon();
			void SetIsIcon(bool value);
			bool IsName();
			void SetIsName(bool value);
			bool IsPreferPic();
			void SetIsPreferPic(bool value);
			void SetInternalAddIn(intrusive_ptr<Aspose::Cells::System::String> functionName , bool is2007);
			 ExternName();
		public:
			virtual ~ExternName();
	};

}

}
