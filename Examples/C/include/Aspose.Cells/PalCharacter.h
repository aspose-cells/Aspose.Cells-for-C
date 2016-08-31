#pragma once
#include "System/Char.h"
//#include "System/Globalization/CultureInfo.h"
#include "System/Object.h"
//#include "System/CharHelper.h"
#define STATIC_PALCHARACTER() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalCharacter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 PalCharacter();
	public:

			static Aspose::Cells::System::Char ToUpperInvariant(Aspose::Cells::System::Char c);
			static Aspose::Cells::System::Char ToLowerInvariant(Aspose::Cells::System::Char c);
		public:
			virtual ~PalCharacter();
	};

}

}

}

}
