#pragma once
#include "System/Object.h"
#include "TTGlyphPoint.h"
#include "System/Single.h"
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
#define STATIC_TTGLYPHPOINTCOLLECTION() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
	class TTGlyphPointCollection : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 mX;
			Aspose::Cells::System::Int32 mY;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> mPoints;
			Aspose::Cells::System::Single mScale;
	public:

			 TTGlyphPointCollection(Aspose::Cells::System::Single scale);
			intrusive_ptr<Aspose::Cells::Internal::Rendering::TrueType::TTGlyphPoint> GetIndexObject(Aspose::Cells::System::Int32 index);
			void Add(Aspose::Cells::System::Int32 dx , Aspose::Cells::System::Int32 dy , bool isOnCurve , bool isEndOfCotour);
			Aspose::Cells::System::Int32 GetCount();
			 TTGlyphPointCollection();
		public:
			virtual ~TTGlyphPointCollection();
	};

}

}

}

}

}
