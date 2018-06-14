#ifndef _SYSTEM_DRAWING_IMAGING_IMAGELOCKMODE_H_
#define _SYSTEM_DRAWING_IMAGING_IMAGELOCKMODE_H_

namespace Aspose {
	namespace Cells {
		namespace System{
			namespace Drawing {
				namespace Imaging{
					enum ImageLockMode {
						/// <include file='doc\ImageLockMode.uex' path='docs/doc[@for="ImageLockMode.ReadOnly"]/*' />
						/// <devdoc>
						///    <para>
						///       Specifies the image is read-only.
						///    </para>
						/// </devdoc>
						ImageLockMode_ReadOnly = 0x0001,
						/// <include file='doc\ImageLockMode.uex' path='docs/doc[@for="ImageLockMode.WriteOnly"]/*' />
						/// <devdoc>
						///    <para>
						///       Specifies the image is
						///       write-only.
						///    </para>
						/// </devdoc>
						ImageLockMode_WriteOnly = 0x0002,
						/// <include file='doc\ImageLockMode.uex' path='docs/doc[@for="ImageLockMode.ReadWrite"]/*' />
						/// <devdoc>
						///    <para>
						///       Specifies the image is
						///       read-write.
						///    </para>
						/// </devdoc>
						ImageLockMode_ReadWrite = ImageLockMode_ReadOnly | ImageLockMode_WriteOnly,
						/// <include file='doc\ImageLockMode.uex' path='docs/doc[@for="ImageLockMode.UserInputBuffer"]/*' />
						/// <devdoc>
						///    Indicates the image resides in a user input
						///    buffer, to which the user controls access.
						/// </devdoc>
						ImageLockMode_UserInputBuffer = 0x0004,
					};
				}
			}
		}
	}
}

#endif