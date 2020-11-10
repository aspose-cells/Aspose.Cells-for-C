#ifndef _SYSTEM_DRAWING_IMAGING_ENCODERPARAMETER_H_
#define _SYSTEM_DRAWING_IMAGING_ENCODERPARAMETER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/IDisposable.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/Int16.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Int64.h"
#include "Aspose.Cells.Systems/IntegerPtr.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/ImagingEncoder.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/EncoderParameterValueType.h"

using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {
				namespace Imaging {
					class ASPOSE_CELLS_API EncoderParameter : public Object, public IDisposable
					{
					private:
						intrusive_ptr<ImagingEncoder> encoder;
						Int32 valuesCount;
						EncoderParameterValueType type;
						Byte* valuePtr;

					public:
						virtual ~EncoderParameter();
						void Dispose(bool disposing);
						void Dispose();
						EncoderParameter(intrusive_ptr<ImagingEncoder> encoder, Byte value);
						EncoderParameter(intrusive_ptr<ImagingEncoder> encoder, intrusive_ptr<Array1D<Byte>> value);
						EncoderParameter(intrusive_ptr<ImagingEncoder> encoder, Int16 value);
						EncoderParameter(intrusive_ptr<ImagingEncoder> encoder, intrusive_ptr<Array1D<Int16>> value);
						EncoderParameter(intrusive_ptr<ImagingEncoder> encoder, Int32 value);
						EncoderParameter(intrusive_ptr<ImagingEncoder> encoder, Int64 value);
						EncoderParameter(intrusive_ptr<ImagingEncoder> encoder, intrusive_ptr<Array1D<Int64>> value);
						EncoderParameter(intrusive_ptr<ImagingEncoder> encoder, StringPtr value);
						EncoderParameter(intrusive_ptr<ImagingEncoder> encoder, Byte value, bool undefined);
						EncoderParameter(intrusive_ptr<ImagingEncoder> encoder, intrusive_ptr<Array1D<Byte>> value, bool undefined);
						EncoderParameter(intrusive_ptr<ImagingEncoder> encoder, Int32 numerator, Int32 denominator);
						EncoderParameter(intrusive_ptr<ImagingEncoder> encoder, intrusive_ptr<Array1D<Int32>> numerator, intrusive_ptr<Array1D<Int32>> denominator);
						EncoderParameter(intrusive_ptr<ImagingEncoder> encoder, Int64 rangebegin, Int64 rangeend);
						EncoderParameter(intrusive_ptr<ImagingEncoder> encoder, intrusive_ptr<Array1D<Int64>> rangebegin, intrusive_ptr<Array1D<Int64>> rangeend);
						EncoderParameter(intrusive_ptr<ImagingEncoder> encoder, Int32 numberOfValues, Int32 type, Int32 value);
						EncoderParameter(intrusive_ptr<ImagingEncoder> encoder, Int32 numerator1, Int32 denominator1, Int32 numerator2, Int32 denominator2);
						EncoderParameter(intrusive_ptr<ImagingEncoder> encoder, intrusive_ptr<Array1D<Int32>> numerator1, intrusive_ptr<Array1D<Int32>> denominator1, intrusive_ptr<Array1D<Int32>> numerator2, intrusive_ptr<Array1D<Int32>> denominator2);

						intrusive_ptr<ImagingEncoder> GetEncoder();
						void SetEncoder(intrusive_ptr<ImagingEncoder> encoder);
						Int32 GetNumberOfValues();
						EncoderParameterValueType GetType();
						EncoderParameterValueType GetValueType();
						Byte* GetValuePtr(){ return valuePtr; }

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
