#pragma once
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/Int32.h"
#include "IconSetType.h"
#include "System/Object.h"
#define STATIC_CONDITIONALFORMATTINGICON() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ConditionalFormattingIcon : public Aspose::Cells::System::Object
#else	class ConditionalFormattingIcon : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::IconSetType _type;
			Aspose::Cells::System::Int32 _index;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> _imageData;
	public:

			 ConditionalFormattingIcon(Aspose::Cells::IconSetType type , Aspose::Cells::System::Int32 index);
			 ConditionalFormattingIcon();
			void Copy(intrusive_ptr<Aspose::Cells::ConditionalFormattingIcon> cficon);
			Aspose::Cells::IconSetType GetType();
			void SetType(Aspose::Cells::IconSetType value);
			Aspose::Cells::System::Int32 GetIndex();
			void SetIndex(Aspose::Cells::System::Int32 value);
		public:
			virtual ~ConditionalFormattingIcon();
	};

}

}
