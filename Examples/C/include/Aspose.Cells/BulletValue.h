#pragma once
#include "System/Object.h"
#include "BulletType.h"
#define STATIC_BULLETVALUE() 


namespace Aspose {
namespace Cells {
namespace Drawing {
namespace Texts {
#ifdef WIN32

	class ASPOSE_CELLS_API BulletValue : public Aspose::Cells::System::Object
#else	class BulletValue : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
	public:

			 virtual Aspose::Cells::Drawing::Texts::BulletType GetType();
			 virtual void Copy(intrusive_ptr<Aspose::Cells::Drawing::Texts::BulletValue> source);
			 BulletValue();
		public:
			virtual ~BulletValue();
	};

}

}

}

}
