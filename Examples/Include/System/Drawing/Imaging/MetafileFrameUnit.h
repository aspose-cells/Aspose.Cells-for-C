#ifndef _SYSTEM_DRAWING_IMAGING_METAFILEUNIT_H_
#define _SYSTEM_DRAWING_IMAGING_METAFILEUNIT_H_
#include "System/Drawing/GraphicsUnit.h"
using namespace Aspose::Cells::System::Drawing;
namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Imaging {
					enum MetafileFrameUnit
					{
						/// <include file='doc\MetafileFrameUnit.uex' path='docs/doc[@for="MetafileFrameUnit.Pixel"]/*' />
						/// <devdoc>
						///    <para>
						///       Specifies a pixel as the unit of measure.
						///    </para>
						/// </devdoc>
						MetafileFrameUnit_Pixel = GraphicsUnit::GraphicsUnit_Pixel,
						/// <include file='doc\MetafileFrameUnit.uex' path='docs/doc[@for="MetafileFrameUnit.Point"]/*' />
						/// <devdoc>
						///    Specifies a printer's point as
						///    the unit of measure.
						/// </devdoc>
						MetafileFrameUnit_Point = GraphicsUnit_Point,
						/// <include file='doc\MetafileFrameUnit.uex' path='docs/doc[@for="MetafileFrameUnit.Inch"]/*' />
						/// <devdoc>
						///    <para>
						///       Specifies an inch as the unit of measure.
						///    </para>
						/// </devdoc>
						MetafileFrameUnit_Inch = GraphicsUnit_Inch,
						/// <include file='doc\MetafileFrameUnit.uex' path='docs/doc[@for="MetafileFrameUnit.Document"]/*' />
						/// <devdoc>
						///    Specifies 1/300 of an inch as the unit of
						///    measure.
						/// </devdoc>
						MetafileFrameUnit_Document = GraphicsUnit_Document,
						/// <include file='doc\MetafileFrameUnit.uex' path='docs/doc[@for="MetafileFrameUnit.Millimeter"]/*' />
						/// <devdoc>
						///    <para>
						///       Specifies a millimeter as the unit of
						///       measure.
						///    </para>
						/// </devdoc>
						MetafileFrameUnit_Millimeter = GraphicsUnit_Millimeter,
						/// <include file='doc\MetafileFrameUnit.uex' path='docs/doc[@for="MetafileFrameUnit.GdiCompatible"]/*' />
						/// <devdoc>
						///    Specifies .01 millimeter as the unit of
						///    measure. Provided for compatibility with GDI.
						/// </devdoc>
						MetafileFrameUnit_GdiCompatible
					};
			}
		}
	}
}
}
#endif