#pragma once
//#include "System/Array.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Char.h"
#include "NumberPatternType.h"
#include "System/Drawing/Color.h"
#include "System/Int32.h"
//#include "System/Int64.h"
#include "System/Array1D.h"
#define STATIC_FORMATTEDINFO() 


namespace Aspose {
namespace Cells {
	class FormattedInfo : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> Static_Array_Init_EMPTY();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> PLACEHOLDER_UNDISPLAYABLE;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> Static_Array_Init_PLACEHOLDER_UNDISPLAYABLE();
			Aspose::Cells::NumberPatternType m_Type;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> m_Value;
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> m_Color;
			bool m_Undisplayable;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> m_PlaceHolders;
	public:

			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> EMPTY;
			void Reset();
			bool GetEmpty();
			bool GetEmptyValue();
			void SetEmpty();
			bool GetUndisplayable();
			void SetUndisplayable(Aspose::Cells::System::Char charForUndisplayable);
			Aspose::Cells::NumberPatternType GetNumberPatternType();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> GetValue();
			intrusive_ptr<Aspose::Cells::System::String> GetStringValue();
			void SetValue(Aspose::Cells::NumberPatternType type , intrusive_ptr<Aspose::Cells::System::String> value);
			void SetValue(Aspose::Cells::NumberPatternType type , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> value);
			intrusive_ptr<Aspose::Cells::System::String> GetFormattedStringWithPlaceHolder(Aspose::Cells::System::Int32 repeatCount , bool useSpace);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> GetFormattedCharSequenceWithPlaceHolder(Aspose::Cells::System::Int32 repeatCount , bool useSpace);
			void SetColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color);
			intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColor();
			void SetPlaceHolders(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> placeHolders);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetPlaceHolders();
			bool HasRepeatedPlaceHolder();
			Aspose::Cells::System::Int32 GetPlaceHolderCount();
			bool GetPlaceHolderRepeated(Aspose::Cells::System::Int32 index);
			void SetPlaceHolderRepeated(Aspose::Cells::System::Int32 index , bool repeated);
			Aspose::Cells::System::Int32 GetPlaceHolderPosition(Aspose::Cells::System::Int32 index);
			void SetPlaceHolderPosition(Aspose::Cells::System::Int32 index , Aspose::Cells::System::Int32 position);
			Aspose::Cells::System::Char GetPlaceHolderChar(Aspose::Cells::System::Int32 index);
			void SetPlaceHolderChar(Aspose::Cells::System::Int32 index , Aspose::Cells::System::Char c);
			static Aspose::Cells::System::Int32 BuildPlaceHolder(bool repeated , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Char c);
			 FormattedInfo();
		public:
			virtual ~FormattedInfo();
	};

}

}
