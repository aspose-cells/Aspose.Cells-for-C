#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Represents look in type.
			/// </summary>
	enum LookInType 

	{

			/// <summary>
			/// If the cell contains a formula, find it from formula.
			/// Else find object from the formula.
			/// </summary>
			LookInType_Formulas ,
			/// <summary>
			/// Only find object from the formatted values.
			/// </summary>
			LookInType_Values ,
			/// <summary>
			/// Only find object from the values of cells which do not contains formula.
			/// </summary>
			LookInType_ValuesExcludeFormulaCell ,
			/// <summary>
			/// Only find object from the comments.
			/// </summary>
			LookInType_Comments ,
			/// <summary>
			/// Only find object from formulas.
			/// </summary>
			LookInType_OnlyFormulas ,
			/// <summary>
			/// Only find object from the original values.
			/// </summary>
			LookInType_OriginalValues ,
	};


}

}
