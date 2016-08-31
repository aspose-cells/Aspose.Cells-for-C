#pragma once
//#include "System/Text/StringBuilder.h"
//#include "System/BitConverter.h"
#include "System/Array1D.h"
//#include "System/Char.h"
#include "System/UInt16.h"
//#include "System/Array.h"
//#include "System/Text/Encoding.h"
#include "System/String.h"
//#include "System/Collections/Hashtable.h"
//#include "System/Int64.h"
#include "System/Text/RegularExpressions/Regex.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/Exception.h"
//#include "System/Int16.h"
#include "NameType.h"
#include "NameCommonInfo.h"
//#include "System/StringHelperPal.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_NAME() 

namespace Aspose {
namespace Cells {
class CellArea;
class CopyOptions;
class Range;
class WorksheetCollection;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class RangeReference;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataKeepName;
}
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API Name : public Aspose::Cells::System::Object
#else	class Name : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> m_custMenu;
			intrusive_ptr<Aspose::Cells::System::String> m_Description;
			intrusive_ptr<Aspose::Cells::System::String> m_helptoptic;
			intrusive_ptr<Aspose::Cells::System::String> m_statustext;
			intrusive_ptr<Aspose::Cells::System::String> m_comment;
			Aspose::Cells::System::Byte m_keyShort;
			Aspose::Cells::System::Byte m_BuiltInIndex;
			Aspose::Cells::System::Int32 m_SheetIndex;
			Aspose::Cells::WorksheetCollection* m_Sheets;
			static intrusive_ptr<Aspose::Cells::System::Text::RegularExpressions::Regex> m_NameTextHandler;
			void OnRefersToChanged();
			intrusive_ptr<Aspose::Cells::Range> CreateRange(intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> rr);
	public:

			 static const intrusive_ptr<Aspose::Cells::System::String> PrintAreaBuiltInText;
			 static const intrusive_ptr<Aspose::Cells::System::String> PrintTitlesBuiltText;
			intrusive_ptr<Aspose::Cells::OpenXML::DataKeepName> OpenXMLKeepData;
			intrusive_ptr<Aspose::Cells::NameCommonInfo> Props;
			Aspose::Cells::System::UInt16 GetOption();
			void SetOption(Aspose::Cells::System::UInt16 value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetBinaryFormula();
			void SetBinaryFormula(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			intrusive_ptr<Aspose::Cells::System::String> GetCustMenu();
			void SetCustMenu(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetDesc();
			void SetDesc(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetHelpToptic();
			void SetHelpToptic(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetStatusText();
			void SetStatusText(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetComment();
			void SetComment(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Byte GetKeyShort();
			void SetKeyShort(Aspose::Cells::System::Byte value);
			intrusive_ptr<Aspose::Cells::WorksheetCollection> GetSheets();
			intrusive_ptr<Aspose::Cells::System::String> m_RefersTo;
			 Name(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			 Name(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::String> text);
			 Name(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , intrusive_ptr<Aspose::Cells::System::String> text , Aspose::Cells::System::Int32 sheetIndex);
			static Aspose::Cells::System::Int32 ToBuiltInIndex(intrusive_ptr<Aspose::Cells::System::String> text);
			void SetBuiltInName(intrusive_ptr<Aspose::Cells::System::String> text);
			Aspose::Cells::System::Int32 GetIndex();
			intrusive_ptr<Aspose::Cells::System::String> GetText();
			void SetText(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetFullText();
			intrusive_ptr<Aspose::Cells::System::String> GetInternalText();
			void SetInternalText(intrusive_ptr<Aspose::Cells::System::String> text);
			intrusive_ptr<Aspose::Cells::System::String> GetRefersTo();
			void SetRefersTo(intrusive_ptr<Aspose::Cells::System::String> value);
			void SetInternalReferTo(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetRefersTo2007();
			void Set2007ReferTo(intrusive_ptr<Aspose::Cells::System::String> referTo);
			intrusive_ptr<Aspose::Cells::System::String> GetR1C1RefersTo();
			void SetR1C1RefersTo(intrusive_ptr<Aspose::Cells::System::String> value);
			bool IsReferred();
			bool IsVisible();
			void SetIsVisible(bool value);
			bool IsHidden();
			void SetIsHidden(bool value);
			bool IsMacro();
			bool IsProc();
			void SetIsProc(bool value);
			void RemoveCachedReferTo();
			Aspose::Cells::NameType GetType();
			void SetType(Aspose::Cells::NameType value);
			Aspose::Cells::System::Int32 GetSheetIndex();
			void SetSheetIndex(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetFirstRefSheetIndex();
			Aspose::Cells::System::Byte GetBuiltInIndex();
			void SetBuiltInIndex(Aspose::Cells::System::Byte value);
			void SetRange(Aspose::Cells::System::Int32 sheetIndex , intrusive_ptr<Aspose::Cells::CellArea> ca);
			static intrusive_ptr<Aspose::Cells::System::String> ToBuiltInText(Aspose::Cells::System::Byte builtInIndex);
			void ReadBIFF8(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetFormulaWithoutSize();
			void CreateMacroName(intrusive_ptr<Aspose::Cells::System::String> macroName);
			void Copy(intrusive_ptr<Aspose::Cells::Name> source , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void DecreaseSheetIndex();
			 virtual intrusive_ptr<Aspose::Cells::System::String> ToString();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetCellArea(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool calFlag);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetCellArea(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool calFlag);
			intrusive_ptr<Aspose::Cells::Range> CreateRange(bool calFlag);
			intrusive_ptr<Aspose::Cells::Range> CreateRange();
			void InsertRows(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 rowNumber);
			void InsertColumns(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 columnNumber);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Range*>> GetRanges();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Range*>> GetBuiltInRanges();
			intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> GetRangeReference();
			intrusive_ptr<Aspose::Cells::Range> GetRange();
			intrusive_ptr<Aspose::Cells::Range> GetRange(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::Range> GetRange(bool calFlag);
			void RemoveName();
			 Name();
		public:
			virtual ~Name();
	};

}

}
