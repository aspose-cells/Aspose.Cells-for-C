#pragma once
#include "System/String.h"
//#include "System/Single.h"
//#include "System/UInt16.h"
//#include "System/Boxing.h"
#include "System/Int16.h"
//#include "System/UInt32.h"
//#include "System/StringHelperPal.h"
#include "System/TypeCode.h"
//#include "System/Type.h"
//#include "System/Char.h"
//#include "System/Double.h"
#include "System/Object.h"
#include "CellValueType.h"
#include "System/DateTime.h"
//#include "System/SByte.h"
//#include "System/Byte.h"
#include "RawCellValueType.h"
#include "System/Int32.h"
//#include "System/UInt64.h"
//#include "System/Int64.h"
#define STATIC_CELLDATA() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class CellData : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void RKToPlain(intrusive_ptr<Aspose::Cells::CellsSs::CellData> buffer , Aspose::Cells::System::Int32 rkValue);
	public:

			 static const Aspose::Cells::System::Int32 FIELD_INDEX;
			 static const Aspose::Cells::System::Int32 FIELD_XF;
			 static const Aspose::Cells::System::Int32 FIELD_VALUE;
			 static const Aspose::Cells::System::Int32 FIELD_ALL;
			 static const Aspose::Cells::System::Int32 FIELD_WITHOUT_INDEX;
			Aspose::Cells::System::Int16 Column;
			Aspose::Cells::System::Int32 XfIndex;
			Aspose::Cells::CellsSs::RawCellValueType RawType;
			intrusive_ptr<Aspose::Cells::System::Object> Value;
			bool IsPh;
			 CellData();
			 CellData(Aspose::Cells::System::Int32 column);
			 CellData(intrusive_ptr<Aspose::Cells::CellsSs::CellData> data);
			void Copy(intrusive_ptr<Aspose::Cells::CellsSs::CellData> data);
			void Copy(intrusive_ptr<Aspose::Cells::CellsSs::CellData> data , Aspose::Cells::System::Int32 fields);
			void ToDefault(Aspose::Cells::System::Int32 column);
			bool IsBlank();
			bool IsBlankContent();
			bool IsRichText();
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> ToPlainData();
			bool IsNumericValue();
			bool IsIntValue();
			intrusive_ptr<Aspose::Cells::System::String> GetExportString(bool isCell);
			static intrusive_ptr<Aspose::Cells::System::String> GetExportString(Aspose::Cells::CellsSs::RawCellValueType type , intrusive_ptr<Aspose::Cells::System::Object> value , bool isCell);
			intrusive_ptr<Aspose::Cells::System::String> GetErrorString();
			static intrusive_ptr<Aspose::Cells::System::String> GetExportError(intrusive_ptr<Aspose::Cells::System::Object> errRawValue);
			Aspose::Cells::CellValueType GetExportValueType();
			bool EqualsPlainValue(intrusive_ptr<Aspose::Cells::CellsSs::CellData> another);
			bool ParseValue(intrusive_ptr<Aspose::Cells::System::Object> objectValue , bool checkRK);
			bool ParseValue(Aspose::Cells::System::TypeCode valueType , intrusive_ptr<Aspose::Cells::System::Object> objectValue , bool checkRK);
			bool ToNumeric(intrusive_ptr<Aspose::Cells::System::DateTime> dt , bool date1904);
		public:
			virtual ~CellData();
	};

}

}

}
