#pragma once
//#include "System/UInt16.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
#include "ExcelVersion.h"
#include "CopyType.h"
#include "System/Collections/Hashtable.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
#define STATIC_COPYOPTIONS() 

namespace Aspose {
namespace Cells {
class Worksheet;
class InternalColor;
class Cell;
class Workbook;
class Range;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API CopyOptions : public Aspose::Cells::System::Object
#else	class CopyOptions : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> NameIndexHashes;
			bool m_CopyInvalidFormulasAsValues;
			bool m_CopyNames;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> refMap;
			Aspose::Cells::System::Int32 _ErrRef;
			Aspose::Cells::System::Int32 _sourceMappedGlobalRefId;
			void CreateSourceSupbook();
			void CreateExteralSuppbook(Aspose::Cells::System::Int32 sourceSupbookIndex);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Collections::Hashtable*>> ExNameHashes;
			void AddExtNameHash(Aspose::Cells::System::Int32 supbook , Aspose::Cells::System::Int32 s , Aspose::Cells::System::Int32 c);
			void MergeSupbook(Aspose::Cells::System::Int32 sIndex , Aspose::Cells::System::Int32 cIndex);
			bool m_ColumnCharacterWidth;
			bool m_ReferToSheetWithSameName;
	public:

			 CopyOptions();
			 CopyOptions(Aspose::Cells::CopyType copyType);
			 CopyOptions(Aspose::Cells::CopyType copyType , intrusive_ptr<Aspose::Cells::Cell> source , intrusive_ptr<Aspose::Cells::Cell> dest);
			 CopyOptions(Aspose::Cells::CopyType copyType , intrusive_ptr<Aspose::Cells::Workbook> source , intrusive_ptr<Aspose::Cells::Workbook> dest);
			intrusive_ptr<Aspose::Cells::Worksheet> _SourceSheet;
			intrusive_ptr<Aspose::Cells::Worksheet> _CurSheet;
			 CopyOptions(Aspose::Cells::CopyType copyType , intrusive_ptr<Aspose::Cells::Worksheet> sourceSheet , intrusive_ptr<Aspose::Cells::Worksheet> destSheet);
			bool IsValidFormula;
			void InitNameMap(Aspose::Cells::System::Int32 curSheetCount);
			bool IsTotal();
			bool IsInSameWorkbook();
			bool IsInSameSheet();
			intrusive_ptr<Aspose::Cells::Range> CopyRange(intrusive_ptr<Aspose::Cells::Range> range);
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ListObjectMap;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> XFMaps;
			Aspose::Cells::CopyType _CopyType;
			bool HasSameDefaultFont;
			void InitHasSameDefaultFont();
			bool CopySpId;
			bool GetCopyNames();
			void SetCopyNames(bool value);
			Aspose::Cells::Workbook* SourceWorkbook;
			Aspose::Cells::Workbook* DestWorkbook;
			Aspose::Cells::System::Int32 GetErrRef();
			void InitWorksheet(intrusive_ptr<Aspose::Cells::Worksheet> sourceSheet , intrusive_ptr<Aspose::Cells::Worksheet> curSheet);
			void InitRefMap(Aspose::Cells::System::Int32 curSheetCount);
			void InitInvalidFormulas();
			Aspose::Cells::System::Int32 GetGlobalExtSheetRef();
			Aspose::Cells::System::Int32 GetExtSheetIndex(Aspose::Cells::System::Int32 sourceRefIndex);
			Aspose::Cells::System::Int32 GetXfIndex(Aspose::Cells::System::Int32 xfIndex);
			Aspose::Cells::System::Int32 GetDxfIndex(Aspose::Cells::System::Int32 xfIndex);
			Aspose::Cells::System::Int32 GetPlaceHoldName(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 GetNameIndex(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 GetExtNameIndex(Aspose::Cells::System::Int32 refIndex , Aspose::Cells::System::Int32 nameIndex);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetExtNameIndex(Aspose::Cells::System::Int32 nameIndex);
			void AddTableMap(Aspose::Cells::System::Int32 sourceId , Aspose::Cells::System::Int32 curId);
			Aspose::Cells::System::Int32 GetTableId(Aspose::Cells::System::Int32 sourceListId);
			bool GetCopyInvalidFormulasAsValues();
			void SetCopyInvalidFormulasAsValues(bool value);
			void Reset();
			bool GetColumnCharacterWidth();
			void SetColumnCharacterWidth(bool value);
			bool GetReferToSheetWithSameName();
			void SetReferToSheetWithSameName(bool value);
			Aspose::Cells::ExcelVersion GetSourceExcelVersion();
			Aspose::Cells::ExcelVersion GetDestExcelVersion();
			intrusive_ptr<Aspose::Cells::InternalColor> ReplaceColor;
		public:
			virtual ~CopyOptions();
	};

}

}
