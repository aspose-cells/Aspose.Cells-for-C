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
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetCaseSensitive(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual bool IsCaseSensitive()=0;
			/// <summary>
			/// Indicates if the searched string is case sensitive.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use SetCaseSensitive(). 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetIsCaseSensitive(bool value)=0;
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
