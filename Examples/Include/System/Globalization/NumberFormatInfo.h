#ifndef _SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_H_
#define _SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_H_

#include "System/Object.h"
#include "System/IFormatProvider.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#include "System/String.h"
#include "System/Type.h"
#include "System/Globalization/NumberStyles.h"
#include "System/Globalization/DigitShapes.h"
//#include "System/Globalization/CultureInfo.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Globalization {
				class CultureInfo;
				class ASPOSE_CELLS_API NumberFormatInfo : public Object, public IFormatProvider
				{
				private:
					CultureInfo* mCulture;
					bool mIsInvariantCulture;

				public:
					NumberFormatInfo(CultureInfo* culture, bool isInvariantCulture);
					NumberFormatInfo(CultureInfo* cultureData);
					NumberFormatInfo();///@Jack
					virtual ~NumberFormatInfo();
					virtual void add_ref() {
						++ref_count_;
					}
					virtual int release_ref() {
						return --ref_count_;
					}

					bool IsInvariantCulture();
					static intrusive_ptr<NumberFormatInfo> GetInvariantInfo();
					static intrusive_ptr<NumberFormatInfo> GetCurrentInfo();
					static intrusive_ptr<NumberFormatInfo> GetInstance(intrusive_ptr<IFormatProvider> provider);
					StringPtr GetNumberGroupSeparator();
					StringPtr GetNumberDecimalSeparator();
					StringPtr GetCurrencyDecimalSeparator();
					StringPtr GetCurrencyGroupSeparator();
					StringPtr GetCurrencySymbol();
					StringPtr GetPercentSymbol();
					Locale* GetLocale();
					intrusive_ptr<CultureInfo> GetCultureInfo();
					ObjectPtr GetFormat(TypePtr formatType);
					
					////////////////////////////old////////////////////////////
					
				public:				
					Int32 GetCurrencyDecimalDigits() { return currencyDecimalDigits; }
					intrusive_ptr<Array1D<Int32>> GetCurrencyGroupSizes() { return NEW Array1D<Int32>(currencyGroupSizes, 1); }
					Int32 GetCurrencyNegativePattern() { return currencyNegativePattern; }
					Int32 GetCurrencyPositivePattern() { return currencyPositivePattern; }
					StringPtr GetAnsiCurrencySymbol() { return ansiCurrencySymbol; }
					DigitShapes GetDigitSubstitution() { return (DigitShapes)digitSubstitution; }
					bool IsReadOnly() { return isReadOnly; }
					StringPtr GetNaNSymbol() { return nanSymbol; }
					intrusive_ptr<Array1D<String*>> GetNativeDigits();
					StringPtr GetNegativeInfinitySymbol() { return negativeInfinitySymbol; }
					StringPtr GetNegativeSign() { return negativeSign; }
					Int32 GetNumberDecimalDigits() { return numberDecimalDigits; }
					intrusive_ptr<Array1D<Int32>> GetNumberGroupSizes() { return NEW Array1D<Int32>(numberGroupSizes, 1); }
					Int32 GetNumberNegativePattern() { return numberNegativePattern; }
					Int32 GetPercentDecimalDigits() { return percentDecimalDigits; }
					StringPtr GetPercentDecimalSeparator() { return percentDecimalSeparator; }
					StringPtr GetPercentGroupSeparator() { return percentGroupSeparator; }
					intrusive_ptr<Array1D<Int32>> GetPercentGroupSizes() { return NEW Array1D<Int32>(percentGroupSizes, 1); }
					Int32 GetPercentNegativePattern() { return percentNegativePattern; }
					Int32 GetPercentPositivePattern() { return percentPositivePattern; }
					StringPtr GetPerMilleSymbol() { return perMilleSymbol; }
					StringPtr GetPositiveInfinitySymbol() { return positiveInfinitySymbol; }
					StringPtr GetPositiveSign() { return positiveSign; }

					static void ValidateParseStyleInteger(NumberStyles style);
					

				private:
					void InitVars();

				public://internal
					Int32* numberGroupSizes;
					Int32* currencyGroupSizes;
					Int32* percentGroupSizes;
					String** nativeDigits;
					bool isReadOnly;
					StringPtr nanSymbol;
					Char*	szNanSymbol;
					int		lenNanSymbol;
					StringPtr positiveInfinitySymbol;
					Char*	szPositiveInfinitySymbol;
					int		lenPositiveInfinitySymbol;
					StringPtr negativeInfinitySymbol;
					Char*	szNegativeInfinitySymbol;
					int		lenNegativeInfinitySymbol;
					StringPtr percentDecimalSeparator;
					StringPtr percentGroupSeparator;
					StringPtr percentSymbol;
					StringPtr perMilleSymbol;
					StringPtr positiveSign;
					Char*	szPositiveSign;
					int		lenPositiveSign;
					StringPtr negativeSign;
					Char*	szNegativeSign;
					int		lenNegativeSign;
					StringPtr numberDecimalSeparator;
					Char*	szNumberDecimalSeparator;
					int		lenNumberDecimalSeparator;
					StringPtr numberGroupSeparator;
					StringPtr currencyGroupSeparator;
					StringPtr currencyDecimalSeparator;
					StringPtr currencySymbol;
					StringPtr ansiCurrencySymbol;
					Int32 numberDecimalDigits;
					Int32 currencyDecimalDigits;
					Int32 currencyPositivePattern;
					Int32 currencyNegativePattern;
					Int32 numberNegativePattern;
					Int32 digitSubstitution;
					Int32 percentPositivePattern;
					Int32 percentNegativePattern;
					Int32 percentDecimalDigits;
					
				private:
					Int32 m_dataItem;
					bool _validForParseAsNumber;
					bool _validForParseAsCurrency;
					bool m_isInvariant;
					bool m_useUserOverride;
					
				};
				typedef intrusive_ptr<NumberFormatInfo> NumberFormatInfoPtr;
			}
		}
	}
}
#endif//_SYSTEM_GLOBALIZATION_NUMBERFORMATINFO_H_