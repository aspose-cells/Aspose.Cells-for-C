#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"

namespace Aspose {
	namespace Cells {
		namespace Metadata {
			enum MetadataType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Metadata{
			/// <summary>
			/// Represents the options of loading metadata of the file.
			/// </summary>
	class ASPOSE_CELLS_API IMetadataOptions : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the type of the metadata which is loading.
			/// </summary>
			 virtual Aspose::Cells::Metadata::MetadataType GetMetadataType()=0;
			/// <summary>
			/// Gets Workbook file encryption password.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetPassword()=0;
			/// <summary>
			/// Sets Workbook file encryption password.
			/// </summary>
			 virtual void SetPassword(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets The key length.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetKeyLength()=0;
			/// <summary>
			/// Sets The key length.
			/// </summary>
			 virtual void SetKeyLength(Aspose::Cells::System::Int32 value)=0;

	};
}
}
}
