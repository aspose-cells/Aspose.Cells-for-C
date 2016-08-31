#ifndef _SYSTEM_DRAWING_IMAGING_ENCODERPARAMETER_H_
#define _SYSTEM_DRAWING_IMAGING_ENCODERPARAMETER_H_

#include "System/Object.h"
#include "System/IDisposable.h"
#include "System/String.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/Int16.h"
#include "System/Int32.h"
#include "System/Int64.h"

//#include "Encoder.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing::Imaging ;
namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
namespace Imaging {
	class ASPOSE_CELLS_API EncoderParameter : public Object, public IDisposable
	{
		void Dispose()
		{
			throw Exception("EncoderParameter.Dispose NotSupport");
		}

		virtual void add_ref() {
			++ref_count_;
		}

		virtual int release_ref() {
			return --ref_count_;
		}

		/*
		private:

		public:
			EncoderParameter(Encoder* encoder, Byte value);
			EncoderParameter(Encoder* encoder, Array1D<Byte>* value);
			EncoderParameter(Encoder* encoder, Int64 value);
			EncoderParameter(Encoder* encoder, Array1D<Int64>* value);
			EncoderParameter(Encoder* encoder, Int16 value);
			EncoderParameter(Encoder* encoder, Array1D<Int16>* value);
			EncoderParameter(Encoder* encoder, String value);
			EncoderParameter(Encoder* encoder, Byte value, bool undefined);
			EncoderParameter(Encoder* encoder, Array1D<Byte>* value, bool undefined);
			EncoderParameter(Encoder* encoder, Int32 numerator, Int32 demoninator);
			EncoderParameter(Encoder* encoder, Array1D<Int32>* numerator, Array1D<Int32>* denominator);
			EncoderParameter(Encoder* encoder, Int64 rangebegin, Int64 rangeend);
			EncoderParameter(Encoder* encoder, Array1D<Int64>* rangebegin, Array1D<Int64>* rangeend);
			EncoderParameter(Encoder* encoder, Int32 NumberOfValues, Int32 Type, Int32 Value);
			EncoderParameter(Encoder* encoder, Int32 numerator1, Int32 demoninator1, Int32 numerator2, Int32 demoninator2);
			EncoderParameter(Encoder* encoder, Array1D<Int32>* numerator1, Array1D<Int32>* denominator1, Array1D<Int32>* numerator2, Array1D<Int32>* denominator2);

			void Dispose();
			*/
	};
}
}
}
}
}
#endif
