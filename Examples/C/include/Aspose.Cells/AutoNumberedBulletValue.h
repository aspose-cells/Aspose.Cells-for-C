#pragma once
#include "System/Object.h"
#include "BulletType.h"
#include "TextAutonumberScheme.h"
#include "BulletValue.h"
#include "System/Int32.h"
#define STATIC_AUTONUMBEREDBULLETVALUE() 


namespace Aspose {
namespace Cells {
namespace Drawing {
namespace Texts {
#ifdef WIN32

	class ASPOSE_CELLS_API AutoNumberedBulletValue : public Aspose::Cells::Drawing::Texts::BulletValue
#else	class AutoNumberedBulletValue : public Aspose::Cells::Drawing::Texts::BulletValue
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 m_startAt;
			Aspose::Cells::Drawing::Texts::TextAutonumberScheme m_autonumberScheme;
	public:

			 virtual Aspose::Cells::Drawing::Texts::BulletType GetType();
			Aspose::Cells::System::Int32 GetStartAt();
			void SetStartAt(Aspose::Cells::System::Int32 value);
			Aspose::Cells::Drawing::Texts::TextAutonumberScheme GetAutonumberScheme();
			void SetAutonumberScheme(Aspose::Cells::Drawing::Texts::TextAutonumberScheme value);
			 virtual void Copy(intrusive_ptr<Aspose::Cells::Drawing::Texts::BulletValue> source);
			 AutoNumberedBulletValue();
		public:
			virtual ~AutoNumberedBulletValue();
	};

}

}

}

}
