#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_TTGLYPHPOINT() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
	class TTGlyphPoint : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 mX;
			Aspose::Cells::System::Int32 mY;
			Aspose::Cells::System::Int32 mdX;
			Aspose::Cells::System::Int32 mdY;
			bool mIsOnCurve;
			bool mIsEndOfContour;
	public:

			 TTGlyphPoint(Aspose::Cells::System::Int32 dx , Aspose::Cells::System::Int32 dy , Aspose::Cells::System::Int32 absoluteX , Aspose::Cells::System::Int32 absoluteY , bool isOnCurve , bool isEndOfContour);
			Aspose::Cells::System::Int32 GetdX();
			Aspose::Cells::System::Int32 GetdY();
			Aspose::Cells::System::Int32 GetX();
			Aspose::Cells::System::Int32 GetY();
			bool IsOnCurve();
			bool IsEndOfContour();
			 TTGlyphPoint();
		public:
			virtual ~TTGlyphPoint();
	};

}

}

}

}

}
