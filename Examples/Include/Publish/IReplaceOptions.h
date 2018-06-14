#pragma once
#include "System/Object.h"

namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represent the replace options.
			/// </summary>
	class ASPOSE_CELLS_API IReplaceOptions : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Indicates if the searched string is case sensitive.
			/// </summary>
			 virtual bool GetCaseSensitive()=0;
			/// <summary>
			/// Indicates if the searched string is case sensitive.
			/// </summary>
			 virtual void SetCaseSensitive(bool value)=0;
			/// <summary>
			/// Indicates whether to match entire cells contents
			/// </summary>
			 virtual bool GetMatchEntireCellContents()=0;
			/// <summary>
			/// Indicates whether to match entire cells contents
			/// </summary>
			 virtual void SetMatchEntireCellContents(bool value)=0;

	};
}
}
