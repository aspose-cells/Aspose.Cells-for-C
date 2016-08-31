#pragma once
#include "System/Byte.h"
//#include "System/Boxing.h"
#include "System/Collections/Hashtable.h"
//#include "System/Text/StringBuilder.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Int16.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/String.h"
//#include "System/ArgumentException.h"
#include "System/Collections/ArrayList.h"
#define STATIC_CFFDICTDECODER() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
	class CffDictDecoder : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void ParseDictEntry();
			Aspose::Cells::System::Double ParseDictRealOperand();
			Aspose::Cells::System::Byte ReadByte();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> mData;
			Aspose::Cells::System::Int32 mIndex;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> mParsedData;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> mArguments;
	public:

			 CffDictDecoder(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> ParseDict();
			 static const Aspose::Cells::System::Int16 decimalPoint;
			 static const Aspose::Cells::System::Int16 exponentPositive;
			 static const Aspose::Cells::System::Int16 exponentNegative;
			 static const Aspose::Cells::System::Int16 reserved;
			 static const Aspose::Cells::System::Int16 minus;
			 static const Aspose::Cells::System::Int16 endOfNumber;
			 CffDictDecoder();
		public:
			virtual ~CffDictDecoder();
	};

}

}

}

}

}
