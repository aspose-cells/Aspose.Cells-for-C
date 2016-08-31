#pragma once
#include "System/Byte.h"
#include "System/Object.h"
//#include "System/IO/Stream.h"
#include "System/UInt32.h"
#include "System/IO/BinaryReader.h"
//#include "System/UInt16.h"
//#include "System/IO/MemoryStream.h"
#include "System/Int32.h"
//#include "System/Int64.h"
#include "GdiMetafileRecordType.h"
#include "System/Array1D.h"
#define STATIC_METAFILERECORD() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class MetafileRecord : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 mDataSize;
			Aspose::Cells::System::UInt32 mSize;
			Aspose::Cells::Internal::Rendering::GdiMetafileRecordType mType;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> mData;
			bool mIsEmfPlus;
			intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> mReader;
	public:

			void ReadWmf(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader);
			void ReadEmf(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader);
			bool IsLast();
			bool IsEmfPlus();
			Aspose::Cells::System::Int32 GetDataSize();
			Aspose::Cells::Internal::Rendering::GdiMetafileRecordType GetType();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetData();
			 MetafileRecord();
		public:
			virtual ~MetafileRecord();
	};

}

}

}

}
