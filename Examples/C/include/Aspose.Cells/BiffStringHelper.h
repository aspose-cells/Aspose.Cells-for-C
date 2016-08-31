#pragma once
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Text/Encoding.h"
#include "System/String.h"
//#include "System/BitConverter.h"
#include "System/Byte.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
//#include "System/ArgumentException.h"
#include "System/Array1D.h"
#define STATIC_BIFFSTRINGHELPER() 


namespace Aspose {
namespace Cells {
	class BiffStringHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::String> GetBiff8StringWithoutHeader(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos , bool compressed , Aspose::Cells::System::Int32 length);
			static intrusive_ptr<Aspose::Cells::System::String> GetBiff8String(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos);
			static intrusive_ptr<Aspose::Cells::System::String> GetBiffString(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32& pos);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetStringData(intrusive_ptr<Aspose::Cells::System::String> text);
			static intrusive_ptr<Aspose::Cells::System::String> GetASCIIString(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 startIndex , Aspose::Cells::System::Int32 length);
			static Aspose::Cells::System::Int32 WriteString(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> byteString , intrusive_ptr<Aspose::Cells::System::String> strValue);
			static Aspose::Cells::System::Int32 WriteStringWithoutSize(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::System::String> strValue);
			static Aspose::Cells::System::Int32 WriteStringWithSize(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32& offset , intrusive_ptr<Aspose::Cells::System::String> strValue);
			static Aspose::Cells::System::Int32 WriteURL(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::System::String> strValue , Aspose::Cells::System::Int32 sizeBytes , Aspose::Cells::System::Byte key);
			 BiffStringHelper();
		public:
			virtual ~BiffStringHelper();
	};

}

}
