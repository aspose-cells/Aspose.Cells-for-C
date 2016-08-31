#pragma once
#include "System/Byte.h"
//#include "System/Single.h"
//#include "System/Boxing.h"
#include "System/Object.h"
#include "System/DateTime.h"
//#include "System/TimeSpan.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_FINANCE() 


namespace Aspose {
namespace Cells {
	class Finance : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::DateTime> GetNCD(intrusive_ptr<Aspose::Cells::System::DateTime> start , intrusive_ptr<Aspose::Cells::System::DateTime> end , Aspose::Cells::System::Int32 num , Aspose::Cells::System::Int32 basis , Aspose::Cells::System::Double acc , bool lastMonth);
			static intrusive_ptr<Aspose::Cells::System::DateTime> GetPreviousCouponDate(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double GetActualCoupDays(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Int32 frequency);
			static intrusive_ptr<Aspose::Cells::System::DateTime> GetNextCouponDate(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Int32 GetMonthLastDay(Aspose::Cells::System::Int32 year , Aspose::Cells::System::Int32 month);
			static intrusive_ptr<Aspose::Cells::System::DateTime> ChangeDate(intrusive_ptr<Aspose::Cells::System::DateTime> start , Aspose::Cells::System::Int32 num , Aspose::Cells::System::Int32 basis , bool isLastDayOfMonth);
			static intrusive_ptr<Aspose::Cells::System::DateTime> Change2Date(intrusive_ptr<Aspose::Cells::System::DateTime> start , Aspose::Cells::System::Int32 num , Aspose::Cells::System::Int32 basis , bool isLastDayOfMonth);
	protected:

			static Aspose::Cells::System::Double GetRound(Aspose::Cells::System::Double num);
			static Aspose::Cells::System::Double CalDate(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity);
			static Aspose::Cells::System::Double Date360(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity);
			static Aspose::Cells::System::Double Date365(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity);
			static Aspose::Cells::System::Double Date360Us(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Byte type);
			static Aspose::Cells::System::Double Date360Eu(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity);
			static bool IsLastDayOfFebruary(intrusive_ptr<Aspose::Cells::System::DateTime> date);
			static bool IsLastDayOfMonth(intrusive_ptr<Aspose::Cells::System::DateTime> date);
			static Aspose::Cells::System::Double DaysInYear(intrusive_ptr<Aspose::Cells::System::DateTime> date , Aspose::Cells::System::Int32 basis);
			static bool IsLeapYear(Aspose::Cells::System::Double year);
			static Aspose::Cells::System::Double B(intrusive_ptr<Aspose::Cells::System::DateTime> issue , intrusive_ptr<Aspose::Cells::System::DateTime> settl , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double DaysBetween(intrusive_ptr<Aspose::Cells::System::DateTime> issue , intrusive_ptr<Aspose::Cells::System::DateTime> sett , Aspose::Cells::System::Byte position , Aspose::Cells::System::Int32 basis);
			static bool IsLessOrEqualInYear(intrusive_ptr<Aspose::Cells::System::DateTime> start , intrusive_ptr<Aspose::Cells::System::DateTime> end);
			static bool IsBisestile(intrusive_ptr<Aspose::Cells::System::DateTime> start , intrusive_ptr<Aspose::Cells::System::DateTime> end);
			static bool IsFeb29(intrusive_ptr<Aspose::Cells::System::DateTime> start , intrusive_ptr<Aspose::Cells::System::DateTime> end);
			static intrusive_ptr<Aspose::Cells::System::DateTime> GetFix29February(intrusive_ptr<Aspose::Cells::System::DateTime> date , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double GetDeprCoeff(Aspose::Cells::System::Double assetLife);
			static bool IsEuqal(Aspose::Cells::System::Double x , Aspose::Cells::System::Double y);
			static Aspose::Cells::System::Double FindDegrcDepr(Aspose::Cells::System::Double countPeriod , Aspose::Cells::System::Double depr , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double cost , Aspose::Cells::System::Double assetLife , Aspose::Cells::System::Double period , Aspose::Cells::System::Double salvage);
			static Aspose::Cells::System::Double FindDepr(Aspose::Cells::System::Double countPeriod , Aspose::Cells::System::Double depr , Aspose::Cells::System::Double availDepr , Aspose::Cells::System::Double period);
			static Aspose::Cells::System::Double FindRoot(Aspose::Cells::System::Double countPeriod , Aspose::Cells::System::Double depr , Aspose::Cells::System::Double availDepr , Aspose::Cells::System::Double period);
			static Aspose::Cells::System::Double GetDaysBetweenNotNeg(intrusive_ptr<Aspose::Cells::System::DateTime> start , intrusive_ptr<Aspose::Cells::System::DateTime> end , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double GetDaysBetweenNotNegPsaHack(intrusive_ptr<Aspose::Cells::System::DateTime> start , intrusive_ptr<Aspose::Cells::System::DateTime> end);
			static Aspose::Cells::System::Double GetDaysBetweenNotNegWithHack(intrusive_ptr<Aspose::Cells::System::DateTime> start , intrusive_ptr<Aspose::Cells::System::DateTime> end , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double GetCoupNumber(intrusive_ptr<Aspose::Cells::System::DateTime> start , intrusive_ptr<Aspose::Cells::System::DateTime> end , Aspose::Cells::System::Int32 num , Aspose::Cells::System::Int32 basis , bool isWholeNumber);
			static intrusive_ptr<Aspose::Cells::System::Object> OddLFun(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , intrusive_ptr<Aspose::Cells::System::DateTime> lastInterest , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double yld , Aspose::Cells::System::Int32 redemption , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis , bool isLprice);
			static Aspose::Cells::System::Double CalDuration(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double coupon , Aspose::Cells::System::Double yld , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis , bool isMDuration);
	public:

			static intrusive_ptr<Aspose::Cells::System::Object> ACCRINT(intrusive_ptr<Aspose::Cells::System::DateTime> issue , intrusive_ptr<Aspose::Cells::System::DateTime> firstInterest , intrusive_ptr<Aspose::Cells::System::DateTime> settlement , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double par , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> ACCRINTM(intrusive_ptr<Aspose::Cells::System::DateTime> issue , intrusive_ptr<Aspose::Cells::System::DateTime> settlement , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double par , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> AMORDEGRC(Aspose::Cells::System::Double cost , intrusive_ptr<Aspose::Cells::System::DateTime> datePurchased , intrusive_ptr<Aspose::Cells::System::DateTime> firstPeriod , Aspose::Cells::System::Double salvage , Aspose::Cells::System::Double period , Aspose::Cells::System::Double rate , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> AMORLINC(Aspose::Cells::System::Double cost , intrusive_ptr<Aspose::Cells::System::DateTime> datePurchased , intrusive_ptr<Aspose::Cells::System::DateTime> firstPeriod , Aspose::Cells::System::Double salvage , Aspose::Cells::System::Double period , Aspose::Cells::System::Double rate , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> DURATION(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double coupon , Aspose::Cells::System::Double yld , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> MDURATION(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double coupon , Aspose::Cells::System::Double yld , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> COUPDAYBS(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> COUPDAYS(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> COUPDAYSNC(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> ODDLPRICE(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , intrusive_ptr<Aspose::Cells::System::DateTime> lastInterest , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double yld , Aspose::Cells::System::Int32 redemption , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> ODDLYIELD(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , intrusive_ptr<Aspose::Cells::System::DateTime> lastInterest , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double pr , Aspose::Cells::System::Int32 redemption , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> PRICEDISC(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double discount , Aspose::Cells::System::Double redemption , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> TBILLEQ(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double discount);
			static intrusive_ptr<Aspose::Cells::System::Object> TBILLPRICE(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double discount);
			static intrusive_ptr<Aspose::Cells::System::Object> TBILLYIELD(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double par);
			static intrusive_ptr<Aspose::Cells::System::Object> YIELDDISC(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double pr , Aspose::Cells::System::Double redemption , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> ODDFYIELD(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , intrusive_ptr<Aspose::Cells::System::DateTime> issue , intrusive_ptr<Aspose::Cells::System::DateTime> firstCoupon , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double pr , Aspose::Cells::System::Int32 redemption , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> ODDFPRICE(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , intrusive_ptr<Aspose::Cells::System::DateTime> issue , intrusive_ptr<Aspose::Cells::System::DateTime> firstCoupon , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double yld , Aspose::Cells::System::Int32 redemption , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> D_PRICE(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double yld , Aspose::Cells::System::Int32 redemption , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis , bool isPriceFunction);
			static intrusive_ptr<Aspose::Cells::System::Object> PRICE(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double yld , Aspose::Cells::System::Int32 redemption , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis , bool isPriceFunction);
			static intrusive_ptr<Aspose::Cells::System::Object> PRICEMAT(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , intrusive_ptr<Aspose::Cells::System::DateTime> issue , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double yld , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> YIELDMAT(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , intrusive_ptr<Aspose::Cells::System::DateTime> issue , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double pr , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> YIELD(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double rate , Aspose::Cells::System::Double pr , Aspose::Cells::System::Double redemption , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> COUPPCD(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> COUPNCD(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> COUPNUM(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Int32 frequency , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double FV(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pmt , Aspose::Cells::System::Double pv , Aspose::Cells::System::Double type);
			static Aspose::Cells::System::Double PV(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pmt , Aspose::Cells::System::Double fv , Aspose::Cells::System::Double type);
			static Aspose::Cells::System::Double PPMT(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double per , Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pv , Aspose::Cells::System::Double fv , Aspose::Cells::System::Double type);
			static Aspose::Cells::System::Double IPMT(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double per , Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pv , Aspose::Cells::System::Double fv , Aspose::Cells::System::Double type);
			static Aspose::Cells::System::Double PMT(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pv , Aspose::Cells::System::Double fv , Aspose::Cells::System::Double type);
			static intrusive_ptr<Aspose::Cells::System::Object> Rate(Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pmt , Aspose::Cells::System::Double pv , Aspose::Cells::System::Double fv , Aspose::Cells::System::Double type , Aspose::Cells::System::Double x0);
			static Aspose::Cells::System::Double NPER(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double pmt , Aspose::Cells::System::Double pv , Aspose::Cells::System::Double fv , Aspose::Cells::System::Double type);
			static intrusive_ptr<Aspose::Cells::System::Object> DB(Aspose::Cells::System::Double cost , Aspose::Cells::System::Double salvage , Aspose::Cells::System::Double life , Aspose::Cells::System::Double period , Aspose::Cells::System::Double month);
			static intrusive_ptr<Aspose::Cells::System::Object> DDB(Aspose::Cells::System::Double cost , Aspose::Cells::System::Double salvage , Aspose::Cells::System::Double life , Aspose::Cells::System::Double period , Aspose::Cells::System::Double factor);
			static Aspose::Cells::System::Double VDB(Aspose::Cells::System::Double cost , Aspose::Cells::System::Double salvage , Aspose::Cells::System::Double life , Aspose::Cells::System::Double sPeriod , Aspose::Cells::System::Double ePeriod , Aspose::Cells::System::Double factor , bool noSwitch);
			static intrusive_ptr<Aspose::Cells::System::Object> DISC(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double pr , Aspose::Cells::System::Double redemption , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> DOLLARDE(Aspose::Cells::System::Double dollar , Aspose::Cells::System::Double fraction);
			static intrusive_ptr<Aspose::Cells::System::Object> DOLLARFR(Aspose::Cells::System::Double dollar , Aspose::Cells::System::Double fraction);
			static intrusive_ptr<Aspose::Cells::System::Object> EFFECT(Aspose::Cells::System::Double rate , Aspose::Cells::System::Int32 npery);
			static intrusive_ptr<Aspose::Cells::System::Object> NOMINAL(Aspose::Cells::System::Double rate , Aspose::Cells::System::Int32 npery);
			static intrusive_ptr<Aspose::Cells::System::Object> INTRATE(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double investment , Aspose::Cells::System::Double redemption , Aspose::Cells::System::Int32 basis);
			static intrusive_ptr<Aspose::Cells::System::Object> RECEIVED(intrusive_ptr<Aspose::Cells::System::DateTime> settlement , intrusive_ptr<Aspose::Cells::System::DateTime> maturity , Aspose::Cells::System::Double investment , Aspose::Cells::System::Double discount , Aspose::Cells::System::Int32 basis);
			static Aspose::Cells::System::Double FVSCHEDULE(Aspose::Cells::System::Double principal , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> schedule);
			static Aspose::Cells::System::Double CUMIPMT(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pv , Aspose::Cells::System::Double start_period , Aspose::Cells::System::Double end_period , Aspose::Cells::System::Double type);
			static Aspose::Cells::System::Double ISPMT(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double per , Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pv);
			static intrusive_ptr<Aspose::Cells::System::Object> CUMPRINC(Aspose::Cells::System::Double rate , Aspose::Cells::System::Double nper , Aspose::Cells::System::Double pv , Aspose::Cells::System::Double start_period , Aspose::Cells::System::Double end_period , Aspose::Cells::System::Double type);
			static Aspose::Cells::System::Double NPV(Aspose::Cells::System::Double rate , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> values);
			static intrusive_ptr<Aspose::Cells::System::Object> MIRR(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> values , Aspose::Cells::System::Double frate , Aspose::Cells::System::Double rrate);
			 Finance();
		public:
			virtual ~Finance();
	};

}

}
