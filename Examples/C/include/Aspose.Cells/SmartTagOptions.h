#pragma once
#include "System/Object.h"
#include "SmartTagShowType.h"
#define STATIC_SMARTTAGOPTIONS() 


namespace Aspose {
namespace Cells {
namespace Markup {
#ifdef WIN32

	class ASPOSE_CELLS_API SmartTagOptions : public Aspose::Cells::System::Object
#else	class SmartTagOptions : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			bool m_EmbedSmartTags;
			Aspose::Cells::Markup::SmartTagShowType m_ShowType;
	public:

			bool GetEmbedSmartTags();
			void SetEmbedSmartTags(bool value);
			Aspose::Cells::Markup::SmartTagShowType GetShowType();
			void SetShowType(Aspose::Cells::Markup::SmartTagShowType value);
			void Copy(intrusive_ptr<Aspose::Cells::Markup::SmartTagOptions> source);
			 SmartTagOptions();
		public:
			virtual ~SmartTagOptions();
	};

}

}

}
