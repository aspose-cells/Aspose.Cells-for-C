#pragma once
#include "System/Collections/IEnumerator.h"
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/TypeCode.h"
//#include "System/BitConverter.h"
#include "System/Double.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "ErrorType.h"
#include "System/Array1D.h"
//#include "System/DateTime.h"
//#include "System/Text/Encoding.h"
#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
#include "ExternalCellValueType.h"
//#include "System/Type.h"
#define STATIC_EXTERNALROW() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
}
}
}
namespace Aspose {
namespace Cells {
class ExternalCellEnumerator;
class ExternalCell;
}
}

namespace Aspose {
namespace Cells {
	class ExternalRow : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void IncreaseEndColumn();
			Aspose::Cells::System::Int32 ValueToCellData(Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 dataPos , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			Aspose::Cells::ExternalCellValueType GetValueType(intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::System::Object> GetCellValueType(intrusive_ptr<Aspose::Cells::System::Object> value , Aspose::Cells::ExternalCellValueType& type);
	public:

			 static const Aspose::Cells::System::Byte ColumnMask;
			 static const Aspose::Cells::System::Byte ValueTypeMask;
			 static const Aspose::Cells::System::Byte MinDataLength;
			 static const Aspose::Cells::System::Byte StartDataPos;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Data;
			 static const Aspose::Cells::System::Int32 RowDataLength;
			void Copy(intrusive_ptr<Aspose::Cells::ExternalRow> source);
			 ExternalRow(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 GetIndex();
			Aspose::Cells::System::Int32 GetEndColumn();
			void SetEndColumn(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetLengthOfBytes();
			void SetLengthOfBytes(Aspose::Cells::System::Int32 value);
			bool HasData();
			Aspose::Cells::System::Int32 GetStartColumn();
			intrusive_ptr<Aspose::Cells::ExternalCell> GetPreviousCellValue(Aspose::Cells::System::Int32 preColumn , Aspose::Cells::System::Int32 pos);
			intrusive_ptr<Aspose::Cells::System::Object> GetCurrentObjectValue(Aspose::Cells::System::Int32 col , Aspose::Cells::System::Int32 pos);
			intrusive_ptr<Aspose::Cells::ExternalCell> GetCurrentCellValue(Aspose::Cells::System::Int32 col , Aspose::Cells::System::Int32 pos);
			Aspose::Cells::System::Int32 GetPosition(intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata , Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int16 startColumn , bool excludeEmpty , bool prior);
			Aspose::Cells::System::Int32 ToCellData(Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> GetEnumerator();
			intrusive_ptr<Aspose::Cells::ExternalCellEnumerator> GetEnumerator(Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn);
			bool CheckExist(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32& arrayIndex , bool& isContinue);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetCells();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> GetRangeNumbericValue(Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> GetRangeValue(Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn);
			intrusive_ptr<Aspose::Cells::System::Object> GetCellValue(Aspose::Cells::System::Int32 columnIndex);
			void Add(Aspose::Cells::System::Int32 columnIndex , intrusive_ptr<Aspose::Cells::System::Object> value);
			Aspose::Cells::System::Int32 GetCellLength(Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32& column);
			Aspose::Cells::System::Int32 GetCellLength(Aspose::Cells::System::Int32 pos);
			Aspose::Cells::System::Int32 CalCellLength(bool isContinous , Aspose::Cells::ExternalCellValueType type , intrusive_ptr<Aspose::Cells::System::Object> value);
			void AddRead2003(Aspose::Cells::System::Int32 preColumn , Aspose::Cells::System::Int32 column , Aspose::Cells::ExternalCellValueType type , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData , Aspose::Cells::System::Int32 pos);
			void EnsureCapacity(Aspose::Cells::System::Int32 arrayIndex , Aspose::Cells::System::Int32 oldCellLength , Aspose::Cells::System::Int32 newCellLength);
			static Aspose::Cells::System::Byte ToErrorByteValue(Aspose::Cells::ErrorType type);
			static Aspose::Cells::ErrorType ToErrorType(Aspose::Cells::System::Byte type);
			 ExternalRow();
		public:
			virtual ~ExternalRow();
	};

}

}
