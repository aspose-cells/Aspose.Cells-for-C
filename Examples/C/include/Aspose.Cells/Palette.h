#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Collections/SortedList.h"
//#include "System/Boxing.h"
//#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/Int64.h"
#include "System/Drawing/Color.h"
#define STATIC_PALETTE() 


namespace Aspose {
namespace Cells {
	class Palette : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::SortedList> colorList;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Drawing::Color*>> m_Colors;
			Aspose::Cells::System::Int32 GetColorPaletteIndex(Aspose::Cells::System::Int32 color);
	public:

			 Palette();
			static intrusive_ptr<Aspose::Cells::System::Collections::SortedList> InitSystemPalette();
			intrusive_ptr<Aspose::Cells::System::Collections::SortedList> GetColorList();
			Aspose::Cells::System::Int32 GetColorPaletteIndex(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			void SetColor(Aspose::Cells::System::Int32 color , Aspose::Cells::System::Int32 index);
			void ChangePalette(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Int32 index);
			void Copy(intrusive_ptr<Aspose::Cells::Palette> source);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColor(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 GetRGB(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 MatchColor(Aspose::Cells::System::Int32 r , Aspose::Cells::System::Int32 g , Aspose::Cells::System::Int32 b);
			Aspose::Cells::System::Int32 MatchColor(Aspose::Cells::System::Int32 intColor);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> ConvertColor(Aspose::Cells::System::Int32 intColor);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColorInPalette(Aspose::Cells::System::Int32 index);
			static intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColorInPalette(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::System::Collections::SortedList> colorList);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Drawing::Color*>> GetColors();
			bool IsColorInPalette(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			Aspose::Cells::System::Int32 GetIntColor(Aspose::Cells::System::Int32 index);
		public:
			virtual ~Palette();
	};

}

}
