#ifndef _SYSTEM_DRAWING_DRAWING2D_COLORBLEND_H_
#define _SYSTEM_DRAWING_DRAWING2D_COLORBLEND_H_

#include "System/Drawing/Color.h"
#include "System/Array1D.h"
namespace Aspose {
	namespace Cells {
		namespace System{
			namespace Drawing {
				namespace Drawing2D {
					///    Defines arrays of colors and positions used
					///    for interpolating color blending in a gradient.
					class  ColorBlend : public Object
					{
					private:
						intrusive_ptr<Array1D<Aspose::Cells::System::Drawing::Color*>> colors;
						intrusive_ptr<Array1D<float>> positions;
				    public:
						/// Initializes a new instance
						ColorBlend();
						/// Initializes a new instance of  ColorBlend class with the specified number of
						/// colors and positions.
						ColorBlend(int count);
						/// Represents an array of colors.
						intrusive_ptr<Array1D<Aspose::Cells::System::Drawing::Color*>> GetColors();
						void SetColors(intrusive_ptr<Array1D<Aspose::Cells::System::Drawing::Color*>> value);
						/// Represents the positions along a gradient line.
						intrusive_ptr<Array1D<float>> GetPositions();
						void SetPositions(intrusive_ptr<Array1D<float>> value);
					};
				}
			}
		}
	}
}
#endif
