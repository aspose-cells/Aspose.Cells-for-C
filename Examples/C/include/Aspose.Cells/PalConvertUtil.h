#pragma once
#include "System/Byte.h"
#include "System/Single.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/SByte.h"
//#include "System/Boolean.h"
#include "System/Decimal.h"
//#include "System/Boxing.h"
#include "System/Int16.h"
#include "System/UInt32.h"
#include "System/UInt64.h"
#include "System/Double.h"
#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Int64.h"
#define STATIC_PALCONVERTUTIL() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalConvertUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static Aspose::Cells::System::Int64 ToNumber(intrusive_ptr<Aspose::Cells::System::Object> numberValue);
			static Aspose::Cells::System::Double ToDouble(intrusive_ptr<Aspose::Cells::System::Object> doubleObj);
			static Aspose::Cells::System::Int32 ToInt(intrusive_ptr<Aspose::Cells::System::Object> intObj);
			static Aspose::Cells::System::Int16 ToShort(intrusive_ptr<Aspose::Cells::System::Object> shortObj);
			static bool ToBoolean(intrusive_ptr<Aspose::Cells::System::Object> boolObj);
			static bool ParseBoolean(intrusive_ptr<Aspose::Cells::System::String> str);
			static Aspose::Cells::System::Int32 ToInt32(Aspose::Cells::System::Double a);
			static Aspose::Cells::System::Int32 ToInt32(Aspose::Cells::System::Byte a);
			static Aspose::Cells::System::Int32 ToInt32(Aspose::Cells::System::SByte a);
			static Aspose::Cells::System::Int32 ToInt32(Aspose::Cells::System::Int16 a);
			static Aspose::Cells::System::Int32 ToInt32(Aspose::Cells::System::UInt16 a);
			static Aspose::Cells::System::Int32 ToInt32(Aspose::Cells::System::UInt32 a);
			static Aspose::Cells::System::Int32 ToInt32(Aspose::Cells::System::UInt64 a);
			static Aspose::Cells::System::Int32 ToInt32(Aspose::Cells::System::Int64 a);
			static Aspose::Cells::System::Double ToDouble(Aspose::Cells::System::Decimal a);
			static Aspose::Cells::System::Int16 ToShort(Aspose::Cells::System::Int32 a);
			static intrusive_ptr<Aspose::Cells::System::String> ToString(Aspose::Cells::System::Int32 value);
			static intrusive_ptr<Aspose::Cells::System::String> ToString(Aspose::Cells::System::Single value);
			static intrusive_ptr<Aspose::Cells::System::String> ToString(Aspose::Cells::System::Double value);
			static intrusive_ptr<Aspose::Cells::System::Object> ToByte(Aspose::Cells::System::Byte v);
			 PalConvertUtil();
		public:
			virtual ~PalConvertUtil();
	};

}

}

}

}
