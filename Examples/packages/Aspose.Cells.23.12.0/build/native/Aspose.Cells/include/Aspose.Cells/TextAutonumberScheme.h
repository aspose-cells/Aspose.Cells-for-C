// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTS_TEXTAUTONUMBERSCHEME_H
#define ASPOSE_CELLS_DRAWING_TEXTS_TEXTAUTONUMBERSCHEME_H

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {

/// <summary>
/// Represents all automatic number scheme.
/// </summary>
enum class TextAutonumberScheme {
    /// <summary>
    /// </summary>
    None,
    /// <summary>
    /// (a), (b), (c), …
    /// </summary>
    AlphaLcParenBoth,
    /// <summary>
    /// a), b), c), …
    /// </summary>
    AlphaLcParenR,
    /// <summary>
    /// a., b., c., …
    /// </summary>
    AlphaLcPeriod,
    /// <summary>
    /// (A), (B), (C), …
    /// </summary>
    AlphaUcParenBoth,
    /// <summary>
    /// A), B), C), …
    /// </summary>
    AlphaUcParenR,
    /// <summary>
    /// A., B., C., …
    /// </summary>
    AlphaUcPeriod,
    /// <summary>
    /// Bidi Arabic 1 (AraAlpha) with ANSI minus symbol
    /// </summary>
    Arabic1Minus,
    /// <summary>
    /// Bidi Arabic 2 (AraAbjad) with ANSI minus symbol
    /// </summary>
    Arabic2Minus,
    /// <summary>
    /// Dbl-byte Arabic numbers w/ double-byte period
    /// </summary>
    ArabicDbPeriod,
    /// <summary>
    /// Dbl-byte Arabic numbers
    /// </summary>
    ArabicDbPlain,
    /// <summary>
    /// (1), (2), (3), …
    /// </summary>
    ArabicParenBoth,
    /// <summary>
    /// 1), 2), 3), …
    /// </summary>
    ArabicParenR,
    /// <summary>
    /// 1., 2., 3., …
    /// </summary>
    ArabicPeriod,
    /// <summary>
    /// 1, 2, 3, …
    /// </summary>
    ArabicPlain,
    /// <summary>
    /// Dbl-byte circle numbers (1-10 circle[0x2460-], 11-arabic numbers)
    /// </summary>
    CircleNumDbPlain,
    /// <summary>
    /// Wingdings black circle numbers
    /// </summary>
    CircleNumWdBlackPlain,
    /// <summary>
    /// Wingdings white circle numbers (0-10 circle[0x0080-],11- arabic numbers)
    /// </summary>
    CircleNumWdWhitePlain,
    /// <summary>
    /// EA: Simplified Chinese w/ single-byte period
    /// </summary>
    Ea1ChsPeriod,
    /// <summary>
    /// EA: Simplified Chinese (TypeA 1-99, TypeC 100-)
    /// </summary>
    Ea1ChsPlain,
    /// <summary>
    /// EA: Traditional Chinese w/ single-byte period
    /// </summary>
    Ea1ChtPeriod,
    /// <summary>
    /// EA: Traditional Chinese (TypeA 1-19, TypeC 20-)
    /// </summary>
    Ea1ChtPlain,
    /// <summary>
    /// EA: Japanese w/ double-byte period
    /// </summary>
    Ea1JpnChsDbPeriod,
    /// <summary>
    /// EA: Japanese/Korean w/ single-byte period
    /// </summary>
    Ea1JpnKorPeriod,
    /// <summary>
    /// EA: Japanese/Korean (TypeC 1-)
    /// </summary>
    Ea1JpnKorPlain,
    /// <summary>
    /// Bidi Hebrew 2 with ANSI minus symbol
    /// </summary>
    Hebrew2Minus,
    /// <summary>
    /// Hindi alphabet period - consonants
    /// </summary>
    HindiAlpha1Period,
    /// <summary>
    /// Hindi alphabet period - vowels
    /// </summary>
    HindiAlphaPeriod,
    /// <summary>
    /// Hindi numerical parentheses - right
    /// </summary>
    HindiNumParenR,
    /// <summary>
    /// Hindi numerical period
    /// </summary>
    HindiNumPeriod,
    /// <summary>
    /// (i), (ii), (iii), …
    /// </summary>
    RomanLcParenBoth,
    /// <summary>
    /// i), ii), iii), …
    /// </summary>
    RomanLcParenR,
    /// <summary>
    /// i., ii., iii., …
    /// </summary>
    RomanLcPeriod,
    /// <summary>
    /// (I), (II), (III), …
    /// </summary>
    RomanUcParenBoth,
    /// <summary>
    /// I), II), III), …
    /// </summary>
    RomanUcParenR,
    /// <summary>
    /// I., II., III., …
    /// </summary>
    RomanUcPeriod,
    /// <summary>
    /// Thai alphabet parentheses - both
    /// </summary>
    ThaiAlphaParenBoth,
    /// <summary>
    /// Thai alphabet parentheses - right
    /// </summary>
    ThaiAlphaParenR,
    /// <summary>
    /// Thai alphabet period
    /// </summary>
    ThaiAlphaPeriod,
    /// <summary>
    /// Thai numerical parentheses - both
    /// </summary>
    ThaiNumParenBoth,
    /// <summary>
    /// Thai numerical parentheses - right
    /// </summary>
    ThaiNumParenR,
    /// <summary>
    /// Thai numerical period
    /// </summary>
    ThaiNumPeriod,
};

} } } }

#endif
