#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose{
namespace Cells{
			/// <summary>
			/// Specifies write protection settings for a workbook. 
			/// </summary>
			/// 
			/// 
	class ASPOSE_CELLS_API IWriteProtection : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Indicates if the Read Only Recommended option is selected.
			/// </summary>
			/// 
			/// 
			 virtual bool GetRecommendReadOnly()=0;
			 
			/// <summary>
			/// Indicates if the Read Only Recommended option is selected.
			/// </summary>
			/// 
			/// 
			 virtual void SetRecommendReadOnly(bool value)=0;
			 
			/// <summary>
			/// Indicates whether this workbook is write protected.
			/// </summary>
			/// 
			/// 
			 virtual bool IsWriteProtected()=0;
			 
			/// <summary>
			/// Sets the protected password to modify the file.
			/// </summary>
			/// 
			/// 
			 virtual void SetPassword(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			 
			/// <summary>
			/// Returns true if the specified password is the same as the write-protection password the file was protected with. 
			/// </summary>
			/// 
			/// <param name="password" >The specified password.</param>
			/// 
			/// <returns/>
			/// 
			/// 
			 virtual bool ValidatePassword(intrusive_ptr<Aspose::Cells::Systems::String> password)=0;

	};
}
}
