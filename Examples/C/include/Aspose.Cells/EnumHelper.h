#pragma once
#include "System/Byte.h"
#include "TextAlignmentType.h"
#include "System/Object.h"
#include "System/String.h"
#include "Constants.h"
#include "CellBorderType.h"
#include "IconSetType.h"
#include "ErrorType.h"
#include "ThemeColorType.h"
#include "ShapePathType.h"
#include "PivotTableSourceType.h"
#include "System/Int32.h"
#include "OperatorType.h"
#include "PathFillMode.h"
#define STATIC_ENUMHELPER() 


namespace Aspose {
namespace Cells {
	class EnumHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static Aspose::Cells::System::Int32 ToBorderRank(Aspose::Cells::CellBorderType a);
			static bool IsBorderCovered(Aspose::Cells::CellBorderType a , Aspose::Cells::CellBorderType b);
			static Aspose::Cells::Pivot::PivotTableSourceType GetPivotTableSourceType(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::ThemeColorType ToThemeColorType(Aspose::Cells::System::Int32 colorType);
			static Aspose::Cells::System::Int32 ToThemeColorValue(Aspose::Cells::ThemeColorType colorType);
			static Aspose::Cells::System::Byte ToBuiltInErrorValue(intrusive_ptr<Aspose::Cells::System::String> error);
			static Aspose::Cells::ErrorType ToErrorType(intrusive_ptr<Aspose::Cells::System::String> error , bool& isError);
			static intrusive_ptr<Aspose::Cells::System::String> ToErrorValue(Aspose::Cells::ErrorType type);
			static Aspose::Cells::System::Byte ToErrorByteValue(Aspose::Cells::ErrorType type);
			static Aspose::Cells::ErrorType ToErrorType(Aspose::Cells::System::Byte type);
			static intrusive_ptr<Aspose::Cells::System::String> ToErrorValue(Aspose::Cells::System::Byte type);
			static bool IsError(intrusive_ptr<Aspose::Cells::System::String> stringType);
			static bool IsBuiltInError(intrusive_ptr<Aspose::Cells::System::String> stringType);
			static bool IsError(intrusive_ptr<Aspose::Cells::System::String> stringType , bool& isRecursive);
			static Aspose::Cells::TextAlignmentType ToTextAlignmentType(Aspose::Cells::System::Int32 type , bool isVertical);
			static Aspose::Cells::System::Int32 ToTextAlignmentValue(Aspose::Cells::TextAlignmentType type , bool isVertical);
			static Aspose::Cells::OperatorType ToCF12OperatorType(Aspose::Cells::System::Byte type);
			static Aspose::Cells::System::Int32 ToCF12OperatorType(Aspose::Cells::OperatorType type);
			static Aspose::Cells::IconSetType ToIconSetType(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 ToIconSetTypeIntValue(Aspose::Cells::IconSetType type);
			static Aspose::Cells::Drawing::ShapePathType ToMsoPathType(Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Int32 ToMsoPathTypeIntValue(Aspose::Cells::Drawing::ShapePathType type);
			static Aspose::Cells::Drawing::PathFillMode ToPathFillMode(intrusive_ptr<Aspose::Cells::System::String> mode);
			static intrusive_ptr<Aspose::Cells::System::String> ToPathFillModeString(Aspose::Cells::Drawing::PathFillMode mode);
			 EnumHelper();
		public:
			virtual ~EnumHelper();
	};

}

}
