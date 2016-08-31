#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "IIndexedColorProvider.h"
#include "System/Int32.h"
#include "System/Drawing/Color.h"
#define STATIC_INDEXEDCOLORPROVIDERSTATIC() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class IndexedColorProviderStatic : public Aspose::Cells::Internal::Format::IIndexedColorProvider
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Drawing::Color*>> m_Colors;
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> FromRgb(Aspose::Cells::System::Int32 colorNumber);
	public:

			 IndexedColorProviderStatic();
			 IndexedColorProviderStatic(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Drawing::Color*>> colors);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColor(Aspose::Cells::System::Int32 index);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetDefaultColor(Aspose::Cells::System::Int32 index);
		public:
			virtual ~IndexedColorProviderStatic();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}

}
