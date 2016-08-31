#pragma once
#include "System/Collections/CollectionBase.h"
#include "System/String.h"
#include "System/Object.h"
#define STATIC_LEVELTEXTSTYLECOLLECTION() 


namespace Aspose {
namespace Cells {
namespace Drawing {
namespace Texts {
	class LevelTextStyleCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> m_Xml;
			bool Loaded;
			 LevelTextStyleCollection();
		public:
			virtual ~LevelTextStyleCollection();
	};

}

}

}

}
