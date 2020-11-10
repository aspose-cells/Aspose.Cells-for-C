#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"

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
	class ASPOSE_CELLS_API IMetadataOptions : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the type of the metadata which is loading.
			/// </summary>
			 virtual Aspose::Cells::Metadata::MetadataType GetMetadataType()=0;
			/// <summary>
			/// Gets Workbook file encryption password.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetPassword()=0;
			/// <summary>
			/// Sets Workbook file encryption password.
			/// </summary>
			 virtual void SetPassword(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets The key length.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetKeyLength()=0;
			/// <summary>
			/// Sets The key length.
			/// </summary>
			 virtual void SetKeyLength(Aspose::Cells::Systems::Int32 value)=0;

	};
}
}
}
