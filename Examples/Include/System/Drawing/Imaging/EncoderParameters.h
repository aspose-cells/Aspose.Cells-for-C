#ifndef _SYSTEM_DRAWING_IMAGING_ENCODERPARAMETERS_H_
#define _SYSTEM_DRAWING_IMAGING_ENCODERPARAMETERS_H_

#include "System/Object.h"
#include "System/IDisposable.h"
#include "System/String.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/Int16.h"
#include "System/Int32.h"
#include "System/Int64.h"
#include "System/Drawing/Imaging/EncoderParameter.h"
using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Drawing::Imaging;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Imaging {
					class ASPOSE_CELLS_API EncoderParameters : public Object, public IDisposable
					{
					private:
						intrusive_ptr<Array1D<EncoderParameter*>> param;
			
					public:
						EncoderParameters(int count);
						EncoderParameters();
						virtual ~EncoderParameters();
						void Dispose();

						intrusive_ptr<Array1D<EncoderParameter*>> GetParam();
						void SetParam(intrusive_ptr<Array1D<EncoderParameter*>> value);

						virtual void add_ref() {
							++ref_count_;
						}

						virtual int release_ref() {
							return --ref_count_;
						}

					};
				}
			}
		}
	}
}
#endif
