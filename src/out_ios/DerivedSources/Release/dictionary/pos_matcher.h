#ifndef MOZC_DICTIONARY_POS_MATCHER_H_
#define MOZC_DICTIONARY_POS_MATCHER_H_
#include "./base/port.h"
namespace mozc {
class POSMatcher {
 public:
  struct Range {
    const uint16 lower;
    const uint16 upper;
  };
  // Functional "^(助詞|助動詞|動詞,非自立|名詞,非自立|形容詞,非自立|動詞,接尾|名詞,接尾|形容詞,接尾)"
  inline uint16 GetFunctionalId() const {
    return rule_id_table_[0];
  }
  inline bool IsFunctional(uint16 id) const {
    for (const Range *range = range_table_[0];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // Unknown "名詞,サ変接続"
  inline uint16 GetUnknownId() const {
    return rule_id_table_[1];
  }
  inline bool IsUnknown(uint16 id) const {
    for (const Range *range = range_table_[1];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // FirstName "名詞,固有名詞,人名,名"
  inline uint16 GetFirstNameId() const {
    return rule_id_table_[2];
  }
  inline bool IsFirstName(uint16 id) const {
    for (const Range *range = range_table_[2];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // LastName "名詞,固有名詞,人名,姓"
  inline uint16 GetLastNameId() const {
    return rule_id_table_[3];
  }
  inline bool IsLastName(uint16 id) const {
    for (const Range *range = range_table_[3];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // Number "名詞,数,アラビア数字"
  inline uint16 GetNumberId() const {
    return rule_id_table_[4];
  }
  inline bool IsNumber(uint16 id) const {
    for (const Range *range = range_table_[4];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // KanjiNumber "名詞,数,漢数字"
  inline uint16 GetKanjiNumberId() const {
    return rule_id_table_[5];
  }
  inline bool IsKanjiNumber(uint16 id) const {
    for (const Range *range = range_table_[5];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // WeakCompoundPrefix "^(接頭詞,名詞接続|接頭詞,丁寧連用形接続|フィラー)"
  inline uint16 GetWeakCompoundPrefixId() const {
    return rule_id_table_[6];
  }
  inline bool IsWeakCompoundPrefix(uint16 id) const {
    for (const Range *range = range_table_[6];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // AcceptableParticleAtBeginOfSegment "^助詞,*,*,*,*,*,(が|で|と|に|にて|の|へ|より|も|と|から|は|や)$"
  inline uint16 GetAcceptableParticleAtBeginOfSegmentId() const {
    return rule_id_table_[7];
  }
  inline bool IsAcceptableParticleAtBeginOfSegment(uint16 id) const {
    for (const Range *range = range_table_[7];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // JapanesePunctuations "記号,(句点|読点)"
  inline uint16 GetJapanesePunctuationsId() const {
    return rule_id_table_[8];
  }
  inline bool IsJapanesePunctuations(uint16 id) const {
    for (const Range *range = range_table_[8];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // OpenBracket "記号,括弧開"
  inline uint16 GetOpenBracketId() const {
    return rule_id_table_[9];
  }
  inline bool IsOpenBracket(uint16 id) const {
    for (const Range *range = range_table_[9];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // CloseBracket "記号,括弧閉"
  inline uint16 GetCloseBracketId() const {
    return rule_id_table_[10];
  }
  inline bool IsCloseBracket(uint16 id) const {
    for (const Range *range = range_table_[10];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // GeneralSymbol "記号,一般,"
  inline uint16 GetGeneralSymbolId() const {
    return rule_id_table_[11];
  }
  inline bool IsGeneralSymbol(uint16 id) const {
    for (const Range *range = range_table_[11];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // Zipcode "特殊,郵便番号"
  inline uint16 GetZipcodeId() const {
    return rule_id_table_[12];
  }
  inline bool IsZipcode(uint16 id) const {
    for (const Range *range = range_table_[12];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // IsolatedWord "特殊,短縮よみ"
  inline uint16 GetIsolatedWordId() const {
    return rule_id_table_[13];
  }
  inline bool IsIsolatedWord(uint16 id) const {
    for (const Range *range = range_table_[13];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // SuggestOnlyWord "特殊,サジェストのみ"
  inline uint16 GetSuggestOnlyWordId() const {
    return rule_id_table_[14];
  }
  inline bool IsSuggestOnlyWord(uint16 id) const {
    for (const Range *range = range_table_[14];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // ContentWordWithConjugation "^(動詞,自立,*,*,五段|動詞,自立,*,*,一段|形容詞,自立)"
  inline uint16 GetContentWordWithConjugationId() const {
    return rule_id_table_[15];
  }
  inline bool IsContentWordWithConjugation(uint16 id) const {
    for (const Range *range = range_table_[15];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // SuffixWord "^(助詞|助動詞|動詞,非自立|動詞,接尾|形容詞,非自立|形容詞,接尾|動詞,自立,*,*,サ変・スル)"
  inline uint16 GetSuffixWordId() const {
    return rule_id_table_[16];
  }
  inline bool IsSuffixWord(uint16 id) const {
    for (const Range *range = range_table_[16];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // CounterSuffixWord "名詞,接尾,助数詞"
  inline uint16 GetCounterSuffixWordId() const {
    return rule_id_table_[17];
  }
  inline bool IsCounterSuffixWord(uint16 id) const {
    for (const Range *range = range_table_[17];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // UniqueNoun "^名詞,固有名詞"
  inline uint16 GetUniqueNounId() const {
    return rule_id_table_[18];
  }
  inline bool IsUniqueNoun(uint16 id) const {
    for (const Range *range = range_table_[18];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // GeneralNoun "^名詞,一般,*,*,*,*,*$"
  inline uint16 GetGeneralNounId() const {
    return rule_id_table_[19];
  }
  inline bool IsGeneralNoun(uint16 id) const {
    for (const Range *range = range_table_[19];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // ContentNoun "^名詞,(一般|固有名詞|副詞可能|サ変接続),"
  inline uint16 GetContentNounId() const {
    return rule_id_table_[20];
  }
  inline bool IsContentNoun(uint16 id) const {
    for (const Range *range = range_table_[20];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // NounPrefix "^接頭詞,名詞接続,"
  inline uint16 GetNounPrefixId() const {
    return rule_id_table_[21];
  }
  inline bool IsNounPrefix(uint16 id) const {
    for (const Range *range = range_table_[21];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // EOSSymbol "^(記号,(句点|読点|アルファベット|一般|括弧開|括弧閉))|^(名詞,数,(アラビア数字|区切り文字))"
  inline uint16 GetEOSSymbolId() const {
    return rule_id_table_[22];
  }
  inline bool IsEOSSymbol(uint16 id) const {
    for (const Range *range = range_table_[22];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // Adverb "^副詞,"
  inline uint16 GetAdverbId() const {
    return rule_id_table_[23];
  }
  inline bool IsAdverb(uint16 id) const {
    for (const Range *range = range_table_[23];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // AdverbSegmentSuffix "^助詞,*,*,*,*,*,(から|で|と|に|にて|の|へ|を)$"
  inline uint16 GetAdverbSegmentSuffixId() const {
    return rule_id_table_[24];
  }
  inline bool IsAdverbSegmentSuffix(uint16 id) const {
    for (const Range *range = range_table_[24];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // ParallelMarker "^助詞,並立助詞"
  inline uint16 GetParallelMarkerId() const {
    return rule_id_table_[25];
  }
  inline bool IsParallelMarker(uint16 id) const {
    for (const Range *range = range_table_[25];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // MasuSuffix "助動詞,*,*,*,特殊・(マス|タイ)"
  inline uint16 GetMasuSuffixId() const {
    return rule_id_table_[26];
  }
  inline bool IsMasuSuffix(uint16 id) const {
    for (const Range *range = range_table_[26];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // TeSuffix "(助詞,接続助詞,*,*,*,*,て|助動詞,*,*,*,特殊・タ,|動詞,非自立,*,*,一段,*,てる|動詞,非自立,*,*,五段・ワ行促音便,*,ちゃう)"
  inline uint16 GetTeSuffixId() const {
    return rule_id_table_[27];
  }
  inline bool IsTeSuffix(uint16 id) const {
    for (const Range *range = range_table_[27];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // KagyoTaConnectionVerb "^動詞,(非自立|自立),*,*,五段・カ行(促音便|イ音便),連用タ接続"
  inline uint16 GetKagyoTaConnectionVerbId() const {
    return rule_id_table_[28];
  }
  inline bool IsKagyoTaConnectionVerb(uint16 id) const {
    for (const Range *range = range_table_[28];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
  // WagyoRenyoConnectionVerb "^動詞,(非自立|自立),*,*,五段・ワ行促音便,連用形"
  inline uint16 GetWagyoRenyoConnectionVerbId() const {
    return rule_id_table_[29];
  }
  inline bool IsWagyoRenyoConnectionVerb(uint16 id) const {
    for (const Range *range = range_table_[29];
         range->lower != static_cast<uint16>(0xFFFF); ++range) {
      if (id >= range->lower && id <= range->upper) {
        return true;
      }
    }
    return false;
  }
 public:
  POSMatcher(const uint16 *const rule_id_table,
             const Range *const *const range_table)
      : rule_id_table_(rule_id_table),
        range_table_(range_table) {}
 private:
  const uint16 *const rule_id_table_;
  const Range *const *const range_table_;
};
}  // namespace mozc
#endif  // MOZC_DICTIONARY_POS_MATCHER_H_
