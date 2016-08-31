#pragma once
//#include "System/Exception.h"
//#include "System/Int64.h"
//#include "System/Int32Helper.h"
#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Globalization/CultureInfo.h"
#include "System/Int16.h"
//#include "System/Boolean.h"
//#include "System/StringHelperPal.h"
#include "PivotGroupByType.h"
#include "System/String.h"
//#include "System/Math.h"
//#include "System/Char.h"
//#include "System/BitConverter.h"
#include "Constants.h"
#include "System/Double.h"
//#include "System/ArgumentException.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "System/DateTime.h"
#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/Array.h"
#define STATIC_SXFDB() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCache;
class SxRng;
}
}
}
namespace Aspose {
namespace Cells {
namespace RW {
class DataOutStream;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
	class SxFDB : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Byte m_option1;
			Aspose::Cells::System::Int32 GetDataRecordSize();
			Aspose::Cells::System::Int32 GetDataRecordSize(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> data);
			Aspose::Cells::System::Int32 GetRangeDataRecordSize();
	public:

			Aspose::Cells::Pivot::PivotCache* _u_pivotCache;
			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> GetPivotCache();
			intrusive_ptr<Aspose::Cells::System::String> _name;
			Aspose::Cells::System::UInt16 _option;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _data;
			intrusive_ptr<Aspose::Cells::System::String> _formula;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> _FormulaData;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _sxNames;
			Aspose::Cells::System::UInt16 _Type;
			Aspose::Cells::System::Int32 _parentFieldIndex;
			Aspose::Cells::System::Int32 _index;
			intrusive_ptr<Aspose::Cells::Pivot::SxRng> _groupRange;
			intrusive_ptr<Aspose::Cells::System::String> _minDate;
			intrusive_ptr<Aspose::Cells::System::String> _maxDate;
			Aspose::Cells::System::Int32 _keepSxOperCount;
			bool bMixedTypesIgnoringBlanks;
			bool _isNotDatabaseField;
			bool _hasLongText;
			Aspose::Cells::System::Int32 _numFmtId;
			 SxFDB(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> pivotCache);
			 SxFDB(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> pivotCache , intrusive_ptr<Aspose::Cells::System::String> name , bool isGathered);
			 SxFDB(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> pivotCache , intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> formula);
			void Copy(intrusive_ptr<Aspose::Cells::Pivot::SxFDB> source);
			bool ContainsAllType();
			intrusive_ptr<Aspose::Cells::System::String> GetFormula2007();
			bool IsGatherd();
			void SetIsGatherd(bool value);
			bool IsShortItems();
			bool IsAllNumber();
			bool ContainsNumber();
			void SetContainsNumber(bool value);
			bool ContainsInt();
			void SetContainsInt(bool value);
			bool ContainsDouble();
			void SetContainsDouble(bool value);
			bool ContainsText();
			void SetContainsText(bool value);
			bool ContainsDates();
			void SetContainsDates(bool value);
			bool ContainsNonDate();
			bool HasParent();
			bool IsCalculated();
			void SetIsCalculated(bool value);
			bool IsRangGroup();
			void SetIsRangGroup(bool value);
			bool GetOnlyDates();
			bool GetOnlyNumbers();
			bool GetOnlyTexts();
			bool ContainsMixedTypes();
			bool ContainsSemiMixedTypes();
			bool GetMoreUniqueItems();
			void SetMoreUniqueItems(bool value);
			bool ContainsBlank();
			void SetContainsBlank(bool value);
			bool IsAllBlank();
			Aspose::Cells::System::Int32 GetRecordSize();
			Aspose::Cells::System::Int32 WriteSxFmlaF9(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			Aspose::Cells::System::Int32 WriteSxNameF6(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 nameIndex);
			void WriteData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> data);
			void Write(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			Aspose::Cells::System::Int32 GetIndex();
			void SetIndex(Aspose::Cells::System::Int32 index);
			static Aspose::Cells::System::Int32 WriteErrorToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Byte error);
			static Aspose::Cells::System::Int32 WriteNullToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			static Aspose::Cells::System::Int32 WriteSxStringToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::System::String> strValue);
			static Aspose::Cells::System::Int32 WriteSxNumberToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Double doubleValue);
			static Aspose::Cells::System::Int32 WriteSxNumberToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int16 value);
			static Aspose::Cells::System::Int32 WriteSxBoolToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , bool boolValue);
			static Aspose::Cells::System::Int32 WriteSxDateToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::System::DateTime> dataTime);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetMinMaxData();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> GetGroupItems(intrusive_ptr<Aspose::Cells::Pivot::SxRng> rng);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> GetGroupItems(intrusive_ptr<Aspose::Cells::System::String> startVal , intrusive_ptr<Aspose::Cells::System::String> endVal , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> groupByList , Aspose::Cells::System::Double intervalNum , Aspose::Cells::Pivot::PivotGroupByType groupBy);
			 SxFDB();
		public:
			virtual ~SxFDB();
	};

}

}

}
