#ifndef _SYSTEM_DRAWING_GRAPHICSUNIT_H_
#define _SYSTEM_DRAWING_GRAPHICSUNIT_H_

namespace Aspose { 
namespace Cells { 
namespace System {
namespace Drawing {
	enum GraphicsUnit
	{
        // Summary:
        //     Specifies the world coordinate system unit as the unit of measure->
		GraphicsUnit_World = 0,
        //
        // Summary:
        //     Specifies the unit of measure of the display device-> Typically pixels for
        //     video displays, and 1/100 inch for printers->
		GraphicsUnit_Display = 1,
        //
        // Summary:
        //     Specifies a device pixel as the unit of measure->
		GraphicsUnit_Pixel = 2,
        //
        // Summary:
        //     Specifies a printer's point (1/72 inch) as the unit of measure->
		GraphicsUnit_Point = 3,
        //
        // Summary:
        //     Specifies the inch as the unit of measure->
		GraphicsUnit_Inch = 4,
        //
        // Summary:
        //     Specifies the document unit (1/300 inch) as the unit of measure->
		GraphicsUnit_Document = 5,
        //
        // Summary:
        //     Specifies the millimeter as the unit of measure->
		GraphicsUnit_Millimeter = 6,
	};
}
}
}
}
#endif//_SYSTEM_DRAWING_GRAPHICSUNIT_H_