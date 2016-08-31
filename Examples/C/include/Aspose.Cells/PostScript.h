#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
#include "System/Collections/ArrayList.h"
#include "System/String.h"
#include "TTTable.h"
//#include "System/Boxing.h"
#include "System/Int16.h"
//#include "System/InvalidOperationException.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
//#include "System/Math.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_POSTSCRIPT() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
class BigEndianBinaryReader;
class BigEndianBinaryWriter;
class SortedIntegerList;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
	class PostScript : public Aspose::Cells::Internal::Rendering::TrueType::TTTable
	{
	private:

			void Init_Vars();
			void SubsetVersion20Fields(intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> usedGlyphs);
			 static const Aspose::Cells::System::Int32 StandardMacintoshGlyphCount;
			static intrusive_ptr<Aspose::Cells::System::String> ReadPascalString(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader);
			static void WritePascalString(intrusive_ptr<Aspose::Cells::System::String> s , intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryWriter> writer);
	public:

			Aspose::Cells::System::Int32 Version;
			Aspose::Cells::System::Int32 ItalicAngle;
			Aspose::Cells::System::Int16 UnderlinePosition;
			Aspose::Cells::System::Int16 UnderlineThickness;
			Aspose::Cells::System::Int32 IsFixedPitch;
			Aspose::Cells::System::Int32 MinMemType42;
			Aspose::Cells::System::Int32 MaxMemType42;
			Aspose::Cells::System::Int32 MinMemType1;
			Aspose::Cells::System::Int32 MaxMemType1;
			 static const Aspose::Cells::System::Int32 Version10;
			 static const Aspose::Cells::System::Int32 Version20;
			 static const Aspose::Cells::System::Int32 Version25;
			 static const Aspose::Cells::System::Int32 Version30;
			Aspose::Cells::System::Int32 NumberOfGlyphs;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GlyphNameIndexes;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> Names;
			 PostScript(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryReader> reader);
			 virtual void Write(intrusive_ptr<Aspose::Cells::Internal::Rendering::BigEndianBinaryWriter> writer);
			void Subset(intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> usedGlyphs);
			 PostScript();
		public:
			virtual ~PostScript();
	};

}

}

}

}

}
