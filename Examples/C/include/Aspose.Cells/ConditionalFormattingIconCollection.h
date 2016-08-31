#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
#include "ConditionalFormattingIcon.h"
#include "IconSetType.h"
//#include "System/Int32Helper.h"
#include "System/Int32.h"
//#include "System/ArgumentException.h"
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_CONDITIONALFORMATTINGICONCOLLECTION() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ConditionalFormattingIconCollection : public Aspose::Cells::System::Collections::CollectionBase
#else	class ConditionalFormattingIconCollection : public Aspose::Cells::System::Collections::CollectionBase
#endif


	{
	private:

			void Init_Vars();
	public:

			 ConditionalFormattingIconCollection();
			void Copy(intrusive_ptr<Aspose::Cells::ConditionalFormattingIconCollection> cficons);
			intrusive_ptr<Aspose::Cells::ConditionalFormattingIcon> GetIndexObject(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 Add(Aspose::Cells::IconSetType type , Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::ConditionalFormattingIcon> cficon);
		public:
			virtual ~ConditionalFormattingIconCollection();
	};

}

}
