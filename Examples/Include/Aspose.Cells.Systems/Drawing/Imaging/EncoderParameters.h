#ifndef _SYSTEM_DRAWING_IMAGING_ENCODERPARAMETERS_H_
#define _SYSTEM_DRAWING_IMAGING_ENCODERPARAMETERS_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/IDisposable.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/Int16.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Int64.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/EncoderParameter.h"
using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Drawing::Imaging;

namespace Aspose {
	namespace Cells {
		namespace Systems {
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
