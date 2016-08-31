#pragma once
#include "System/Byte.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Single.h"
//#include "System/TimeSpan.h"
#include "System/DateTime.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#define STATIC_CALCFINANCE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CalcFinance : public Aspose::Cells::System::Object
	{
	protected:

			static Aspose::Cells::System::Double FindDepr(Aspose::Cells::System::Double countPeriod , Aspose::Cells::System::Double depr , Aspose::Cells::System::Double availDepr , Aspose::Cells::System::Double period);
	private:

			void Init_Vars();
			static Aspose::Cells::System::Double CalDate(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity);
			static Aspose::Cells::System::Double Power(Aspose::Cells::System::Double x , Aspose::Cells::System::Double y);
			static Aspose::Cells::System::Double Power(Aspose::Cells::System::Double a , Aspose::Cells::System::Int32 n);
			static Aspose::Cells::System::Double NPV(Aspose::Cells::System::Double rate , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> values);
			static Aspose::Cells::System::Double Date360Us(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , bool type1);
			static Aspose::Cells::System::Double Date360Eu(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity);
			static Aspose::Cells::System::Double Date360(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity);
			static Aspose::Cells::System::Double Date365(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity);
			static bool IsLastDayOfFebruary(intrusive_ptr<Aspose::Cells::System::DateTime> date);
			static bool IsLastDayOfMonth(intrusive_ptr<Aspose::Cells::System::DateTime> date);
			static Aspose::Cells::System::Int32 GetMonthLastDay(Aspose::Cells::System::Int32 year , Aspose::Cells::System::Int32 month);
			static Aspose::Cells::System::Double GetActualCoupDays(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Int32 frequency);
			static intrusive_ptr<Aspose::Cells::System::DateTime> GetNCD(intrusive_ptr<Aspose::Cells::System::DateTime> start , intrusive_ptr<Aspose::Cells::System::DateTime> end , Aspose::Cells::System::Int32 num , Aspose::Cells::System::Int32 basis , Aspose::Cells::System::Double acc , bool lastMonth);
			static intrusive_ptr<Aspose::Cells::System::DateTime> ChangeDate(intrusive_ptr<Aspose::Cells::System::DateTime> start , Aspose::Cells::System::Int32 num , Aspose::Cells::System::Int32 basis , bool checkLast);
			static Aspose::Cells::System::Double DaysBetween(intrusive_ptr<Aspose::Cells::System::DateTime> issue , intrusive_ptr<Aspose::Cells::System::DateTime> sett , Aspose::Cells::System::Byte position , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double GetParamB(intrusive_ptr<Aspose::Cells::System::DateTime> issue , intrusive_ptr<Aspose::Cells::System::DateTime> settl , Aspose::Cells::System::Int32 basis);
			static bool IsLessOrEqualInYear(intrusive_ptr<Aspose::Cells::System::DateTime> start , intrusive_ptr<Aspose::Cells::System::DateTime> end);
			static bool IsBisestile(intrusive_ptr<Aspose::Cells::System::DateTime> start , intrusive_ptr<Aspose::Cells::System::DateTime> end);
			static bool IsFeb29(intrusive_ptr<Aspose::Cells::System::DateTime> start , intrusive_ptr<Aspose::Cells::System::DateTime> end);
			static bool IsLeapYear(Aspose::Cells::System::Double year);
			static Aspose::Cells::System::Double DaysInYear(intrusive_ptr<Aspose::Cells::System::DateTime> date , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::DateTime> GetFix29February(intrusive_ptr<Aspose::Cells::System::DateTime> date , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double GetDaysBetweenNotNeg(intrusive_ptr<Aspose::Cells::System::DateTime> start , intrusive_ptr<Aspose::Cells::System::DateTime> end , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Int32 GetCoupNumber(intrusive_ptr<Aspose::Cells::System::DateTime> start , intrusive_ptr<Aspose::Cells::System::DateTime> end , Aspose::Cells::System::Int32 num , Aspose::Cells::System::Int32 basis , bool isWholeNumber);
			static Aspose::Cells::System::Double GetDaysBetweenNotNegWithHack(intrusive_ptr<Aspose::Cells::System::DateTime> start , intrusive_ptr<Aspose::Cells::System::DateTime> end , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double GetDaysBetweenNotNegPsaHack(intrusive_ptr<Aspose::Cells::System::DateTime> start , intrusive_ptr<Aspose::Cells::System::DateTime> end);
			static Aspose::Cells::System::Double GetDeprCoeff(Aspose::Cells::System::Double assetLife);
			static Aspose::Cells::System::Double GetRound(Aspose::Cells::System::Double num);
			static bool IsEuqal(Aspose::Cells::System::Double x , Aspose::Cells::System::Double y);
			static Aspose::Cells::System::Double FindDegrcDepr(Aspose::Cells::System::Double countPeriod , Aspose::Cells::System::Double depr , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double cost , Aspose::Cells::System::Double assetLife , Aspose::Cells::System::Double period , Aspose::Cells::System::Double salvage);
	public:

			static Aspose::Cells::System::Double TBILLEQ(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double discount);
			static Aspose::Cells::System::Double TBILLPRICE(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double discount);
			static Aspose::Cells::System::Double TBILLYIELD(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double par);
			static Aspose::Cells::System::Double CUMIPMT(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pv , Aspose::Cells::System::Int32 start_period , Aspose::Cells::System::Int32 end_period , Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Double ISPMT(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double per , Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pv);
			static Aspose::Cells::System::Double CUMPRINC(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pv , Aspose::Cells::System::Int32 start_period , Aspose::Cells::System::Int32 end_period , Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Double PMT(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pv , Aspose::Cells::System::Double fv , Aspose::Cells::System::Double type);
			static Aspose::Cells::System::Double PPMT(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double per , Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pv , Aspose::Cells::System::Double fv , Aspose::Cells::System::Double type);
			static Aspose::Cells::System::Double IPMT(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double per , Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pv , Aspose::Cells::System::Double fv , Aspose::Cells::System::Double type);
			static Aspose::Cells::System::Double PV(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pmt , Aspose::Cells::System::Double fv , Aspose::Cells::System::Double type);
			static Aspose::Cells::System::Double FV(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pmt , Aspose::Cells::System::Double pv , Aspose::Cells::System::Double type);
			static Aspose::Cells::System::Double DB(Aspose::Cells::System::Double cost , Aspose::Cells::System::Double salvage , Aspose::Cells::System::Double life , Aspose::Cells::System::Double period , Aspose::Cells::System::Double month);
			static Aspose::Cells::System::Double DDB(Aspose::Cells::System::Double cost , Aspose::Cells::System::Double salvage , Aspose::Cells::System::Double life , Aspose::Cells::System::Double period , Aspose::Cells::System::Double factor);
			static Aspose::Cells::System::Double VDB(Aspose::Cells::System::Double cost , Aspose::Cells::System::Double salvage , Aspose::Cells::System::Double life , Aspose::Cells::System::Double sPeriod , Aspose::Cells::System::Double ePeriod , Aspose::Cells::System::Double factor , bool noSwitch);
			static Aspose::Cells::System::Double NPER(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double pmt , Aspose::Cells::System::Double pv , Aspose::Cells::System::Double fv , Aspose::Cells::System::Double type);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Rate(Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pmt , Aspose::Cells::System::Double pv , Aspose::Cells::System::Double fv , Aspose::Cells::System::Double type , Aspose::Cells::System::Double x0);
			static Aspose::Cells::System::Double COUPDAYBS(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double COUPDAYS(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double COUPDAYSNC(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::DateTime> GetNextCouponDate(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::DateTime> GetPreviousCouponDate(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double COUPNUM(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ACCRINT(intrusive_ptr<Aspose::Cells::System::DateTime> issue , intrusive_ptr<Aspose::Cells::System::DateTime> firstInterest , intrusive_ptr<Aspose::Cells::System::DateTime> settlement , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double par , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double ACCRINTM(intrusive_ptr<Aspose::Cells::System::DateTime> issue , intrusive_ptr<Aspose::Cells::System::DateTime> settlement , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double par , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double DISC(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double pr , Aspose::Cells::System::Double redemption , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double INTRATE(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double investment , Aspose::Cells::System::Double redemption , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double PRICEDISC(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double discount , Aspose::Cells::System::Double redemption , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double RECEIVED(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double investment , Aspose::Cells::System::Double discount , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double YIELDDISC(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double pr , Aspose::Cells::System::Double redemption , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double CalDuration(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double coupon , Aspose::Cells::System::Double yld , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis , bool isMDuration);
			static Aspose::Cells::System::Double PRICE(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double yld , Aspose::Cells::System::Double redemption , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> YIELD(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double pr , Aspose::Cells::System::Double redemption , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double PRICEMAT(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , intrusive_ptr<Aspose::Cells::System::DateTime> issue , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double yld , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double YIELDMAT(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , intrusive_ptr<Aspose::Cells::System::DateTime> issue , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double pr , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double ODDFPRICE(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , intrusive_ptr<Aspose::Cells::System::DateTime> issue , intrusive_ptr<Aspose::Cells::System::DateTime> firstCoupon , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double yld , Aspose::Cells::System::Double redemption , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double OddLFun(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , intrusive_ptr<Aspose::Cells::System::DateTime> lastInterest , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double yld , Aspose::Cells::System::Double redemption , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis , bool isLprice);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> AMORDEGRC(Aspose::Cells::System::Double cost , intrusive_ptr<Aspose::Cells::System::DateTime> datePurchased , intrusive_ptr<Aspose::Cells::System::DateTime> firstPeriod , Aspose::Cells::System::Double salvage , Aspose::Cells::System::Double period , Aspose::Cells::System::Double rate , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> AMORLINC(Aspose::Cells::System::Double cost , intrusive_ptr<Aspose::Cells::System::DateTime> datePurchased , intrusive_ptr<Aspose::Cells::System::DateTime> firstPeriod , Aspose::Cells::System::Double salvage , Aspose::Cells::System::Double period , Aspose::Cells::System::Double rate , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> MIRR(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> values , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , Aspose::Cells::System::Double frate , Aspose::Cells::System::Double rrate);
			 CalcFinance();
		public:
			virtual ~CalcFinance();
	};

}

}

}
