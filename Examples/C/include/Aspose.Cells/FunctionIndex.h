#pragma once
namespace Aspose {
namespace Cells {
namespace FormulaModel {
	enum FunctionIndex 

	{

			FunctionIndex_COUNT = 0x0000 ,
			FunctionIndex_IF = 0x0001 ,
			FunctionIndex_ISNA = 0x0002 ,
			FunctionIndex_ISERROR = 0x0003 ,
			FunctionIndex_SUM = 0x0004 ,
			FunctionIndex_AVERAGE = 0x0005 ,
			FunctionIndex_MIN = 0x0006 ,
			FunctionIndex_MAX = 0x0007 ,
			FunctionIndex_ROW = 0x0008 ,
			FunctionIndex_COLUMN = 0x0009 ,
			FunctionIndex_NA = 0x000A ,
			FunctionIndex_NPV = 0x000B ,
			FunctionIndex_STDEV = 0x000C ,
			FunctionIndex_DOLLAR = 0x000D ,
			FunctionIndex_FIXED = 0x000E ,
			FunctionIndex_SIN = 0x000F ,
			FunctionIndex_COS = 0x0010 ,
			FunctionIndex_TAN = 0x0011 ,
			FunctionIndex_ATAN = 0x0012 ,
			FunctionIndex_PI = 0x0013 ,
			FunctionIndex_SQRT = 0x0014 ,
			FunctionIndex_EXP = 0x0015 ,
			FunctionIndex_LN = 0x0016 ,
			FunctionIndex_LOG10 = 0x0017 ,
			FunctionIndex_ABS = 0x0018 ,
			FunctionIndex_INT = 0x0019 ,
			FunctionIndex_SIGN = 0x001A ,
			FunctionIndex_ROUND = 0x001B ,
			FunctionIndex_LOOKUP = 0x001C ,
			FunctionIndex_INDEX = 0x001D ,
			FunctionIndex_REPT = 0x001E ,
			FunctionIndex_MID = 0x001F ,
			FunctionIndex_LEN = 0x0020 ,
			FunctionIndex_VALUE = 0x0021 ,
			FunctionIndex_TRUE = 0x0022 ,
			FunctionIndex_FALSE = 0x0023 ,
			FunctionIndex_AND = 0x0024 ,
			FunctionIndex_OR = 0x0025 ,
			FunctionIndex_NOT = 0x0026 ,
			FunctionIndex_MOD = 0x0027 ,
			FunctionIndex_DCOUNT = 0x0028 ,
			FunctionIndex_DSUM = 0x0029 ,
			FunctionIndex_DAVERAGE = 0x002A ,
			FunctionIndex_DMIN = 0x002B ,
			FunctionIndex_DMAX = 0x002C ,
			FunctionIndex_DSTDEV = 0x002D ,
			FunctionIndex_VAR = 0x002E ,
			FunctionIndex_DVAR = 0x002F ,
			FunctionIndex_TEXT = 0x0030 ,
			FunctionIndex_LINEST = 0x0031 ,
			FunctionIndex_TREND = 0x0032 ,
			FunctionIndex_LOGEST = 0x0033 ,
			FunctionIndex_GROWTH = 0x0034 ,
			FunctionIndex_GOTO = 0x0035 ,
			FunctionIndex_HALT = 0x0036 ,
			FunctionIndex_RETURN = 0x0037 ,
			FunctionIndex_PV = 0x0038 ,
			FunctionIndex_FV = 0x0039 ,
			FunctionIndex_NPER = 0x003A ,
			FunctionIndex_PMT = 0x003B ,
			FunctionIndex_RATE = 0x003C ,
			FunctionIndex_MIRR = 0x003D ,
			FunctionIndex_IRR = 0x003E ,
			FunctionIndex_RAND = 0x003F ,
			FunctionIndex_MATCH = 0x0040 ,
			FunctionIndex_DATE = 0x0041 ,
			FunctionIndex_TIME = 0x0042 ,
			FunctionIndex_DAY = 0x0043 ,
			FunctionIndex_MONTH = 0x0044 ,
			FunctionIndex_YEAR = 0x0045 ,
			FunctionIndex_WEEKDAY = 0x0046 ,
			FunctionIndex_HOUR = 0x0047 ,
			FunctionIndex_MINUTE = 0x0048 ,
			FunctionIndex_SECOND = 0x0049 ,
			FunctionIndex_NOW = 0x004A ,
			FunctionIndex_AREAS = 0x004B ,
			FunctionIndex_ROWS = 0x004C ,
			FunctionIndex_COLUMNS = 0x004D ,
			FunctionIndex_OFFSET = 0x004E ,
			FunctionIndex_ABSREF = 0x004F ,
			FunctionIndex_RELREF = 0x0050 ,
			FunctionIndex_ARGUMENT = 0x0051 ,
			FunctionIndex_SEARCH = 0x0052 ,
			FunctionIndex_TRANSPOSE = 0x0053 ,
			FunctionIndex_ERROR = 0x0054 ,
			FunctionIndex_STEP = 0x0055 ,
			FunctionIndex_TYPE = 0x0056 ,
			FunctionIndex_ECHO = 0x0057 ,
			FunctionIndex_SET_NAME = 0x0058 ,
			FunctionIndex_CALLER = 0x0059 ,
			FunctionIndex_DEREF = 0x005A ,
			FunctionIndex_WINDOWS = 0x005B ,
			FunctionIndex_DOCUMENTS = 0x005D ,
			FunctionIndex_ACTIVE_CELL = 0x005E ,
			FunctionIndex_SELECTION = 0x005F ,
			FunctionIndex_RESULT = 0x0060 ,
			FunctionIndex_ATAN2 = 0x0061 ,
			FunctionIndex_ASIN = 0x0062 ,
			FunctionIndex_ACOS = 0x0063 ,
			FunctionIndex_CHOOSE = 0x0064 ,
			FunctionIndex_HLOOKUP = 0x0065 ,
			FunctionIndex_VLOOKUP = 0x0066 ,
			FunctionIndex_LINKS = 0x0067 ,
			FunctionIndex_INPUT = 0x0068 ,
			FunctionIndex_ISREF = 0x0069 ,
			FunctionIndex_GET_FORMULA = 0x006A ,
			FunctionIndex_GET_NAME = 0x006B ,
			FunctionIndex_SET_VALUE = 0x006C ,
			FunctionIndex_LOG = 0x006D ,
			FunctionIndex_EXEC = 0x006E ,
			FunctionIndex_CHAR = 0x006F ,
			FunctionIndex_LOWER = 0x0070 ,
			FunctionIndex_UPPER = 0x0071 ,
			FunctionIndex_PROPER = 0x0072 ,
			FunctionIndex_LEFT = 0x0073 ,
			FunctionIndex_RIGHT = 0x0074 ,
			FunctionIndex_EXACT = 0x0075 ,
			FunctionIndex_TRIM = 0x0076 ,
			FunctionIndex_REPLACE = 0x0077 ,
			FunctionIndex_SUBSTITUTE = 0x0078 ,
			FunctionIndex_CODE = 0x0079 ,
			FunctionIndex_NAMES = 0x007A ,
			FunctionIndex_DIRECTORY = 0x007B ,
			FunctionIndex_FIND = 0x007C ,
			FunctionIndex_CELL = 0x007D ,
			FunctionIndex_ISERR = 0x007E ,
			FunctionIndex_ISTEXT = 0x007F ,
			FunctionIndex_ISNUMBER = 0x0080 ,
			FunctionIndex_ISBLANK = 0x0081 ,
			FunctionIndex_T = 0x0082 ,
			FunctionIndex_N = 0x0083 ,
			FunctionIndex_FOPEN = 0x0084 ,
			FunctionIndex_FCLOSE = 0x0085 ,
			FunctionIndex_FSIZE = 0x0086 ,
			FunctionIndex_FREADLN = 0x0087 ,
			FunctionIndex_FREAD = 0x0088 ,
			FunctionIndex_FWRITELN = 0x0089 ,
			FunctionIndex_FWRITE = 0x008A ,
			FunctionIndex_FPOS = 0x008B ,
			FunctionIndex_DATEVALUE = 0x008C ,
			FunctionIndex_TIMEVALUE = 0x008D ,
			FunctionIndex_SLN = 0x008E ,
			FunctionIndex_SYD = 0x008F ,
			FunctionIndex_DDB = 0x0090 ,
			FunctionIndex_GET_DEF = 0x0091 ,
			FunctionIndex_REFTEXT = 0x0092 ,
			FunctionIndex_TEXTREF = 0x0093 ,
			FunctionIndex_INDIRECT = 0x0094 ,
			FunctionIndex_REGISTER = 0x0095 ,
			FunctionIndex_CALL = 0x0096 ,
			FunctionIndex_ADD_BAR = 0x0097 ,
			FunctionIndex_ADD_MENU = 0x0098 ,
			FunctionIndex_ADD_COMMAND = 0x0099 ,
			FunctionIndex_ENABLE_COMMAND = 0x009A ,
			FunctionIndex_CHECK_COMMAND = 0x009B ,
			FunctionIndex_RENAME_COMMAND = 0x009C ,
			FunctionIndex_SHOW_BAR = 0x009D ,
			FunctionIndex_DELETE_MENU = 0x009E ,
			FunctionIndex_DELETE_COMMAND = 0x009F ,
			FunctionIndex_GET_CHART_ITEM = 0x00A0 ,
			FunctionIndex_DIALOG_BOX = 0x00A1 ,
			FunctionIndex_CLEAN = 0x00A2 ,
			FunctionIndex_MDETERM = 0x00A3 ,
			FunctionIndex_MINVERSE = 0x00A4 ,
			FunctionIndex_MMULT = 0x00A5 ,
			FunctionIndex_FILES = 0x00A6 ,
			FunctionIndex_IPMT = 0x00A7 ,
			FunctionIndex_PPMT = 0x00A8 ,
			FunctionIndex_COUNTA = 0x00A9 ,
			FunctionIndex_CANCEL_KEY = 0x00AA ,
			FunctionIndex_FOR = 0x00AB ,
			FunctionIndex_WHILE = 0x00AC ,
			FunctionIndex_BREAK = 0x00AD ,
			FunctionIndex_NEXT = 0x00AE ,
			FunctionIndex_INITIATE = 0x00AF ,
			FunctionIndex_REQUEST = 0x00B0 ,
			FunctionIndex_POKE = 0x00B1 ,
			FunctionIndex_EXECUTE = 0x00B2 ,
			FunctionIndex_TERMINATE = 0x00B3 ,
			FunctionIndex_RESTART = 0x00B4 ,
			FunctionIndex_HELP = 0x00B5 ,
			FunctionIndex_GET_BAR = 0x00B6 ,
			FunctionIndex_PRODUCT = 0x00B7 ,
			FunctionIndex_FACT = 0x00B8 ,
			FunctionIndex_GET_CELL = 0x00B9 ,
			FunctionIndex_GET_WORKSPACE = 0x00BA ,
			FunctionIndex_GET_WINDOW = 0x00BB ,
			FunctionIndex_GET_DOCUMENT = 0x00BC ,
			FunctionIndex_DPRODUCT = 0x00BD ,
			FunctionIndex_ISNONTEXT = 0x00BE ,
			FunctionIndex_GET_NOTE = 0x00BF ,
			FunctionIndex_NOTE = 0x00C0 ,
			FunctionIndex_STDEVP = 0x00C1 ,
			FunctionIndex_VARP = 0x00C2 ,
			FunctionIndex_DSTDEVP = 0x00C3 ,
			FunctionIndex_DVARP = 0x00C4 ,
			FunctionIndex_TRUNC = 0x00C5 ,
			FunctionIndex_ISLOGICAL = 0x00C6 ,
			FunctionIndex_DCOUNTA = 0x00C7 ,
			FunctionIndex_DELETE_BAR = 0x00C8 ,
			FunctionIndex_UNREGISTER = 0x00C9 ,
			FunctionIndex_USDOLLAR = 0x00CC ,
			FunctionIndex_FINDB = 0x00CD ,
			FunctionIndex_SEARCHB = 0x00CE ,
			FunctionIndex_REPLACEB = 0x00CF ,
			FunctionIndex_LEFTB = 0x00D0 ,
			FunctionIndex_RIGHTB = 0x00D1 ,
			FunctionIndex_MIDB = 0x00D2 ,
			FunctionIndex_LENB = 0x00D3 ,
			FunctionIndex_ROUNDUP = 0x00D4 ,
			FunctionIndex_ROUNDDOWN = 0x00D5 ,
			FunctionIndex_ASC = 0x00D6 ,
			FunctionIndex_WIDECHAR = 0x00D7 ,
			FunctionIndex_RANK = 0x00D8 ,
			FunctionIndex_ADDRESS = 0x00DB ,
			FunctionIndex_DAYS360 = 0x00DC ,
			FunctionIndex_TODAY = 0x00DD ,
			FunctionIndex_VDB = 0x00DE ,
			FunctionIndex_ELSE = 0x00DF ,
			FunctionIndex_ELSE_IF = 0x00E0 ,
			FunctionIndex_END_IF = 0x00E1 ,
			FunctionIndex_FOR_CELL = 0x00E2 ,
			FunctionIndex_MEDIAN = 0x00E3 ,
			FunctionIndex_SUMPRODUCT = 0x00E4 ,
			FunctionIndex_SINH = 0x00E5 ,
			FunctionIndex_COSH = 0x00E6 ,
			FunctionIndex_TANH = 0x00E7 ,
			FunctionIndex_ASINH = 0x00E8 ,
			FunctionIndex_ACOSH = 0x00E9 ,
			FunctionIndex_ATANH = 0x00EA ,
			FunctionIndex_DGET = 0x00EB ,
			FunctionIndex_CREATE_OBJECT = 0x00EC ,
			FunctionIndex_VOLATILE = 0x00ED ,
			FunctionIndex_LAST_ERROR = 0x00EE ,
			FunctionIndex_CUSTOM_UNDO = 0x00EF ,
			FunctionIndex_CUSTOM_REPEAT = 0x00F0 ,
			FunctionIndex_FORMULA_CONVERT = 0x00F1 ,
			FunctionIndex_GET_LINK_INFO = 0x00F2 ,
			FunctionIndex_TEXT_BOX = 0x00F3 ,
			FunctionIndex_INFO = 0x00F4 ,
			FunctionIndex_GROUP = 0x00F5 ,
			FunctionIndex_GET_OBJECT = 0x00F6 ,
			FunctionIndex_DB = 0x00F7 ,
			FunctionIndex_PAUSE = 0x00F8 ,
			FunctionIndex_RESUME = 0x00FB ,
			FunctionIndex_FREQUENCY = 0x00FC ,
			FunctionIndex_ADD_TOOLBAR = 0x00FD ,
			FunctionIndex_DELETE_TOOLBAR = 0x00FE ,
			FunctionIndex_USER_DEFINED = 0x00FF ,
			FunctionIndex_RESET_TOOLBAR = 0x0100 ,
			FunctionIndex_EVALUATE = 0x0101 ,
			FunctionIndex_GET_TOOLBAR = 0x0102 ,
			FunctionIndex_GET_TOOL = 0x0103 ,
			FunctionIndex_SPELLING_CHECK = 0x0104 ,
			FunctionIndex_ERROR_TYPE = 0x0105 ,
			FunctionIndex_APP_TITLE = 0x0106 ,
			FunctionIndex_WINDOW_TITLE = 0x0107 ,
			FunctionIndex_SAVE_TOOLBAR = 0x0108 ,
			FunctionIndex_ENABLE_TOOL = 0x0109 ,
			FunctionIndex_PRESS_TOOL = 0x010A ,
			FunctionIndex_REGISTER_ID = 0x010B ,
			FunctionIndex_GET_WORKBOOK = 0x010C ,
			FunctionIndex_AVEDEV = 0x010D ,
			FunctionIndex_BETADIST = 0x010E ,
			FunctionIndex_GAMMALN = 0x010F ,
			FunctionIndex_BETAINV = 0x0110 ,
			FunctionIndex_BINOMDIST = 0x0111 ,
			FunctionIndex_CHIDIST = 0x0112 ,
			FunctionIndex_CHIINV = 0x0113 ,
			FunctionIndex_COMBIN = 0x0114 ,
			FunctionIndex_CONFIDENCE = 0x0115 ,
			FunctionIndex_CRITBINOM = 0x0116 ,
			FunctionIndex_EVEN = 0x0117 ,
			FunctionIndex_EXPONDIST = 0x0118 ,
			FunctionIndex_FDIST = 0x0119 ,
			FunctionIndex_FINV = 0x011A ,
			FunctionIndex_FISHER = 0x011B ,
			FunctionIndex_FISHERINV = 0x011C ,
			FunctionIndex_FLOOR = 0x011D ,
			FunctionIndex_GAMMADIST = 0x011E ,
			FunctionIndex_GAMMAINV = 0x011F ,
			FunctionIndex_CEILING = 0x0120 ,
			FunctionIndex_HYPGEOMDIST = 0x0121 ,
			FunctionIndex_LOGNORMDIST = 0x0122 ,
			FunctionIndex_LOGINV = 0x0123 ,
			FunctionIndex_NEGBINOMDIST = 0x0124 ,
			FunctionIndex_NORMDIST = 0x0125 ,
			FunctionIndex_NORMSDIST = 0x0126 ,
			FunctionIndex_NORMINV = 0x0127 ,
			FunctionIndex_NORMSINV = 0x0128 ,
			FunctionIndex_STANDARDIZE = 0x0129 ,
			FunctionIndex_ODD = 0x012A ,
			FunctionIndex_PERMUT = 0x012B ,
			FunctionIndex_POISSON = 0x012C ,
			FunctionIndex_TDIST = 0x012D ,
			FunctionIndex_WEIBULL = 0x012E ,
			FunctionIndex_SUMXMY2 = 0x012F ,
			FunctionIndex_SUMX2MY2 = 0x0130 ,
			FunctionIndex_SUMX2PY2 = 0x0131 ,
			FunctionIndex_CHITEST = 0x0132 ,
			FunctionIndex_CORREL = 0x0133 ,
			FunctionIndex_COVAR = 0x0134 ,
			FunctionIndex_FORECAST = 0x0135 ,
			FunctionIndex_FTEST = 0x0136 ,
			FunctionIndex_INTERCEPT = 0x0137 ,
			FunctionIndex_PEARSON = 0x0138 ,
			FunctionIndex_RSQ = 0x0139 ,
			FunctionIndex_STEYX = 0x013A ,
			FunctionIndex_SLOPE = 0x013B ,
			FunctionIndex_TTEST = 0x013C ,
			FunctionIndex_PROB = 0x013D ,
			FunctionIndex_DEVSQ = 0x013E ,
			FunctionIndex_GEOMEAN = 0x013F ,
			FunctionIndex_HARMEAN = 0x0140 ,
			FunctionIndex_SUMSQ = 0x0141 ,
			FunctionIndex_KURT = 0x0142 ,
			FunctionIndex_SKEW = 0x0143 ,
			FunctionIndex_ZTEST = 0x0144 ,
			FunctionIndex_LARGE = 0x0145 ,
			FunctionIndex_SMALL = 0x0146 ,
			FunctionIndex_QUARTILE = 0x0147 ,
			FunctionIndex_PERCENTILE = 0x0148 ,
			FunctionIndex_PERCENTRANK = 0x0149 ,
			FunctionIndex_MODE = 0x014A ,
			FunctionIndex_TRIMMEAN = 0x014B ,
			FunctionIndex_TINV = 0x014C ,
			FunctionIndex_MOVIE_COMMAND = 0x014E ,
			FunctionIndex_GET_MOVIE = 0x014F ,
			FunctionIndex_CONCATENATE = 0x0150 ,
			FunctionIndex_POWER = 0x0151 ,
			FunctionIndex_PIVOT_ADD_DATA = 0x0152 ,
			FunctionIndex_GET_PIVOT_TABLE = 0x0153 ,
			FunctionIndex_GET_PIVOT_FIELD = 0x0154 ,
			FunctionIndex_GET_PIVOT_ITEM = 0x0155 ,
			FunctionIndex_RADIANS = 0x0156 ,
			FunctionIndex_DEGREES = 0x0157 ,
			FunctionIndex_SUBTOTAL = 0x0158 ,
			FunctionIndex_SUMIF = 0x0159 ,
			FunctionIndex_COUNTIF = 0x015A ,
			FunctionIndex_COUNTBLANK = 0x015B ,
			FunctionIndex_SCENARIO_GET = 0x015C ,
			FunctionIndex_OPTIONS_LISTS_GET = 0x015D ,
			FunctionIndex_ISPMT = 0x015E ,
			FunctionIndex_DATEDIF = 0x015F ,
			FunctionIndex_DATESTRING = 0x0160 ,
			FunctionIndex_NUMBERSTRING = 0x0161 ,
			FunctionIndex_ROMAN = 0x0162 ,
			FunctionIndex_OPEN_DIALOG = 0x0163 ,
			FunctionIndex_SAVE_DIALOG = 0x0164 ,
			FunctionIndex_VIEW_GET = 0x0165 ,
			FunctionIndex_GETPIVOTDATA = 0x0166 ,
			FunctionIndex_HYPERLINK = 0x0167 ,
			FunctionIndex_PHONETIC = 0x0168 ,
			FunctionIndex_AVERAGEA = 0x0169 ,
			FunctionIndex_MAXA = 0x016A ,
			FunctionIndex_MINA = 0x016B ,
			FunctionIndex_STDEVPA = 0x016C ,
			FunctionIndex_VARPA = 0x016D ,
			FunctionIndex_STDEVA = 0x016E ,
			FunctionIndex_VARA = 0x016F ,
			FunctionIndex_BAHTTEXT = 0x0170 ,
			FunctionIndex_THAIDAYOFWEEK = 0x0171 ,
			FunctionIndex_THAIDIGIT = 0x0172 ,
			FunctionIndex_THAIMONTHOFYEAR = 0x0173 ,
			FunctionIndex_THAINUMSOUND = 0x0174 ,
			FunctionIndex_THAINUMSTRING = 0x0175 ,
			FunctionIndex_THAISTRINGLENGTH = 0x0176 ,
			FunctionIndex_ISTHAIDIGIT = 0x0177 ,
			FunctionIndex_ROUNDBAHTDOWN = 0x0178 ,
			FunctionIndex_ROUNDBAHTUP = 0x0179 ,
			FunctionIndex_THAIYEAR = 0x017A ,
			FunctionIndex_RTD = 0x017B ,
			FunctionIndex_SPECIAL_BASE_ADDIN = 0x017C ,
			FunctionIndex_CUBEVALUE = 0x017C ,
			FunctionIndex_CUBEMEMBER = 0x017D ,
			FunctionIndex_CUBEMEMBERPROPERTY = 0x017E ,
			FunctionIndex_CUBERANKEDMEMBER = 0x017F ,
			FunctionIndex_HEX2BIN = 0x0180 ,
			FunctionIndex_HEX2DEC = 0x0181 ,
			FunctionIndex_HEX2OCT = 0x0182 ,
			FunctionIndex_DEC2BIN = 0x0183 ,
			FunctionIndex_DEC2HEX = 0x0184 ,
			FunctionIndex_DEC2OCT = 0x0185 ,
			FunctionIndex_OCT2BIN = 0x0186 ,
			FunctionIndex_OCT2HEX = 0x0187 ,
			FunctionIndex_OCT2DEC = 0x0188 ,
			FunctionIndex_BIN2DEC = 0x0189 ,
			FunctionIndex_BIN2OCT = 0x018A ,
			FunctionIndex_BIN2HEX = 0x018B ,
			FunctionIndex_IMSUB = 0x018C ,
			FunctionIndex_IMDIV = 0x018D ,
			FunctionIndex_IMPOWER = 0x018E ,
			FunctionIndex_IMABS = 0x018F ,
			FunctionIndex_IMSQRT = 0x0190 ,
			FunctionIndex_IMLN = 0x0191 ,
			FunctionIndex_IMLOG2 = 0x0192 ,
			FunctionIndex_IMLOG10 = 0x0193 ,
			FunctionIndex_IMSIN = 0x0194 ,
			FunctionIndex_IMCOS = 0x0195 ,
			FunctionIndex_IMEXP = 0x0196 ,
			FunctionIndex_IMARGUMENT = 0x0197 ,
			FunctionIndex_IMCONJUGATE = 0x0198 ,
			FunctionIndex_IMAGINARY = 0x0199 ,
			FunctionIndex_IMREAL = 0x019A ,
			FunctionIndex_COMPLEX = 0x019B ,
			FunctionIndex_IMSUM = 0x019C ,
			FunctionIndex_IMPRODUCT = 0x019D ,
			FunctionIndex_SERIESSUM = 0x019E ,
			FunctionIndex_FACTDOUBLE = 0x019F ,
			FunctionIndex_SQRTPI = 0x01A0 ,
			FunctionIndex_QUOTIENT = 0x01A1 ,
			FunctionIndex_DELTA = 0x01A2 ,
			FunctionIndex_GESTEP = 0x01A3 ,
			FunctionIndex_ISEVEN = 0x01A4 ,
			FunctionIndex_ISODD = 0x01A5 ,
			FunctionIndex_MROUND = 0x01A6 ,
			FunctionIndex_ERF = 0x01A7 ,
			FunctionIndex_ERFC = 0x01A8 ,
			FunctionIndex_BESSELJ = 0x01A9 ,
			FunctionIndex_BESSELK = 0x01AA ,
			FunctionIndex_BESSELY = 0x01AB ,
			FunctionIndex_BESSELI = 0x01AC ,
			FunctionIndex_XIRR = 0x01AD ,
			FunctionIndex_XNPV = 0x01AE ,
			FunctionIndex_PRICEMAT = 0x01AF ,
			FunctionIndex_YIELDMAT = 0x01B0 ,
			FunctionIndex_INTRATE = 0x01B1 ,
			FunctionIndex_RECEIVED = 0x01B2 ,
			FunctionIndex_DISC = 0x01B3 ,
			FunctionIndex_PRICEDISC = 0x01B4 ,
			FunctionIndex_YIELDDISC = 0x01B5 ,
			FunctionIndex_TBILLEQ = 0x01B6 ,
			FunctionIndex_TBILLPRICE = 0x01B7 ,
			FunctionIndex_TBILLYIELD = 0x01B8 ,
			FunctionIndex_PRICE = 0x01B9 ,
			FunctionIndex_YIELD = 0x01BA ,
			FunctionIndex_DOLLARDE = 0x01BB ,
			FunctionIndex_DOLLARFR = 0x01BC ,
			FunctionIndex_NOMINAL = 0x01BD ,
			FunctionIndex_EFFECT = 0x01BE ,
			FunctionIndex_CUMPRINC = 0x01BF ,
			FunctionIndex_CUMIPMT = 0x01C0 ,
			FunctionIndex_EDATE = 0x01C1 ,
			FunctionIndex_EOMONTH = 0x01C2 ,
			FunctionIndex_YEARFRAC = 0x01C3 ,
			FunctionIndex_COUPDAYBS = 0x01C4 ,
			FunctionIndex_COUPDAYS = 0x01C5 ,
			FunctionIndex_COUPDAYSNC = 0x01C6 ,
			FunctionIndex_COUPNCD = 0x01C7 ,
			FunctionIndex_COUPNUM = 0x01C8 ,
			FunctionIndex_COUPPCD = 0x01C9 ,
			FunctionIndex_DURATION = 0x01CA ,
			FunctionIndex_MDURATION = 0x01CB ,
			FunctionIndex_ODDLPRICE = 0x01CC ,
			FunctionIndex_ODDLYIELD = 0x01CD ,
			FunctionIndex_ODDFPRICE = 0x01CE ,
			FunctionIndex_ODDFYIELD = 0x01CF ,
			FunctionIndex_RANDBETWEEN = 0x01D0 ,
			FunctionIndex_WEEKNUM = 0x01D1 ,
			FunctionIndex_AMORDEGRC = 0x01D2 ,
			FunctionIndex_AMORLINC = 0x01D3 ,
			FunctionIndex_CONVERT = 0x01D4 ,
			FunctionIndex_ACCRINT = 0x01D5 ,
			FunctionIndex_ACCRINTM = 0x01D6 ,
			FunctionIndex_WORKDAY = 0x01D7 ,
			FunctionIndex_NETWORKDAYS = 0x01D8 ,
			FunctionIndex_GCD = 0x01D9 ,
			FunctionIndex_MULTINOMIAL = 0x01DA ,
			FunctionIndex_LCM = 0x01DB ,
			FunctionIndex_FVSCHEDULE = 0x01DC ,
			FunctionIndex_CUBEKPIMEMBER = 0x01DD ,
			FunctionIndex_CUBESET = 0x01DE ,
			FunctionIndex_CUBESETCOUNT = 0x01DF ,
			FunctionIndex_IFERROR = 0x01E0 ,
			FunctionIndex_COUNTIFS = 0x01E1 ,
			FunctionIndex_SUMIFS = 0x01E2 ,
			FunctionIndex_AVERAGEIF = 0x01E3 ,
			FunctionIndex_AVERAGEIFS = 0x01E4 ,
			FunctionIndex_SPECIAL_BASE_FUTURE = 0x01E5 ,
			FunctionIndex_DAYS = 0x01E5 ,
			FunctionIndex_WORKDAY_INTL = 0x01E6 ,
			FunctionIndex_NETWORKDAYS_INTL = 0x01E7 ,
			FunctionIndex_AGGREGATE = 0x01E8 ,
			FunctionIndex_IFNA = 0x01E9 ,
			FunctionIndex_BITAND = 0x01EA ,
			FunctionIndex_BITOR = 0x01EB ,
			FunctionIndex_BITXOR = 0x01EC ,
			FunctionIndex_BITLSHIFT = 0x01ED ,
			FunctionIndex_BITRSHIFT = 0x01EE ,
			FunctionIndex_PERCENTILE_INC = 0x01EF ,
			FunctionIndex_PERCENTILE_EXC = 0x01F0 ,
			FunctionIndex_QUARTILE_INC = 0x01F1 ,
			FunctionIndex_QUARTILE_EXC = 0x01F2 ,
			FunctionIndex_NORM_DIST = 0x01F3 ,
			FunctionIndex_NORM_S_DIST = 0x01F4 ,
			FunctionIndex_NORM_INV = 0x01F5 ,
			FunctionIndex_NORM_S_INV = 0x01F6 ,
			FunctionIndex_BETA_DIST = 0x01F7 ,
			FunctionIndex_BETA_INV = 0x01F8 ,
			FunctionIndex_BINOM_DIST = 0x01F9 ,
			FunctionIndex_BINOM_INV = 0x01FA ,
			FunctionIndex_CHISQ_DIST = 0x01FB ,
			FunctionIndex_CHISQ_DIST_RT = 0x01FC ,
			FunctionIndex_CHISQ_INV = 0x01FD ,
			FunctionIndex_CHISQ_INV_RT = 0x01FE ,
			FunctionIndex_CHISQ_TEST = 0x01FF ,
			FunctionIndex_CONFIDENCE_NORM = 0x0200 ,
			FunctionIndex_CONFIDENCE_T = 0x0201 ,
			FunctionIndex_COVARIANCE_P = 0x0202 ,
			FunctionIndex_COVARIANCE_S = 0x0203 ,
			FunctionIndex_F_DIST = 0x0204 ,
			FunctionIndex_F_DIST_RT = 0x0205 ,
			FunctionIndex_F_INV = 0x0206 ,
			FunctionIndex_F_INV_RT = 0x0207 ,
			FunctionIndex_F_TEST = 0x0208 ,
			FunctionIndex_GAMMA_DIST = 0x0209 ,
			FunctionIndex_GAMMA_INV = 0x020A ,
			FunctionIndex_HYPGEOM_DIST = 0x020B ,
			FunctionIndex_LOGNORM_DIST = 0x020C ,
			FunctionIndex_LOGNORM_INV = 0x020D ,
			FunctionIndex_MODE_SNGL = 0x020E ,
			FunctionIndex_MODE_MULT = 0x020F ,
			FunctionIndex_NEGBINOM_DIST = 0x0210 ,
			FunctionIndex_PERCENTRANK_INC = 0x0211 ,
			FunctionIndex_PERCENTRANK_EXC = 0x0212 ,
			FunctionIndex_POISSON_DIST = 0x0213 ,
			FunctionIndex_RANK_AVG = 0x0214 ,
			FunctionIndex_RANK_EQ = 0x0215 ,
			FunctionIndex_T_DIST = 0x0216 ,
			FunctionIndex_T_DIST_2T = 0x0217 ,
			FunctionIndex_T_DIST_RT = 0x0218 ,
			FunctionIndex_T_INV = 0x0219 ,
			FunctionIndex_T_INV_2T = 0x021A ,
			FunctionIndex_T_TEST = 0x021B ,
			FunctionIndex_VAR_P = 0x021C ,
			FunctionIndex_VAR_S = 0x021D ,
			FunctionIndex_WEIBULL_DIST = 0x021E ,
			FunctionIndex_Z_TEST = 0x021F ,
			FunctionIndex_GAMMALN_PRECISE = 0x0220 ,
			FunctionIndex_ISOWEEKNUM = 0x0221 ,
			FunctionIndex_FORMULATEXT = 0x0222 ,
			FunctionIndex_SPECIAL_BASE_END = 0x0223 ,
	};


}

}

}
