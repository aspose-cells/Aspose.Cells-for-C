#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/IO/Stream.h"

namespace Aspose {
	namespace Cells {
		namespace Metadata {
			class IMetadataOptions;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Properties {
			class IBuiltInDocumentPropertyCollection;
			class ICustomDocumentPropertyCollection;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Metadata{
			/// <summary>
			/// Represents the meta data.
			/// </summary>
			/// <example>
			/// The following example creates an IWorkbookMetadata.
			/// <code>
			/// [C++]
			/// intrusive_ptr<IMetadataOptions> options = Factory::CreateIMetadataOptions(MetadataType_DocumentProperties);
			/// intrusive_ptr<IWorkbookMetadata> meta = Factory::CreateIWorkbookMetadata(new String("c:\\book1.xlsx"), options);
			/// meta->GetICustomDocumentProperties()->AddIDocumentProperty(new String("test"), (StringPtr)new String("test"));
			/// meta->Save(new String("c:\\book2.xlsx"));
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IWorkbookMetadata : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the options of the metadata.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Metadata::IMetadataOptions> 		GetIOptions()=0;
			/// <summary>
			/// Returns a DocumentProperties collection that represents all the  built-in document properties of the spreadsheet. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Properties::IBuiltInDocumentPropertyCollection> 		GetIBuiltInDocumentProperties()=0;
			/// <summary>
			/// Returns a DocumentProperties collection that represents all the custom document properties of the spreadsheet. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Properties::ICustomDocumentPropertyCollection> 		GetICustomDocumentProperties()=0;
			/// <summary>
			/// Save the modified metadata to the file.
			/// </summary>
			/// <param name="fileName" >The file name.</param>
			 virtual void Save(intrusive_ptr<Aspose::Cells::Systems::String> fileName)=0;
			/// <summary>
			/// Save the modified metadata to the stream.
			/// </summary>
			/// <param name="stream" >The stream.</param>
			 virtual void Save(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream)=0;

	};
}
}
}
