#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "BulletType.h"
#include "System/Byte.h"
#include "BulletValue.h"
#define STATIC_PICTUREBULLETVALUE() 


namespace Aspose {
namespace Cells {
namespace Drawing {
namespace Texts {
#ifdef WIN32

	class ASPOSE_CELLS_API PictureBulletValue : public Aspose::Cells::Drawing::Texts::BulletValue
#else	class PictureBulletValue : public Aspose::Cells::Drawing::Texts::BulletValue
#endif


	{
	private:

			void Init_Vars();
	public:

			 virtual Aspose::Cells::Drawing::Texts::BulletType GetType();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> _ImageData;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetImageData();
			void SetImageData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			 virtual void Copy(intrusive_ptr<Aspose::Cells::Drawing::Texts::BulletValue> source);
			 PictureBulletValue();
		public:
			virtual ~PictureBulletValue();
	};

}

}

}

}
