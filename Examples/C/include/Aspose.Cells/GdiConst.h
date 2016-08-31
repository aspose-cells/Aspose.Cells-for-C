#pragma once
#include "System/Object.h"
#include "System/Single.h"
#include "System/Drawing/RectangleF.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Drawing/SizeF.h"
#define STATIC_GDICONST() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class GdiConst : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 GdiConst();
	public:

			static intrusive_ptr<Aspose::Cells::System::Drawing::RectangleF> GetDefaultMetafileBounds();
			static intrusive_ptr<Aspose::Cells::System::Drawing::SizeF> GetDefaultViewportExt();
			 static const Aspose::Cells::System::Int32 EmfPlusGdiIdent;
			 static const Aspose::Cells::System::Single DefaultWmfResolution;
			 static const intrusive_ptr<Aspose::Cells::System::String> DefaultFont;
			 static const Aspose::Cells::System::Single DefaultFontSize;
		public:
			virtual ~GdiConst();
	};

}

}

}

}
