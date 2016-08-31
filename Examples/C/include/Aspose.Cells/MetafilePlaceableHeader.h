#pragma once
#include "System/IO/BinaryReader.h"
#include "System/Int16.h"
#include "System/Drawing/Rectangle.h"
#include "System/UInt32.h"
#include "System/Int32.h"
//#include "System/String.h"
//#include "System/Exception.h"
#include "System/UInt16.h"
#include "System/Object.h"
#define STATIC_METAFILEPLACEABLEHEADER() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class MetafilePlaceableHeader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void VerifyChecksum();
			Aspose::Cells::System::UInt32 mKey;
			Aspose::Cells::System::UInt16 mHandle;
			Aspose::Cells::System::Int16 mLeft;
			Aspose::Cells::System::Int16 mTop;
			Aspose::Cells::System::Int16 mRight;
			Aspose::Cells::System::Int16 mBottom;
			Aspose::Cells::System::UInt16 mInch;
			Aspose::Cells::System::UInt32 mReserved;
			Aspose::Cells::System::UInt16 mChecksum;
	public:

			 MetafilePlaceableHeader();
			void Read(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader);
			bool GetAreDimensionsValid();
			intrusive_ptr<Aspose::Cells::System::Drawing::Rectangle> GetBounds();
			Aspose::Cells::System::Int32 GetInch();
		public:
			virtual ~MetafilePlaceableHeader();
	};

}

}

}

}
