#pragma once
#include "System/String.h"
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "MetadataType.h"
#include "System/Int32.h"
#define STATIC_METADATAOPTIONS() 


namespace Aspose {
namespace Cells {
namespace Metadata {
#ifdef WIN32

	class ASPOSE_CELLS_API MetadataOptions : public Aspose::Cells::System::Object
#else	class MetadataOptions : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			 MetadataOptions();
			Aspose::Cells::Metadata::MetadataType _MetadataType;
			intrusive_ptr<Aspose::Cells::System::String> _Password;
			Aspose::Cells::System::Int32 m_KeyLength;
	public:

			 MetadataOptions(Aspose::Cells::Metadata::MetadataType metadataType);
			Aspose::Cells::Metadata::MetadataType GetMetadataType();
			intrusive_ptr<Aspose::Cells::System::String> GetPassword();
			void SetPassword(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Int32 GetKeyLength();
			void SetKeyLength(Aspose::Cells::System::Int32 value);
		public:
			virtual ~MetadataOptions();
	};

}

}

}
