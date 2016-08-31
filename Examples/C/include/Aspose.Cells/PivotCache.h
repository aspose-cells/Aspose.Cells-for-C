#pragma once
#include "System/Collections/ArrayList.h"
#include "System/Text/StringBuilder.h"
//#include "System/Int64Helper.h"
//#include "System/Double.h"
#include "System/Array1D.h"
//#include "System/Char.h"
#include "System/UInt16.h"
//#include "System/GC.h"
//#include "System/Type.h"
#include "System/Collections/Hashtable.h"
#include "System/String.h"
//#include "System/ArgumentException.h"
#include "PivotSourceCreaterType.h"
//#include "System/Math.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "System/Byte.h"
#include "System/Int32.h"
#include "PivotTableSourceType.h"
//#include "System/Int32Helper.h"
//#include "System/Int64.h"
//#include "System/Decimal.h"
#include "System/DateTime.h"
//#include "System/CharHelper.h"
//#include "System/StringHelperPal.h"
//#include "System/TypeCode.h"
#define STATIC_PIVOTCACHE() 

namespace Aspose {
namespace Cells {
class Worksheet;
class CopyOptions;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotPageFields;
class SxFDB;
class PivotCacheDataSource;
class SheetPivotCacheDataSource;
class PivotTable;
class ConsolidationPivotCacheDataSource;
class PivotCacheCollection;
class PivotAdditionalInfos;
class PivotCacheRecords;
class PivotCalculateItems;
}
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
class Bin2007To2003;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class PivotCache : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void InitRecords(intrusive_ptr<Aspose::Cells::Pivot::SheetPivotCacheDataSource> source);
	public:

			void Dispose();
			bool isExcel2003Compatible;
			Aspose::Cells::System::Int32 Id;
			Aspose::Cells::System::Int32 PivotCacheId;
			intrusive_ptr<Aspose::Cells::System::String> Uri;
			Aspose::Cells::Pivot::PivotCacheCollection* _u_pivotCaches;
			Aspose::Cells::Pivot::PivotTableSourceType GetSourceType();
			bool IsNotSupported();
			Aspose::Cells::Pivot::PivotSourceCreaterType GetCreaterType();
			intrusive_ptr<Aspose::Cells::Pivot::PivotCacheDataSource> _DataSource;
			Aspose::Cells::System::UInt16 _sxdbOption;
			Aspose::Cells::System::Int32 GetNumberOfBaseFields();
			Aspose::Cells::System::Int32 GetRecordCount();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetSourceData();
			intrusive_ptr<Aspose::Cells::Pivot::PivotCacheRecords> C8Records;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _sxFDBs;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _keepSxFDBs;
			intrusive_ptr<Aspose::Cells::System::DateTime> _refreshDate;
			intrusive_ptr<Aspose::Cells::Pivot::PivotCalculateItems> PivotFormulas;
			intrusive_ptr<Aspose::Cells::System::String> Author;
			intrusive_ptr<Aspose::Cells::System::String> _createdVersion;
			intrusive_ptr<Aspose::Cells::System::String> _refreshedVersion;
			intrusive_ptr<Aspose::Cells::System::String> _minRefreshableVersion;
			Aspose::Cells::System::Int32 NumberOfEachBlock;
			intrusive_ptr<Aspose::Cells::Pivot::PivotAdditionalInfos> _additionalInfos;
			Aspose::Cells::System::Int32 _missingItemsLimit;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Data;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> RecordsData;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _keepedRels;
			bool _isModifyFlag;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> _keepExtXlsb;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> _keepPCDSRangeXlsb;
			bool IsRefByOther(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pt);
			 PivotCache(intrusive_ptr<Aspose::Cells::Pivot::PivotCacheCollection> pivotCaches , Aspose::Cells::Pivot::PivotTableSourceType sourceType , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sourceData , intrusive_ptr<Aspose::Cells::Pivot::PivotPageFields> pageFields , bool autoPage , Aspose::Cells::System::Int32 streamId , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			 PivotCache(intrusive_ptr<Aspose::Cells::Pivot::PivotCacheCollection> pivotCaches);
			bool IsInSameSheet(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> pivotCache , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			intrusive_ptr<Aspose::Cells::Pivot::SxFDB> CurrentSxFDBRecord;
			Aspose::Cells::System::Int32 ParseCalculatedField(intrusive_ptr<Aspose::Cells::System::String> formula);
			void AddCalculatedField(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> formula);
			Aspose::Cells::System::Int32 GetIndex();
			void InitSxFdb(Aspose::Cells::System::Int32 index);
			void InsertRowsInSmart(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			void InsertColumns(Aspose::Cells::System::Int32 colIndex , Aspose::Cells::System::Int32 totalColumns , intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			intrusive_ptr<Aspose::Cells::System::String> GetSxNameFormula(Aspose::Cells::System::Int32 nameIndex);
			void ToSxNameFormula(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , Aspose::Cells::System::Int32 nameIndex);
			void GetCalculateFields(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> calList);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetCalculateItems(intrusive_ptr<Aspose::Cells::Pivot::SxFDB> fdb);
			intrusive_ptr<Aspose::Cells::Pivot::PivotCalculateItems> CurrentCalcItems;
			Aspose::Cells::System::Int32 CurrentCalcItemIndex;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> CurrentCalcItemC8Records;
			void RefreshCalculateItems();
			Aspose::Cells::System::Int32 FindCurrentPosIndex(Aspose::Cells::System::Int32 originPosIndex , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> originData , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> currentData);
			void InitRecords();
			void InitSxFDBPageData(intrusive_ptr<Aspose::Cells::Pivot::ConsolidationPivotCacheDataSource> cs , Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::Pivot::SxFDB> record);
			intrusive_ptr<Aspose::Cells::System::Object> FixCellValue(intrusive_ptr<Aspose::Cells::System::Object> obj , intrusive_ptr<Aspose::Cells::Pivot::SxFDB> sxFDB , bool& isString , bool& isDateTime);
			void FixCellValue(intrusive_ptr<Aspose::Cells::System::Object> obj , intrusive_ptr<Aspose::Cells::Pivot::SxFDB> sxFDB , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> hashTable , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> ret);
			void InitConsolidation(intrusive_ptr<Aspose::Cells::Pivot::ConsolidationPivotCacheDataSource> cs);
			bool GetRefreshOnFileOpen();
			void SetRefreshOnFileOpen(bool value);
			void SetSxDbOption(bool booleanValue , Aspose::Cells::System::Int32 mask);
			bool GetSxDbOption(Aspose::Cells::System::Int32 mask);
			void ConvertVersion(bool up , intrusive_ptr<Aspose::Cells::FormulaUtility::Bin2007To2003> bin2007To2003);
			 PivotCache();
		public:
			virtual ~PivotCache();
	};

}

}

}
