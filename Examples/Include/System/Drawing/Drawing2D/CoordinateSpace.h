#ifndef _SYSTEM_DRAWING_DRAWING2D_COORDINATESPACE_H_
#define _SYSTEM_DRAWING_DRAWING2D_COORDINATESPACE_H_

namespace Aspose {
	namespace Cells {
		namespace System{
			namespace Drawing {
				namespace Drawing2D {
					enum CoordinateSpace
					{
						/// <include file='doc\CoordinateSpace.uex' path='docs/doc[@for="CoordinateSpace.World"]/*' />
						/// <devdoc>
						///    <para>
						///       Specifies that coordinates are in the world coordinate context. World
						///       coordinates are used in a non physical enviroment such as a modeling
						///       environment.
						///    </para>
						/// </devdoc>
						World = 0,
						/// <include file='doc\CoordinateSpace.uex' path='docs/doc[@for="CoordinateSpace.Page"]/*' />
						/// <devdoc>
						///    <para>
						///       Specifies that coordinates are in the page coordinate context. Page
						///       coordinates are typically used in a multiple page documents environment.
						///    </para>
						/// </devdoc>
						Page = 1,
						/// <include file='doc\CoordinateSpace.uex' path='docs/doc[@for="CoordinateSpace.Device"]/*' />
						/// <devdoc>
						///    <para>
						///       Specifies that coordinates are in the device coordinate context. Device
						///       coordinates occur in screen coordinates just before they are drawn on the
						///       screen.
						///    </para>
						/// </devdoc>
						Device = 2
	
					};
				}

			}
		}
	}
}
#endif