#ifndef _SYSTEM_DRAWING_IMAGING_IMAGINGENCODER_H_
#define _SYSTEM_DRAWING_IMAGING_IMAGINGENCODER_H_

#include "System/Object.h"
#include "System/Guid.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Imaging {
					class ASPOSE_CELLS_API ImagingEncoder : public Object
					{
					public:
						static intrusive_ptr<ImagingEncoder> ChrominanceTable;
						static intrusive_ptr<ImagingEncoder> ColorDepth;
						static intrusive_ptr<ImagingEncoder> Compression;
						static intrusive_ptr<ImagingEncoder> LuminanceTable;
						static intrusive_ptr<ImagingEncoder> Quality;
						static intrusive_ptr<ImagingEncoder> RenderMethod;
						static intrusive_ptr<ImagingEncoder> SaveFlag;
						static intrusive_ptr<ImagingEncoder> ScanMethod;
						static intrusive_ptr<ImagingEncoder> Transformation;
						static intrusive_ptr<ImagingEncoder> Version;

					private:
						intrusive_ptr<Guid> guid;

					public:
						ImagingEncoder(intrusive_ptr<Guid> guid);
						ImagingEncoder(StringPtr guid);
						virtual ~ImagingEncoder();
						intrusive_ptr<Guid> GetGuid();
					};

				}
			}
		}

	}
}
#endif
