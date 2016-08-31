#pragma once
#include "System/Int32.h"
#include "System/IO/BinaryWriter.h"
#include "System/Object.h"
#include "System/IO/BinaryReader.h"
#define STATIC_PROPIDOFFSET() 


namespace Aspose {
namespace Ss {
	class PropIdOffset : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 PropIdOffset(Aspose::Cells::System::Int32 id , Aspose::Cells::System::Int32 offset);
			 PropIdOffset(intrusive_ptr<Aspose::Cells::System::IO::BinaryReader> reader);
			void Write(intrusive_ptr<Aspose::Cells::System::IO::BinaryWriter> writer);
			Aspose::Cells::System::Int32 Id;
			Aspose::Cells::System::Int32 Offset;
			 PropIdOffset();
		public:
			virtual ~PropIdOffset();
	};

}

}
