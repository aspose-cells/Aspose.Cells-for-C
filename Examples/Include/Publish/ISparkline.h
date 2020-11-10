#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Drawing/Bitmap.h"
#include "Aspose.Cells.Systems/IO/Stream.h"

namespace Aspose {
	namespace Cells {
		namespace Rendering {
			class IImageOrPrintOptions;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// A sparkline represents a tiny chart or graphic in a worksheet cell that provides a visual representation of data.
			/// </summary>
	class ASPOSE_CELLS_API ISparkline : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Represents the data range of the sparkline.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetDataRange()=0;
			/// <summary>
			/// Represents the data range of the sparkline.
			/// </summary>
			 virtual void SetDataRange(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the row index of the sparkline.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetRow()=0;
			/// <summary>
			/// Gets the column index of the sparkline.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetColumn()=0;
			/// <summary>
			/// Converts a sparkline to an image.
			/// </summary>
			/// <param name="options" >The image options</param>
			/// <returns>Returns a <see cref="Bitmap" />
			///  object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Bitmap> 		ToImage(intrusive_ptr<Aspose::Cells::Rendering::IImageOrPrintOptions> options)=0;
			/// <summary>
			/// Converts a sparkline to an image.
			/// </summary>
			/// <param name="fileName" >The image file name.</param>
			/// <param name="options" >The image options</param>
			 virtual void 		ToImage(intrusive_ptr<Aspose::Cells::Systems::String> fileName , intrusive_ptr<Aspose::Cells::Rendering::IImageOrPrintOptions> options)=0;
			/// <summary>
			/// Converts a sparkline to an image.
			/// </summary>
			/// <param name="stream" >The image stream.</param>
			/// <param name="options" >The image options.</param>
			 virtual void 		ToImage(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream , intrusive_ptr<Aspose::Cells::Rendering::IImageOrPrintOptions> options)=0;

	};
}
}
}
