#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		enum HeaderFooterCommandType;
		class IFont;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents the command of header/footer
			/// </summary>
	class ASPOSE_CELLS_API IHeaderFooterCommand : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the header/footer' command type .
			/// </summary>
			 virtual Aspose::Cells::HeaderFooterCommandType GetType()=0;
			/// <summary>
			/// Gets the font of the command's value.
			/// </summary>
			/// <remarks>
			/// Useless for HeaderFooterCommandType.Picture.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::IFont> 		GetIFont()=0;
			/// <summary>
			/// Gets the text of the command.
			/// </summary>
			/// <remarks>
			/// Only valid for HeaderFooterCommandType.Text.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetText()=0;

	};
}
}
