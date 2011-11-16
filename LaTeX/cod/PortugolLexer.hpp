#ifndef INC_PortugolLexer_hpp_
#define INC_PortugolLexer_hpp_

#include <antlr/config.hpp>
/* $ANTLR 2.7.7 (2006-11-01): "lexer.g" -> "PortugolLexer.hpp"$ */
#include <antlr/CommonToken.hpp>
#include <antlr/InputBuffer.hpp>
#include <antlr/BitSet.hpp>
#include "PortugolTokenTypes.hpp"

// Include correct superclass header with a header statement for example:
// header "post_include_hpp" {
// #include "UnicodeCharScanner.hpp"
// }
// Or....
// header {
// #include "UnicodeCharScanner.hpp"
// }


  #include "GPTDisplay.hpp"
  #include <string>
  #include <sstream>
  #include <iostream>
  #include <ctype.h>
  #include <antlr/TokenStreamSelector.hpp>
	#include "UnicodeCharBuffer.hpp"
	#include "UnicodeCharScanner.hpp"
  #include <stdlib.h>

  using namespace antlr;
  using namespace std;

class CUSTOM_API PortugolLexer : public UnicodeCharScanner, public PortugolTokenTypes
{

public:  
  PortugolLexer(ANTLR_USE_NAMESPACE(std)istream& in, TokenStreamSelector* s)
	: UnicodeCharScanner(new UnicodeCharBuffer(in),true),
    selector(s)
  {
    initLiterals();
  }

  void uponEOF()
  {
    if(!nextFilename.empty()) {
      GPTDisplay::self()->setCurrentFile(nextFilename);
      selector->pop();      
      selector->retry();
    }
  }

  void setNextFilename(string str) {
    nextFilename = str;
  }

private:
  string nextFilename;
  TokenStreamSelector* selector;  
  bool hasLatim;
private:
	void initLiterals();
public:
	bool getCaseSensitiveLiterals() const
	{
		return true;
	}
public:
	PortugolLexer(ANTLR_USE_NAMESPACE(std)istream& in);
	PortugolLexer(ANTLR_USE_NAMESPACE(antlr)InputBuffer& ib);
	PortugolLexer(const ANTLR_USE_NAMESPACE(antlr)LexerSharedInputState& state);
	ANTLR_USE_NAMESPACE(antlr)RefToken nextToken();
	public: void mT_BIT_OU(bool _createToken);
	public: void mT_BIT_XOU(bool _createToken);
	public: void mT_BIT_E(bool _createToken);
	public: void mT_BIT_NOT(bool _createToken);
	public: void mT_IGUAL(bool _createToken);
	public: void mT_DIFERENTE(bool _createToken);
	public: void mT_MAIOR(bool _createToken);
	public: void mT_MENOR(bool _createToken);
	public: void mT_MAIOR_EQ(bool _createToken);
	public: void mT_MENOR_EQ(bool _createToken);
	public: void mT_MAIS(bool _createToken);
	public: void mT_MENOS(bool _createToken);
	public: void mT_DIV(bool _createToken);
	public: void mT_MULTIP(bool _createToken);
	public: void mT_MOD(bool _createToken);
	public: void mT_ABREP(bool _createToken);
	public: void mT_FECHAP(bool _createToken);
	public: void mT_ABREC(bool _createToken);
	public: void mT_FECHAC(bool _createToken);
	public: void mT_INT_LIT(bool _createToken);
	protected: void mT_OCTAL_LIT(bool _createToken);
	protected: void mT_HEX_LIT(bool _createToken);
	protected: void mT_BIN_LIT(bool _createToken);
	protected: void mT_INTEGER_LIT(bool _createToken);
	protected: void mT_DIGIT(bool _createToken);
	protected: void mT_LETTER_OR_DIGIT(bool _createToken);
	public: void mT_CARAC_LIT(bool _createToken);
	protected: void mESC(bool _createToken);
	public: void mT_STRING_LIT(bool _createToken);
	public: void mT_ATTR(bool _createToken);
	public: void mT_SEMICOL(bool _createToken);
	public: void mT_COLON(bool _createToken);
	public: void mT_COMMA(bool _createToken);
	public: void mT_WS_(bool _createToken);
	public: void mSL_COMMENT(bool _createToken);
	public: void mML_COMMENT(bool _createToken);
	protected: void mT_ID_AUX(bool _createToken);
	protected: void mT_LETTER(bool _createToken);
	public: void mT_IDENTIFICADOR(bool _createToken);
	protected: void mT_INVALID(bool _createToken);
private:
	
	static const unsigned long _tokenSet_0_data_[];
	static const ANTLR_USE_NAMESPACE(antlr)BitSet _tokenSet_0;
	static const unsigned long _tokenSet_1_data_[];
	static const ANTLR_USE_NAMESPACE(antlr)BitSet _tokenSet_1;
	static const unsigned long _tokenSet_2_data_[];
	static const ANTLR_USE_NAMESPACE(antlr)BitSet _tokenSet_2;
	static const unsigned long _tokenSet_3_data_[];
	static const ANTLR_USE_NAMESPACE(antlr)BitSet _tokenSet_3;
	static const unsigned long _tokenSet_4_data_[];
	static const ANTLR_USE_NAMESPACE(antlr)BitSet _tokenSet_4;
};

#endif /*INC_PortugolLexer_hpp_*/
