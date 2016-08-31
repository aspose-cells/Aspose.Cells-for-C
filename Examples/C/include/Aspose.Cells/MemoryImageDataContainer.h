#pragma once
#include "IImageDataContainer.h"
#include "System/Array1D.h"
//#include "System/Int64.h"
#include "System/IO/MemoryStream.h"
#include "System/Byte.h"
//#include "System/Int32.h"
#include "System/IO/Stream.h"
#include "System/Object.h"
#define STATIC_MEMORYIMAGEDATACONTAINER() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class MemoryImageDataContainer : public Aspose::Cells::Internal::Rendering::IImageDataContainer
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream;
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetData();
			void SaveData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			intrusive_ptr<Aspose::Cells::System::IO::Stream> GetStream();
			 MemoryImageDataContainer();
		public:
			virtual ~MemoryImageDataContainer();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}

}
