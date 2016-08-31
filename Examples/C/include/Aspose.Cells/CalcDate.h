#pragma once
//#include "System/CharHelper.h"
//#include "System/Boxing.h"
//#include "System/DayOfWeek.h"
#include "FunctionIndex.h"
//#include "System/Convert.h"
//#include "System/Math.h"
#include "FormulaValueAcceptedType.h"
#include "System/Double.h"
//#include "System/TimeSpan.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/DateTime.h"
//#include "System/Array.h"
//#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
//#include "System/Single.h"
#define STATIC_CALCDATE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CalcDate : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> WeekDay(Aspose::Cells::System::Int32 mode , Aspose::Cells::System::Int32 dayOfWeek);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> WORKDAY(Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 days , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> holidays , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 weekendMask);
			static intrusive_ptr<Aspose::Cells::System::Object> GetHolidays(Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 days , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> param , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static Aspose::Cells::System::Int32 GetWeekendCount(Aspose::Cells::System::Int32 weekendMask);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetWeekendMask(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> param);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetHolidayCount(Aspose::Cells::System::Int32 d1 , Aspose::Cells::System::Int32 d2 , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> param , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 weekendMask);
			static Aspose::Cells::System::Int32 NETWORKDAYS(Aspose::Cells::System::Int32 d1 , Aspose::Cells::System::Int32 d2 , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 weekendMask);
			static Aspose::Cells::System::Int32 Days360(Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , bool isEuro , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static Aspose::Cells::System::Double GetActualDaysInYear(intrusive_ptr<Aspose::Cells::System::DateTime> date1 , intrusive_ptr<Aspose::Cells::System::DateTime> date2);
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcField(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcTmDn(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 nDate , Aspose::Cells::FormulaModel::FormulaValueAcceptedType types);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDAYS360(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDATEDIF(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDAYS(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcWORKDAY(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcWORKDAYINTL(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcNETWORKDAYS(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcNETWORKDAYSINTL(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcYEARFRAC(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arrParam , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 CalcDate();
		public:
			virtual ~CalcDate();
	};

}

}

}
