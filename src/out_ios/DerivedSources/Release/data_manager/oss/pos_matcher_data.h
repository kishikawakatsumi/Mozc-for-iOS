const uint16 kRuleIdTable[] = {
    27,  // Functional "^(助詞|助動詞|動詞,非自立|名詞,非自立|形容詞,非自立|動詞,接尾|名詞,接尾|形容詞,接尾)"
  1765,  // Unknown "名詞,サ変接続"
  1845,  // FirstName "名詞,固有名詞,人名,名"
  1846,  // LastName "名詞,固有名詞,人名,姓"
  1952,  // Number "名詞,数,アラビア数字"
  1954,  // KanjiNumber "名詞,数,漢数字"
     2,  // WeakCompoundPrefix "^(接頭詞,名詞接続|接頭詞,丁寧連用形接続|フィラー)"
   262,  // AcceptableParticleAtBeginOfSegment "^助詞,*,*,*,*,*,(が|で|と|に|にて|の|へ|より|も|と|から|は|や)$"
  2555,  // JapanesePunctuations "記号,(句点|読点)"
  2557,  // OpenBracket "記号,括弧開"
  2556,  // CloseBracket "記号,括弧閉"
  2554,  // GeneralSymbol "記号,一般,"
  2572,  // Zipcode "特殊,郵便番号"
  2573,  // IsolatedWord "特殊,短縮よみ"
  2574,  // SuggestOnlyWord "特殊,サジェストのみ"
   620,  // ContentWordWithConjugation "^(動詞,自立,*,*,五段|動詞,自立,*,*,一段|形容詞,自立)"
    27,  // SuffixWord "^(助詞|助動詞|動詞,非自立|動詞,接尾|形容詞,非自立|形容詞,接尾|動詞,自立,*,*,サ変・スル)"
  1923,  // CounterSuffixWord "名詞,接尾,助数詞"
  1843,  // UniqueNoun "^名詞,固有名詞"
  1773,  // GeneralNoun "^名詞,一般,*,*,*,*,*$"
  1765,  // ContentNoun "^名詞,(一般|固有名詞|副詞可能|サ変接続),"
  2518,  // NounPrefix "^接頭詞,名詞接続,"
  1952,  // EOSSymbol "^(記号,(句点|読点|アルファベット|一般|括弧開|括弧閉))|^(名詞,数,(アラビア数字|区切り文字))"
    12,  // Adverb "^副詞,"
   262,  // AdverbSegmentSuffix "^助詞,*,*,*,*,*,(から|で|と|に|にて|の|へ|を)$"
   259,  // ParallelMarker "^助詞,並立助詞"
   140,  // MasuSuffix "助動詞,*,*,*,特殊・(マス|タイ)"
   134,  // TeSuffix "(助詞,接続助詞,*,*,*,*,て|助動詞,*,*,*,特殊・タ,|動詞,非自立,*,*,一段,*,てる|動詞,非自立,*,*,五段・ワ行促音便,*,ちゃう)"
   700,  // KagyoTaConnectionVerb "^動詞,(非自立|自立),*,*,五段・カ行(促音便|イ音便),連用タ接続"
   815,  // WagyoRenyoConnectionVerb "^動詞,(非自立|自立),*,*,五段・ワ行促音便,連用形"
};
namespace {
// Functional "^(助詞|助動詞|動詞,非自立|名詞,非自立|形容詞,非自立|動詞,接尾|名詞,接尾|形容詞,接尾)"
const ::mozc::POSMatcher::Range kRangeTable_Functional[] = {
  {   27,  558 },
  {  845, 1764 },
  { 1859, 1949 },
  { 1965, 2301 },
  { 2392, 2511 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// Unknown "名詞,サ変接続"
const ::mozc::POSMatcher::Range kRangeTable_Unknown[] = {
  { 1765, 1771 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// FirstName "名詞,固有名詞,人名,名"
const ::mozc::POSMatcher::Range kRangeTable_FirstName[] = {
  { 1845, 1845 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// LastName "名詞,固有名詞,人名,姓"
const ::mozc::POSMatcher::Range kRangeTable_LastName[] = {
  { 1846, 1846 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// Number "名詞,数,アラビア数字"
const ::mozc::POSMatcher::Range kRangeTable_Number[] = {
  { 1952, 1952 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// KanjiNumber "名詞,数,漢数字"
const ::mozc::POSMatcher::Range kRangeTable_KanjiNumber[] = {
  { 1954, 1963 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// WeakCompoundPrefix "^(接頭詞,名詞接続|接頭詞,丁寧連用形接続|フィラー)"
const ::mozc::POSMatcher::Range kRangeTable_WeakCompoundPrefix[] = {
  {    2,   11 },
  { 2516, 2516 },
  { 2518, 2550 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// AcceptableParticleAtBeginOfSegment "^助詞,*,*,*,*,*,(が|で|と|に|にて|の|へ|より|も|と|から|は|や)$"
const ::mozc::POSMatcher::Range kRangeTable_AcceptableParticleAtBeginOfSegment[] = {
  {  262,  262 },
  {  265,  265 },
  {  274,  276 },
  {  317,  318 },
  {  321,  321 },
  {  323,  323 },
  {  337,  338 },
  {  351,  351 },
  {  355,  363 },
  {  366,  366 },
  {  375,  375 },
  {  377,  377 },
  {  387,  387 },
  {  402,  402 },
  {  405,  405 },
  {  409,  409 },
  {  415,  415 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// JapanesePunctuations "記号,(句点|読点)"
const ::mozc::POSMatcher::Range kRangeTable_JapanesePunctuations[] = {
  { 2555, 2555 },
  { 2558, 2558 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// OpenBracket "記号,括弧開"
const ::mozc::POSMatcher::Range kRangeTable_OpenBracket[] = {
  { 2557, 2557 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// CloseBracket "記号,括弧閉"
const ::mozc::POSMatcher::Range kRangeTable_CloseBracket[] = {
  { 2556, 2556 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// GeneralSymbol "記号,一般,"
const ::mozc::POSMatcher::Range kRangeTable_GeneralSymbol[] = {
  { 2554, 2554 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// Zipcode "特殊,郵便番号"
const ::mozc::POSMatcher::Range kRangeTable_Zipcode[] = {
  { 2572, 2572 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// IsolatedWord "特殊,短縮よみ"
const ::mozc::POSMatcher::Range kRangeTable_IsolatedWord[] = {
  { 2573, 2573 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// SuggestOnlyWord "特殊,サジェストのみ"
const ::mozc::POSMatcher::Range kRangeTable_SuggestOnlyWord[] = {
  { 2574, 2574 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// ContentWordWithConjugation "^(動詞,自立,*,*,五段|動詞,自立,*,*,一段|形容詞,自立)"
const ::mozc::POSMatcher::Range kRangeTable_ContentWordWithConjugation[] = {
  {  620,  829 },
  { 2302, 2391 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// SuffixWord "^(助詞|助動詞|動詞,非自立|動詞,接尾|形容詞,非自立|形容詞,接尾|動詞,自立,*,*,サ変・スル)"
const ::mozc::POSMatcher::Range kRangeTable_SuffixWord[] = {
  {   27,  558 },
  {  601,  613 },
  {  845, 1764 },
  { 2106, 2301 },
  { 2392, 2511 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// CounterSuffixWord "名詞,接尾,助数詞"
const ::mozc::POSMatcher::Range kRangeTable_CounterSuffixWord[] = {
  { 1923, 1927 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// UniqueNoun "^名詞,固有名詞"
const ::mozc::POSMatcher::Range kRangeTable_UniqueNoun[] = {
  { 1843, 1852 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// GeneralNoun "^名詞,一般,*,*,*,*,*$"
const ::mozc::POSMatcher::Range kRangeTable_GeneralNoun[] = {
  { 1773, 1773 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// ContentNoun "^名詞,(一般|固有名詞|副詞可能|サ変接続),"
const ::mozc::POSMatcher::Range kRangeTable_ContentNoun[] = {
  { 1765, 1771 },
  { 1773, 1822 },
  { 1832, 1841 },
  { 1843, 1852 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// NounPrefix "^接頭詞,名詞接続,"
const ::mozc::POSMatcher::Range kRangeTable_NounPrefix[] = {
  { 2518, 2550 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// EOSSymbol "^(記号,(句点|読点|アルファベット|一般|括弧開|括弧閉))|^(名詞,数,(アラビア数字|区切り文字))"
const ::mozc::POSMatcher::Range kRangeTable_EOSSymbol[] = {
  { 1952, 1953 },
  { 2553, 2558 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// Adverb "^副詞,"
const ::mozc::POSMatcher::Range kRangeTable_Adverb[] = {
  {   12,   26 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// AdverbSegmentSuffix "^助詞,*,*,*,*,*,(から|で|と|に|にて|の|へ|を)$"
const ::mozc::POSMatcher::Range kRangeTable_AdverbSegmentSuffix[] = {
  {  262,  262 },
  {  317,  318 },
  {  321,  321 },
  {  337,  338 },
  {  355,  356 },
  {  358,  363 },
  {  367,  367 },
  {  375,  375 },
  {  377,  377 },
  {  387,  387 },
  {  402,  402 },
  {  405,  405 },
  {  415,  415 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// ParallelMarker "^助詞,並立助詞"
const ::mozc::POSMatcher::Range kRangeTable_ParallelMarker[] = {
  {  259,  267 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// MasuSuffix "助動詞,*,*,*,特殊・(マス|タイ)"
const ::mozc::POSMatcher::Range kRangeTable_MasuSuffix[] = {
  {  140,  155 },
  {  212,  255 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// TeSuffix "(助詞,接続助詞,*,*,*,*,て|助動詞,*,*,*,特殊・タ,|動詞,非自立,*,*,一段,*,てる|動詞,非自立,*,*,五段・ワ行促音便,*,ちゃう)"
const ::mozc::POSMatcher::Range kRangeTable_TeSuffix[] = {
  {  134,  139 },
  {  336,  336 },
  {  879,  879 },
  {  914,  914 },
  {  949,  949 },
  {  984,  984 },
  { 1019, 1019 },
  { 1054, 1054 },
  { 1089, 1089 },
  { 1124, 1124 },
  { 1158, 1158 },
  { 1688, 1688 },
  { 1698, 1698 },
  { 1709, 1709 },
  { 1721, 1721 },
  { 1732, 1732 },
  { 1743, 1743 },
  { 1755, 1755 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// KagyoTaConnectionVerb "^動詞,(非自立|自立),*,*,五段・カ行(促音便|イ音便),連用タ接続"
const ::mozc::POSMatcher::Range kRangeTable_KagyoTaConnectionVerb[] = {
  {  700,  700 },
  {  709,  709 },
  { 1264, 1275 },
  { 1319, 1323 },
  { static_cast<uint16>(0xFFFF), static_cast<uint16>(0xFFFF) },
};
// WagyoRenyoConnectionVerb "^動詞,(非自立|自立),*,*,五段・ワ行促音便,連用形"
const ::mozc::POSMatcher::Range kRangeTable_WagyoRenyoConnectionVerb[] = {
  {  815,  818 },
  { 1749, 1759 },
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
