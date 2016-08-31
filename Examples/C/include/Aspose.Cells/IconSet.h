#pragma once
//#include "System/Boxing.h"
#include "System/Object.h"
#include "IconSetType.h"
#include "System/Int32.h"
//#include "System/Exception.h"
//#include "System/Collections/CollectionBase.h"
#define STATIC_ICONSET() 

namespace Aspose {
namespace Cells {
class ConditionalFormattingValueCollection;
class ConditionalFormattingIconCollection;
class CopyOptions;
class FormatCondition;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API IconSet : public Aspose::Cells::System::Object
#else	class IconSet : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			bool _showValue;
			bool _reverse;
			bool _isPercent;
			intrusive_ptr<Aspose::Cells::ConditionalFormattingValueCollection> _cfvos;
			Aspose::Cells::FormatCondition* formatCondition;
			void CreatCfIcons(Aspose::Cells::System::Int32 iconNum);
			void AddDftCfvos(Aspose::Cells::System::Int32 num);
	public:

			Aspose::Cells::IconSetType _type;
			intrusive_ptr<Aspose::Cells::ConditionalFormattingIconCollection> cficons;
			intrusive_ptr<Aspose::Cells::ConditionalFormattingIconCollection> GetCfIcons();
			 IconSet(intrusive_ptr<Aspose::Cells::FormatCondition> formatCond);
			void Copy(intrusive_ptr<Aspose::Cells::IconSet> source , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static intrusive_ptr<Aspose::Cells::IconSet> GetDefaultIconSet(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			intrusive_ptr<Aspose::Cells::ConditionalFormattingValueCollection> GetCfvos();
			Aspose::Cells::IconSetType GetType();
			void SetType(Aspose::Cells::IconSetType value);
			bool IsCustom();
			void SetInternalType(Aspose::Cells::IconSetType type);
			bool GetShowValue();
			void SetShowValue(bool value);
			bool GetReverse();
			void SetReverse(bool value);
			bool IsPercent();
			void SetIsPercent(bool value);
			 IconSet();
		public:
			virtual ~IconSet();
	};

}

}
