#pragma once
#include "System/Object.h"
//#include "System/Boxing.h"
#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
#include "System/Collections/Hashtable.h"
#define STATIC_CFFTOPDICT() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
namespace TrueType {
	class CffTopDict : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Int32 VersionKey;
			 static const Aspose::Cells::System::Int32 NoticeKey;
			 static const Aspose::Cells::System::Int32 CopyrightKey;
			 static const Aspose::Cells::System::Int32 FullNameKey;
			 static const Aspose::Cells::System::Int32 WeigthKey;
			 static const Aspose::Cells::System::Int32 FamilyNameKey;
			 static const Aspose::Cells::System::Int32 IsFixedPitchKey;
			 static const Aspose::Cells::System::Int32 ItalicAngelKey;
			 static const Aspose::Cells::System::Int32 UnderlinePositionKey;
			 static const Aspose::Cells::System::Int32 UnderlineThiknessKey;
			 static const Aspose::Cells::System::Int32 PaintTypeKey;
			 static const Aspose::Cells::System::Int32 CharstringTypeKey;
			 static const Aspose::Cells::System::Int32 FontMatrixKey;
			 static const Aspose::Cells::System::Int32 UniqueIdKey;
			 static const Aspose::Cells::System::Int32 FontBBoxKey;
			 static const Aspose::Cells::System::Int32 StrokeWidthKey;
			 static const Aspose::Cells::System::Int32 XuidKey;
			 static const Aspose::Cells::System::Int32 CharsetKey;
			 static const Aspose::Cells::System::Int32 EncodingKey;
			 static const Aspose::Cells::System::Int32 CharStringsKey;
			 static const Aspose::Cells::System::Int32 PrivateKey;
			 static const Aspose::Cells::System::Int32 SyntheticBaseKey;
			 static const Aspose::Cells::System::Int32 PostScriptKey;
			 static const Aspose::Cells::System::Int32 BaseFontNameKey;
			 static const Aspose::Cells::System::Int32 BaseFontBlendKey;
			 static const Aspose::Cells::System::Int32 RosKey;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> mDictionary;
	public:

			 CffTopDict(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> dict);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetRos();
			 CffTopDict();
		public:
			virtual ~CffTopDict();
	};

}

}

}

}

}
