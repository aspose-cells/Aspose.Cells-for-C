#pragma once
#include "System/Object.h"
#include "BulletType.h"
#include "System/Char.h"
#include "BulletValue.h"
#define STATIC_CHARACTERBULLETVALUE() 


namespace Aspose {
namespace Cells {
namespace Drawing {
namespace Texts {
#ifdef WIN32

	class ASPOSE_CELLS_API CharacterBulletValue : public Aspose::Cells::Drawing::Texts::BulletValue
#else	class CharacterBulletValue : public Aspose::Cells::Drawing::Texts::BulletValue
#endif


	{
	private:

			void Init_Vars();
	public:

			 virtual Aspose::Cells::Drawing::Texts::BulletType GetType();
			Aspose::Cells::System::Char _Character;
			Aspose::Cells::System::Char GetCharacter();
			void SetCharacter(Aspose::Cells::System::Char value);
			 virtual void Copy(intrusive_ptr<Aspose::Cells::Drawing::Texts::BulletValue> source);
			 CharacterBulletValue();
		public:
			virtual ~CharacterBulletValue();
	};

}

}

}

}
