#ifndef _SYSTEM_GLOBALIZATION_LANGCODEC_H_
#define _SYSTEM_GLOBALIZATION_LANGCODEC_H_

#include "System/Object.h"
#include "System/Int16.h"
#include "System/Globalization/CultureInfo.h"
#include "System/Int32.h"
#include "System/Globalization/CountryCodeC.h"
#include "System/String.h"
#include "System/Globalization/NumberFormatInfo.h"
#include "System/Globalization/DateTimeFormatInfo.h"

namespace Aspose {
namespace Cells {
namespace System {
namespace Globalization {
	class ASPOSE_CELLS_API LangCodeC : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static bool IsLatin(Aspose::Cells::System::Int32 code);
			static bool IsEa(Aspose::Cells::System::Int32 code);
			static bool IsSameLanguage(Aspose::Cells::System::Int16 codeExpected , Aspose::Cells::System::Int16 codeActual);
			static Aspose::Cells::System::StringPtr GetCultureName(Aspose::Cells::System::Int16 code);
			static Aspose::Cells::System::Int16 GetLangCode(Aspose::Cells::System::Globalization::CountryCodeC country);
			static Aspose::Cells::System::Globalization::CountryCodeC GetCountryCode(Aspose::Cells::System::Int16 code);
			static Aspose::Cells::System::Globalization::CultureInfoPtr GetCultureInfo(Aspose::Cells::System::Int16 code);
			static Aspose::Cells::System::Int16 GetLangCode(Aspose::Cells::System::StringPtr cultureName);
			static Aspose::Cells::System::Int16 GetLangCode(Aspose::Cells::System::StringPtr lang , Aspose::Cells::System::StringPtr country , Aspose::Cells::System::StringPtr variant);
			 static const Aspose::Cells::System::Int16 Undefined;
			 static const Aspose::Cells::System::Int16 LocaleDate;
			 static const Aspose::Cells::System::Int16 LocaleTime;
			 static const Aspose::Cells::System::Int16 af;
			 static const Aspose::Cells::System::Int16 af_ZA;
			 static const Aspose::Cells::System::Int16 ar;
			 static const Aspose::Cells::System::Int16 ar_AE;
			 static const Aspose::Cells::System::Int16 ar_BH;
			 static const Aspose::Cells::System::Int16 ar_DZ;
			 static const Aspose::Cells::System::Int16 ar_EG;
			 static const Aspose::Cells::System::Int16 ar_IQ;
			 static const Aspose::Cells::System::Int16 ar_JO;
			 static const Aspose::Cells::System::Int16 ar_KW;
			 static const Aspose::Cells::System::Int16 ar_LB;
			 static const Aspose::Cells::System::Int16 ar_LY;
			 static const Aspose::Cells::System::Int16 ar_MA;
			 static const Aspose::Cells::System::Int16 ar_OM;
			 static const Aspose::Cells::System::Int16 ar_QA;
			 static const Aspose::Cells::System::Int16 ar_SA;
			 static const Aspose::Cells::System::Int16 ar_SY;
			 static const Aspose::Cells::System::Int16 ar_TN;
			 static const Aspose::Cells::System::Int16 ar_YE;
			 static const Aspose::Cells::System::Int16 az;
			 static const Aspose::Cells::System::Int16 az_AZ_Cyrl;
			 static const Aspose::Cells::System::Int16 az_AZ_Latn;
			 static const Aspose::Cells::System::Int16 be;
			 static const Aspose::Cells::System::Int16 be_BY;
			 static const Aspose::Cells::System::Int16 bg;
			 static const Aspose::Cells::System::Int16 bg_BG;
			 static const Aspose::Cells::System::Int16 ca;
			 static const Aspose::Cells::System::Int16 ca_ES;
			 static const Aspose::Cells::System::Int16 cs;
			 static const Aspose::Cells::System::Int16 cs_CZ;
			 static const Aspose::Cells::System::Int16 da;
			 static const Aspose::Cells::System::Int16 da_DK;
			 static const Aspose::Cells::System::Int16 de;
			 static const Aspose::Cells::System::Int16 de_AT;
			 static const Aspose::Cells::System::Int16 de_CH;
			 static const Aspose::Cells::System::Int16 de_DE;
			 static const Aspose::Cells::System::Int16 de_LI;
			 static const Aspose::Cells::System::Int16 de_LU;
			 static const Aspose::Cells::System::Int16 div;
			 static const Aspose::Cells::System::Int16 div_MV;
			 static const Aspose::Cells::System::Int16 el;
			 static const Aspose::Cells::System::Int16 el_GR;
			 static const Aspose::Cells::System::Int16 en;
			 static const Aspose::Cells::System::Int16 en_AU;
			 static const Aspose::Cells::System::Int16 en_BZ;
			 static const Aspose::Cells::System::Int16 en_CA;
			 static const Aspose::Cells::System::Int16 en_CB;
			 static const Aspose::Cells::System::Int16 en_GB;
			 static const Aspose::Cells::System::Int16 en_IE;
			 static const Aspose::Cells::System::Int16 en_IN;
			 static const Aspose::Cells::System::Int16 en_JM;
			 static const Aspose::Cells::System::Int16 en_NZ;
			 static const Aspose::Cells::System::Int16 en_PH;
			 static const Aspose::Cells::System::Int16 en_TT;
			 static const Aspose::Cells::System::Int16 en_US;
			 static const Aspose::Cells::System::Int16 en_ZA;
			 static const Aspose::Cells::System::Int16 en_ZW;
			 static const Aspose::Cells::System::Int16 en_SG;
			 static const Aspose::Cells::System::Int16 es;
			 static const Aspose::Cells::System::Int16 es_AR;
			 static const Aspose::Cells::System::Int16 es_BO;
			 static const Aspose::Cells::System::Int16 es_CL;
			 static const Aspose::Cells::System::Int16 es_CO;
			 static const Aspose::Cells::System::Int16 es_CR;
			 static const Aspose::Cells::System::Int16 es_DO;
			 static const Aspose::Cells::System::Int16 es_EC;
			 static const Aspose::Cells::System::Int16 es_ES;
			 static const Aspose::Cells::System::Int16 es_GT;
			 static const Aspose::Cells::System::Int16 es_HN;
			 static const Aspose::Cells::System::Int16 es_MX;
			 static const Aspose::Cells::System::Int16 es_NI;
			 static const Aspose::Cells::System::Int16 es_PA;
			 static const Aspose::Cells::System::Int16 es_PE;
			 static const Aspose::Cells::System::Int16 es_PR;
			 static const Aspose::Cells::System::Int16 es_PY;
			 static const Aspose::Cells::System::Int16 es_SV;
			 static const Aspose::Cells::System::Int16 es_UY;
			 static const Aspose::Cells::System::Int16 es_VE;
			 static const Aspose::Cells::System::Int16 et;
			 static const Aspose::Cells::System::Int16 et_EE;
			 static const Aspose::Cells::System::Int16 eu;
			 static const Aspose::Cells::System::Int16 eu_ES;
			 static const Aspose::Cells::System::Int16 fo;
			 static const Aspose::Cells::System::Int16 fo_FO;
			 static const Aspose::Cells::System::Int16 fa;
			 static const Aspose::Cells::System::Int16 fa_IR;
			 static const Aspose::Cells::System::Int16 fi;
			 static const Aspose::Cells::System::Int16 fi_FI;
			 static const Aspose::Cells::System::Int16 fr;
			 static const Aspose::Cells::System::Int16 fr_BE;
			 static const Aspose::Cells::System::Int16 fr_CA;
			 static const Aspose::Cells::System::Int16 fr_FR;
			 static const Aspose::Cells::System::Int16 fr_LU;
			 static const Aspose::Cells::System::Int16 fr_MC;
			 static const Aspose::Cells::System::Int16 fr_CH;
			 static const Aspose::Cells::System::Int16 gl;
			 static const Aspose::Cells::System::Int16 gl_ES;
			 static const Aspose::Cells::System::Int16 gu;
			 static const Aspose::Cells::System::Int16 gu_IN;
			 static const Aspose::Cells::System::Int16 he;
			 static const Aspose::Cells::System::Int16 he_IL;
			 static const Aspose::Cells::System::Int16 hi;
			 static const Aspose::Cells::System::Int16 hi_IN;
			 static const Aspose::Cells::System::Int16 hr;
			 static const Aspose::Cells::System::Int16 hr_HR;
			 static const Aspose::Cells::System::Int16 hu;
			 static const Aspose::Cells::System::Int16 hu_HU;
			 static const Aspose::Cells::System::Int16 hy;
			 static const Aspose::Cells::System::Int16 hy_AM;
			 static const Aspose::Cells::System::Int16 id;
			 static const Aspose::Cells::System::Int16 id_ID;
			 static const Aspose::Cells::System::Int16 is_;
			 static const Aspose::Cells::System::Int16 is_IS;
			 static const Aspose::Cells::System::Int16 it;
			 static const Aspose::Cells::System::Int16 it_CH;
			 static const Aspose::Cells::System::Int16 it_IT;
			 static const Aspose::Cells::System::Int16 ja;
			 static const Aspose::Cells::System::Int16 ja_JP;
			 static const Aspose::Cells::System::Int16 ka;
			 static const Aspose::Cells::System::Int16 ka_GE;
			 static const Aspose::Cells::System::Int16 kk;
			 static const Aspose::Cells::System::Int16 kk_KZ;
			 static const Aspose::Cells::System::Int16 kn;
			 static const Aspose::Cells::System::Int16 kn_IN;
			 static const Aspose::Cells::System::Int16 ko;
			 static const Aspose::Cells::System::Int16 ko_KR;
			 static const Aspose::Cells::System::Int16 kok;
			 static const Aspose::Cells::System::Int16 kok_IN;
			 static const Aspose::Cells::System::Int16 ky;
			 static const Aspose::Cells::System::Int16 ky_KG;
			 static const Aspose::Cells::System::Int16 lv;
			 static const Aspose::Cells::System::Int16 lv_LV;
			 static const Aspose::Cells::System::Int16 lt;
			 static const Aspose::Cells::System::Int16 lt_LT;
			 static const Aspose::Cells::System::Int16 mk;
			 static const Aspose::Cells::System::Int16 mk_MK;
			 static const Aspose::Cells::System::Int16 ms;
			 static const Aspose::Cells::System::Int16 ms_BN;
			 static const Aspose::Cells::System::Int16 ms_MY;
			 static const Aspose::Cells::System::Int16 mr;
			 static const Aspose::Cells::System::Int16 mr_IN;
			 static const Aspose::Cells::System::Int16 mn;
			 static const Aspose::Cells::System::Int16 mn_MN;
			 static const Aspose::Cells::System::Int16 no;
			 static const Aspose::Cells::System::Int16 nb_NO;
			 static const Aspose::Cells::System::Int16 nl;
			 static const Aspose::Cells::System::Int16 nl_BE;
			 static const Aspose::Cells::System::Int16 nl_NL;
			 static const Aspose::Cells::System::Int16 nn_NO;
			 static const Aspose::Cells::System::Int16 pa;
			 static const Aspose::Cells::System::Int16 pa_IN;
			 static const Aspose::Cells::System::Int16 pl;
			 static const Aspose::Cells::System::Int16 pl_PL;
			 static const Aspose::Cells::System::Int16 pt;
			 static const Aspose::Cells::System::Int16 pt_BR;
			 static const Aspose::Cells::System::Int16 pt_PT;
			 static const Aspose::Cells::System::Int16 ro;
			 static const Aspose::Cells::System::Int16 ro_RO;
			 static const Aspose::Cells::System::Int16 ru;
			 static const Aspose::Cells::System::Int16 ru_RU;
			 static const Aspose::Cells::System::Int16 sa;
			 static const Aspose::Cells::System::Int16 sa_IN;
			 static const Aspose::Cells::System::Int16 sk;
			 static const Aspose::Cells::System::Int16 sk_SK;
			 static const Aspose::Cells::System::Int16 sl;
			 static const Aspose::Cells::System::Int16 sl_SI;
			 static const Aspose::Cells::System::Int16 sq;
			 static const Aspose::Cells::System::Int16 sq_AL;
			 static const Aspose::Cells::System::Int16 sr_SP_Cyrl;
			 static const Aspose::Cells::System::Int16 sr_SP_Latn;
			 static const Aspose::Cells::System::Int16 sv;
			 static const Aspose::Cells::System::Int16 sv_FI;
			 static const Aspose::Cells::System::Int16 sv_SE;
			 static const Aspose::Cells::System::Int16 sw;
			 static const Aspose::Cells::System::Int16 sw_KE;
			 static const Aspose::Cells::System::Int16 syr;
			 static const Aspose::Cells::System::Int16 syr_SY;
			 static const Aspose::Cells::System::Int16 ta;
			 static const Aspose::Cells::System::Int16 ta_IN;
			 static const Aspose::Cells::System::Int16 te;
			 static const Aspose::Cells::System::Int16 te_IN;
			 static const Aspose::Cells::System::Int16 th;
			 static const Aspose::Cells::System::Int16 th_TH;
			 static const Aspose::Cells::System::Int16 tr;
			 static const Aspose::Cells::System::Int16 tr_TR;
			 static const Aspose::Cells::System::Int16 tt;
			 static const Aspose::Cells::System::Int16 tt_RU;
			 static const Aspose::Cells::System::Int16 uk;
			 static const Aspose::Cells::System::Int16 uk_UA;
			 static const Aspose::Cells::System::Int16 ur;
			 static const Aspose::Cells::System::Int16 ur_PK;
			 static const Aspose::Cells::System::Int16 uz;
			 static const Aspose::Cells::System::Int16 uz_UZ_Cyrl;
			 static const Aspose::Cells::System::Int16 uz_UZ_Latn;
			 static const Aspose::Cells::System::Int16 vi;
			 static const Aspose::Cells::System::Int16 vi_VN;
			 static const Aspose::Cells::System::Int16 zh_CN;
			 static const Aspose::Cells::System::Int16 zh_CHS;
			 static const Aspose::Cells::System::Int16 zh_CHT;
			 static const Aspose::Cells::System::Int16 zh_HK;
			 static const Aspose::Cells::System::Int16 zh_MO;
			 static const Aspose::Cells::System::Int16 zh_SG;
			 static const Aspose::Cells::System::Int16 zh_TW;
			 static const Aspose::Cells::System::Int16 zu;
			 LangCodeC();
			 virtual ~LangCodeC();
	};

}

}

}

}
#endif;