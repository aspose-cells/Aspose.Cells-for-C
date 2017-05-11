#pragma once
#include "System/Object.h"

namespace Aspose {
	namespace Cells {
		enum FileFormatType;
		enum LoadFormat;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Contains data returned by <see cref="IFileFormatUtil" />
			///  file format detection methods. 
			///  </summary>
	class ASPOSE_CELLS_API IFileFormatInfo : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets whether the file is protected by Microsoft Rights Management Server.
			/// </summary>
			 virtual bool IsProtectedByRMS()=0;
			/// <summary>
			/// Returns true if the document is encrypted and requires a password to open. 
			/// </summary>
			 virtual bool IsEncrypted()=0;
			/// <summary>
			/// Gets the detected file format. 
			/// </summary>
			 virtual Aspose::Cells::FileFormatType GetFileFormatType()=0;
			/// <summary>
			/// Gets the detected load format. 
			/// </summary>
			 virtual Aspose::Cells::LoadFormat GetLoadFormat()=0;

	};
}
}
