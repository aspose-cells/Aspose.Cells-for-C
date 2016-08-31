#pragma once
#include "System/Byte.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Globalization/CultureInfo.h"
//#include "System/Char.h"
//#include "System/Boxing.h"
//#include "System/CharHelper.h"
#include "System/Double.h"
//#include "System/Int32Helper.h"
#include "System/Int32.h"
#include "System/Int64.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_RKHELPER() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
}
}
}

namespace Aspose {
namespace Cells {
	class RKHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Int32 MaxIntRK;
			 static const Aspose::Cells::System::Int32 MinIntRK;
			 static const Aspose::Cells::System::Double MaxIntRKD;
			 static const Aspose::Cells::System::Double MinIntRKD;
			 static const Aspose::Cells::System::Double MaxDoubleRK;
			 static const Aspose::Cells::System::Double MinDoubleRK;
			static intrusive_ptr<Aspose::Cells::System::String> Div100(intrusive_ptr<Aspose::Cells::System::String> v);
			static void IntegerString100ToCellData(intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			static void IntegerStringToCellData(intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			static bool CanBeLongToRK(intrusive_ptr<Aspose::Cells::System::String> value);
			static Aspose::Cells::System::Int32 IntegerString100ToBytes(intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			static Aspose::Cells::System::Int32 IntegerStringToBytes(intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
	public:

			 static const Aspose::Cells::System::Int32 RK_ZERO;
			static bool IsInteger(Aspose::Cells::System::Int32 rkValue);
			static Aspose::Cells::System::Double ToDouble(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			static Aspose::Cells::System::Double ToDouble(Aspose::Cells::System::Int32 rkValue);
			static intrusive_ptr<Aspose::Cells::System::String> ToString(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			static intrusive_ptr<Aspose::Cells::System::String> ToString(Aspose::Cells::System::Int32 rkValue);
			static void ToCellData(Aspose::Cells::System::Int64 value , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			static void ToCellData(Aspose::Cells::System::Double value , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			static void ToCellData(intrusive_ptr<Aspose::Cells::System::String> pInt , intrusive_ptr<Aspose::Cells::System::String> pDec , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			static void ToCellData(intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata);
			static Aspose::Cells::System::Int32 ToBytes(Aspose::Cells::System::Int64 value , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			static Aspose::Cells::System::Int32 ToBytes(Aspose::Cells::System::Double value , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			static Aspose::Cells::System::Int32 ToBytes(intrusive_ptr<Aspose::Cells::System::String> pInt , intrusive_ptr<Aspose::Cells::System::String> pDec , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			static Aspose::Cells::System::Int32 ToBytes(intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			 RKHelper();
		public:
			virtual ~RKHelper();
	};

}

}
