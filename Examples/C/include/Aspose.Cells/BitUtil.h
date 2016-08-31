#pragma once
#include "System/Int64.h"
#include "System/Int16.h"
#include "System/UInt32.h"
#include "System/Int32.h"
#include "System/UInt16.h"
#include "System/Object.h"
#define STATIC_BITUTIL() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class BitUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 BitUtil();
	public:

			static Aspose::Cells::System::Int32 SwapInt32(Aspose::Cells::System::Int32 value);
			static Aspose::Cells::System::UInt32 SwapUInt32(Aspose::Cells::System::UInt32 value);
			static Aspose::Cells::System::Int16 SwapInt16(Aspose::Cells::System::Int16 value);
			static Aspose::Cells::System::UInt16 SwapUInt16(Aspose::Cells::System::UInt16 value);
			static Aspose::Cells::System::Int32 SetBit(Aspose::Cells::System::Int32 curValue , Aspose::Cells::System::Int32 bitMask , bool newValue);
			static bool IsSet(Aspose::Cells::System::Int32 curValue , Aspose::Cells::System::Int32 bitMask);
			static Aspose::Cells::System::Int32 CountBitsInt32(Aspose::Cells::System::Int32 i);
			static Aspose::Cells::System::Int32 CountBitsInt64(Aspose::Cells::System::Int64 i);
		public:
			virtual ~BitUtil();
	};

}

}

}

}
