#ifndef _SYSTEM_DATETIMERESULT_H_
#define _SYSTEM_DATETIMERESULT_H_

#include "System/Object.h"
#include "System/ParseFlags.h"
#include "System/TimeSpan.h"
#include "System/DateTime.h"
#include "System/ParseFailureKind.h"

using namespace Aspose::Cells::System::Globalization;

namespace Aspose {
	namespace Cells {
		namespace System {
			class DateTimeOffset {
			public:
				DateTimeOffset() {}
				DateTimeOffset(int32_t offset, TimeSpan& ts) {}
				DateTimeOffset(DateTime& dt) {}
				DateTimeOffset(DateTime& dt, TimeSpan& ts) {}
				void setOffset(int32_t offset) {}
				void setTimeSpan(TimeSpan& ts) {}
				int64_t getOffsetInTicks() { return 0; }
			};

			class DoParseResultBean : public Object
			{
			private:
				bool _success;
				DateTime _result;
				DateTimeOffset _dto;
				StringPtr _formatString;
				bool _incompleteFormat;
				bool _longYear;

			public:
				bool isSuccess() { return _success; }
				void setSuccess(bool success) { _success = success; }
				DateTime& getResult() { return _result; }
				void setResult(DateTime& result) { _result = result; }
				DateTimeOffset& getDto() { return _dto; }
				void setDto(DateTimeOffset& dto) { _dto = dto; }
				bool isIncompleteFormat() { return _incompleteFormat; }
				void setIncompleteFormat(bool incompleteFormat) { _incompleteFormat = incompleteFormat; }
				bool isLongYear() { return _longYear; }
				void setLongYear(bool longYear) { _longYear = longYear; }
				StringPtr getFormatString() { return _formatString; }
				void setFormatString(StringPtr formatString) { _formatString = formatString; }
			};
			typedef intrusive_ptr<DoParseResultBean> DoParseResultBeanPtr;

			class CoreParseResultBean : public Object
			{
			private:
				DateTime	_result;
				bool		_success;
				StringPtr	_formatString;
				DateTimeOffset _dto;

			public:
				void setResult(DateTime& result) { _result = result; }
				void setDto(DateTimeOffset& dto) { _dto = dto; }
				bool isSuccess() { return _success; }
				void setSuccess(bool success) { _success = success; }
				DateTime& getResult() { return _result; }
				DateTimeOffset& getDto() { return _dto; }
				StringPtr getFormatString() { return _formatString; }
				void setFormatString(StringPtr formatString) { _formatString = formatString; }
			};
			typedef intrusive_ptr<CoreParseResultBean> CoreParseResultBeanPtr;

			class ParseTokenResult : public Object
			{
			private:
				bool	_succes;
				int32_t	_num_parsed;
				int32_t	_ampm;
				int32_t	_number;

			public:
				ParseTokenResult() : _succes(false), _num_parsed(0), _ampm(0), _number(0) {}

				bool isSucces() { return _succes; }
				void setSucces(bool succes) { _succes = succes; }
				int32_t getNum_parsed() { return _num_parsed; }
				void setNum_parsed(int32_t numParsed) { _num_parsed = numParsed; }
				int32_t getAmpm() { return _ampm; }
				void setAmpm(int32_t ampm) { _ampm = ampm; }
				void setNumber(int32_t i) { _number = i; }
				int32_t getNumber() { return _number; }
			};
			typedef intrusive_ptr<ParseTokenResult> ParseTokenResultPtr;
		}
	}
}
#endif//_SYSTEM_DATETIMERESULT_H_