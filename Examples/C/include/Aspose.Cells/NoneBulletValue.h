#pragma once
#include "System/Object.h"
#include "BulletType.h"
#include "BulletValue.h"
#define STATIC_NONEBULLETVALUE() 


namespace Aspose {
namespace Cells {
namespace Drawing {
namespace Texts {
#ifdef WIN32

	class ASPOSE_CELLS_API NoneBulletValue : public Aspose::Cells::Drawing::Texts::BulletValue
#else	class NoneBulletValue : public Aspose::Cells::Drawing::Texts::BulletValue
#endif


	{
	private:

			void Init_Vars();
	public:

			 virtual Aspose::Cells::Drawing::Texts::BulletType GetType();
			 virtual void Copy(intrusive_ptr<Aspose::Cells::Drawing::Texts::BulletValue> source);
			 NoneBulletValue();
		public:
			virtual ~NoneBulletValue();
	};

}

}

}

}
