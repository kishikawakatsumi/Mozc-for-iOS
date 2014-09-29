const uint16 kRuleIdTable[] = {
    42,  // Functional "^(助詞|助動詞|動詞,非自立|名詞,非自立|形容詞,非自立|動詞,接尾|名詞,接尾|形容詞,接尾)"
  1934,  // Unknown "名詞,サ変接続"
  2009,  // FirstName "名詞,固有名詞,人名,名"
  2010,  // LastName "名詞,固有名詞,人名,姓"
  2047,  // Number "名詞,数,アラビア数字"
  2049,  // KanjiNumber "名詞,数,漢数字"
     2,  // WeakCompoundPrefix "^(接頭詞,名詞接続|接頭詞,丁寧連用形接続|フィラー)"
   287,  // AcceptableParticleAtBeginOfSegment "^助詞,*,*,*,*,*,(が|で|と|に|にて|の|へ|より|も|と|から|は|や)$"
  2705,  // JapanesePunctuations "記号,(句点|読点)"
  2707,  // OpenBracket "記号,括弧開"
  2706,  // CloseBracket "記号,括弧閉"
  2704,  // GeneralSymbol "記号,一般,"
  2722,  // Zipcode "特殊,郵便番号"
  2723,  // IsolatedWord "特殊,短縮よみ"
  2724,  // SuggestOnlyWord "特殊,サジェストのみ"
   719,  // ContentWordWithConjugation "^(動詞,自立,*,*,五段|動詞,自立,*,*,一段|形容詞,自立)"
    42,  // SuffixWord "^(助詞|助動詞|動詞,非自立|動詞,接尾|形容詞,非自立|形容詞,接尾|動詞,自立,*,*,サ変・スル)"
  2028,  // CounterSuffixWord "名詞,接尾,助数詞"
  2007,  // UniqueNoun "^名詞,固有名詞"
  1939,  // GeneralNoun "^名詞,一般,*,*,*,*,*$"
  1934,  // ContentNoun "^名詞,(一般|固有名詞|副詞可能|サ変接続),"
  2671,  // NounPrefix "^接頭詞,名詞接続,"
  2047,  // EOSSymbol "^(記号,(句点|読点|アルファベット|一般|括弧開|括弧閉))|^(名詞,数,(アラビア数字|区切り文字))"
    12,  // Adverb "^副詞,"
   287,  // AdverbSegmentSuffix "^助詞,*,*,*,*,*,(から|で|と|に|にて|の|へ|を)$"
   284,  // ParallelMarker "^助詞,並立助詞"
   165,  // MasuSuffix "助動詞,*,*,*,特殊・(マス|タイ)"
   159,  // TeSuffix "(助詞,接続助詞,*,*,*,*,て|助動詞,*,*,*,特殊・タ,|動詞,非自立,*,*,一段,*,てる|動詞,非自立,*,*,五段・ワ行促音便,*,ちゃう)"
   869,  // KagyoTaConnectionVerb "^動詞,(非自立|自立),*,*,五段・カ行(促音便|イ音便),連用タ接続"
   936,  // WagyoRenyoConnectionVerb "^動詞,(非自立|自立),*,*,五段・ワ行促音便,連用形"
};
namespace {
// Functional "^(助詞|助動詞|動詞,非自立|名詞,非自立|形容詞,非自立|動詞,接尾|名詞,接尾|形容詞,接尾)"
const ::mozc::POSMatcher::Range kRangeTable_Functional[] = {
  {   42,  603 },
  { 1083, 1933 },
  { 2019, 2044 },
  { 2058, 2284 },
  { 2554, 2666 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// Unknown "名詞,サ変接続"
const ::mozc::POSMatcher::Range kRangeTable_Unknown[] = {
  { 1934, 1937 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// FirstName "名詞,固有名詞,人名,名"
const ::mozc::POSMatcher::Range kRangeTable_FirstName[] = {
  { 2009, 2009 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// LastName "名詞,固有名詞,人名,姓"
const ::mozc::POSMatcher::Range kRangeTable_LastName[] = {
  { 2010, 2010 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// Number "名詞,数,アラビア数字"
const ::mozc::POSMatcher::Range kRangeTable_Number[] = {
  { 2047, 2047 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// KanjiNumber "名詞,数,漢数字"
const ::mozc::POSMatcher::Range kRangeTable_KanjiNumber[] = {
  { 2049, 2056 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// WeakCompoundPrefix "^(接頭詞,名詞接続|接頭詞,丁寧連用形接続|フィラー)"
const ::mozc::POSMatcher::Range kRangeTable_WeakCompoundPrefix[] = {
  {    2,   11 },
  { 2669, 2669 },
  { 2671, 2700 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// AcceptableParticleAtBeginOfSegment "^助詞,*,*,*,*,*,(が|で|と|に|にて|の|へ|より|も|と|から|は|や)$"
const ::mozc::POSMatcher::Range kRangeTable_AcceptableParticleAtBeginOfSegment[] = {
  {  287,  287 },
  {  290,  290 },
  {  299,  301 },
  {  342,  343 },
  {  346,  346 },
  {  348,  348 },
  {  362,  363 },
  {  376,  376 },
  {  380,  388 },
  {  391,  391 },
  {  400,  400 },
  {  402,  402 },
  {  412,  412 },
  {  431,  431 },
  {  447,  447 },
  {  453,  453 },
  {  469,  469 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// JapanesePunctuations "記号,(句点|読点)"
const ::mozc::POSMatcher::Range kRangeTable_JapanesePunctuations[] = {
  { 2705, 2705 },
  { 2708, 2708 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// OpenBracket "記号,括弧開"
const ::mozc::POSMatcher::Range kRangeTable_OpenBracket[] = {
  { 2707, 2707 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// CloseBracket "記号,括弧閉"
const ::mozc::POSMatcher::Range kRangeTable_CloseBracket[] = {
  { 2706, 2706 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// GeneralSymbol "記号,一般,"
const ::mozc::POSMatcher::Range kRangeTable_GeneralSymbol[] = {
  { 2704, 2704 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// Zipcode "特殊,郵便番号"
const ::mozc::POSMatcher::Range kRangeTable_Zipcode[] = {
  { 2722, 2722 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// IsolatedWord "特殊,短縮よみ"
const ::mozc::POSMatcher::Range kRangeTable_IsolatedWord[] = {
  { 2723, 2723 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// SuggestOnlyWord "特殊,サジェストのみ"
const ::mozc::POSMatcher::Range kRangeTable_SuggestOnlyWord[] = {
  { 2724, 2724 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// ContentWordWithConjugation "^(動詞,自立,*,*,五段|動詞,自立,*,*,一段|形容詞,自立)"
const ::mozc::POSMatcher::Range kRangeTable_ContentWordWithConjugation[] = {
  {  719, 1040 },
  { 2285, 2553 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// SuffixWord "^(助詞|助動詞|動詞,非自立|動詞,接尾|形容詞,非自立|形容詞,接尾|動詞,自立,*,*,サ変・スル)"
const ::mozc::POSMatcher::Range kRangeTable_SuffixWord[] = {
  {   42,  603 },
  {  700,  712 },
  { 1083, 1933 },
  { 2198, 2284 },
  { 2554, 2666 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// CounterSuffixWord "名詞,接尾,助数詞"
const ::mozc::POSMatcher::Range kRangeTable_CounterSuffixWord[] = {
  { 2028, 2028 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// UniqueNoun "^名詞,固有名詞"
const ::mozc::POSMatcher::Range kRangeTable_UniqueNoun[] = {
  { 2007, 2016 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// GeneralNoun "^名詞,一般,*,*,*,*,*$"
const ::mozc::POSMatcher::Range kRangeTable_GeneralNoun[] = {
  { 1939, 1939 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// ContentNoun "^名詞,(一般|固有名詞|副詞可能|サ変接続),"
const ::mozc::POSMatcher::Range kRangeTable_ContentNoun[] = {
  { 1934, 1937 },
  { 1939, 1986 },
  { 1996, 2005 },
  { 2007, 2016 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// NounPrefix "^接頭詞,名詞接続,"
const ::mozc::POSMatcher::Range kRangeTable_NounPrefix[] = {
  { 2671, 2700 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// EOSSymbol "^(記号,(句点|読点|アルファベット|一般|括弧開|括弧閉))|^(名詞,数,(アラビア数字|区切り文字))"
const ::mozc::POSMatcher::Range kRangeTable_EOSSymbol[] = {
  { 2047, 2048 },
  { 2703, 2708 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// Adverb "^副詞,"
const ::mozc::POSMatcher::Range kRangeTable_Adverb[] = {
  {   12,   41 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// AdverbSegmentSuffix "^助詞,*,*,*,*,*,(から|で|と|に|にて|の|へ|を)$"
const ::mozc::POSMatcher::Range kRangeTable_AdverbSegmentSuffix[] = {
  {  287,  287 },
  {  342,  343 },
  {  346,  346 },
  {  362,  363 },
  {  380,  381 },
  {  383,  388 },
  {  392,  392 },
  {  400,  400 },
  {  402,  402 },
  {  412,  412 },
  {  431,  431 },
  {  447,  447 },
  {  469,  469 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// ParallelMarker "^助詞,並立助詞"
const ::mozc::POSMatcher::Range kRangeTable_ParallelMarker[] = {
  {  284,  292 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// MasuSuffix "助動詞,*,*,*,特殊・(マス|タイ)"
const ::mozc::POSMatcher::Range kRangeTable_MasuSuffix[] = {
  {  165,  180 },
  {  237,  280 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// TeSuffix "(助詞,接続助詞,*,*,*,*,て|助動詞,*,*,*,特殊・タ,|動詞,非自立,*,*,一段,*,てる|動詞,非自立,*,*,五段・ワ行促音便,*,ちゃう)"
const ::mozc::POSMatcher::Range kRangeTable_TeSuffix[] = {
  {  159,  164 },
  {  361,  361 },
  { 1117, 1117 },
  { 1148, 1148 },
  { 1179, 1179 },
  { 1210, 1210 },
  { 1241, 1241 },
  { 1272, 1272 },
  { 1303, 1303 },
  { 1334, 1334 },
  { 1364, 1364 },
  { 1857, 1857 },
  { 1867, 1867 },
  { 1878, 1878 },
  { 1890, 1890 },
  { 1901, 1901 },
  { 1912, 1912 },
  { 1924, 1924 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// KagyoTaConnectionVerb "^動詞,(非自立|自立),*,*,五段・カ行(促音便|イ音便),連用タ接続"
const ::mozc::POSMatcher::Range kRangeTable_KagyoTaConnectionVerb[] = {
  {  869,  869 },
  { 1448, 1456 },
  { 1497, 1501 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// WagyoRenyoConnectionVerb "^動詞,(非自立|自立),*,*,五段・ワ行促音便,連用形"
const ::mozc::POSMatcher::Range kRangeTable_WagyoRenyoConnectionVerb[] = {
  {  936,  939 },
  { 1918, 1928 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
}  // namespace
const ::mozc::POSMatcher::Range *const kRangeTables[30] = {
  kRangeTable_Functional,
  kRangeTable_Unknown,
  kRangeTable_FirstName,
  kRangeTable_LastName,
  kRangeTable_Number,
  kRangeTable_KanjiNumber,
  kRangeTable_WeakCompoundPrefix,
  kRangeTable_AcceptableParticleAtBeginOfSegment,
  kRangeTable_JapanesePunctuations,
  kRangeTable_OpenBracket,
  kRangeTable_CloseBracket,
  kRangeTable_GeneralSymbol,
  kRangeTable_Zipcode,
  kRangeTable_IsolatedWord,
  kRangeTable_SuggestOnlyWord,
  kRangeTable_ContentWordWithConjugation,
  kRangeTable_SuffixWord,
  kRangeTable_CounterSuffixWord,
  kRangeTable_UniqueNoun,
  kRangeTable_GeneralNoun,
  kRangeTable_ContentNoun,
  kRangeTable_NounPrefix,
  kRangeTable_EOSSymbol,
  kRangeTable_Adverb,
  kRangeTable_AdverbSegmentSuffix,
  kRangeTable_ParallelMarker,
  kRangeTable_MasuSuffix,
  kRangeTable_TeSuffix,
  kRangeTable_KagyoTaConnectionVerb,
  kRangeTable_WagyoRenyoConnectionVerb,
};
