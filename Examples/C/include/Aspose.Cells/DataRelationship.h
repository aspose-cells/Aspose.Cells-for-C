#pragma once
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Object.h"
#define STATIC_DATARELATIONSHIP() 


namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataRelationship : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> Uri;
			intrusive_ptr<Aspose::Cells::System::String> OriginId;
			intrusive_ptr<Aspose::Cells::System::String> Id;
			intrusive_ptr<Aspose::Cells::System::String> Type;
			intrusive_ptr<Aspose::Cells::System::String> Target;
			intrusive_ptr<Aspose::Cells::System::String> TargetMode;
			Aspose::Cells::System::Int32 BlipId;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> Data;
			bool IsRead;
			 DataRelationship();
			Aspose::Cells::System::Int32 GetBlipId(bool addRef);
			 DataRelationship(intrusive_ptr<Aspose::Cells::System::String> id , intrusive_ptr<Aspose::Cells::System::String> type , intrusive_ptr<Aspose::Cells::System::String> target , intrusive_ptr<Aspose::Cells::System::String> targetMode);
		public:
			virtual ~DataRelationship();
	};

}

}

}
