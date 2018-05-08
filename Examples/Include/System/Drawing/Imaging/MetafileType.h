#ifndef _SYSTEM_DRAWING_IMAGING_METAFILETYPE_H_
#define _SYSTEM_DRAWING_IMAGING_METAFILETYPE_H_

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Imaging {
					enum MetafileType
					{
						/// <include file='doc\MetafileType.uex' path='docs/doc[@for="MetafileType.Invalid"]/*' />
						/// <devdoc>
						///    Specifies an invalid type.
						/// </devdoc>
						MetafileType_Invalid,            // Invalid metafile
						/// <include file='doc\MetafileType.uex' path='docs/doc[@for="MetafileType.Wmf"]/*' />
						/// <devdoc>
						///    Specifies a standard Windows metafile.
						/// </devdoc>
						MetafileType_Wmf,                // Standard WMF
						/// <include file='doc\MetafileType.uex' path='docs/doc[@for="MetafileType.WmfPlaceable"]/*' />
						/// <devdoc>
						///    Specifies a Windows Placeable metafile.
						/// </devdoc>
						MetafileType_WmfPlaceable,           // Placeable Metafile format
						/// <include file='doc\MetafileType.uex' path='docs/doc[@for="MetafileType.Emf"]/*' />
						/// <devdoc>
						///    Specifies a Windows enhanced metafile.
						/// </devdoc>
						MetafileType_Emf,                // EMF (not EMF+)
						/// <include file='doc\MetafileType.uex' path='docs/doc[@for="MetafileType.EmfPlusOnly"]/*' />
						/// <devdoc>
						///    Specifies a Windows enhanced metafile plus.
						/// </devdoc>
						MetafileType_EmfPlusOnly,        // EMF+ without dual, down-level records
						/// <include file='doc\MetafileType.uex' path='docs/doc[@for="MetafileType.EmfPlusDual"]/*' />
						/// <devdoc>
						///    Specifies both enhanced and enhanced plus
						///    commands in the same file.
						/// </devdoc>
						MetafileType_EmfPlusDual,        // EMF+ with dual, down-level records
					};
				}
			}
		}
	}
}
#endif