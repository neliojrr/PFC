#ifndef INC_PortugolParser_hpp_
#define INC_PortugolParser_hpp_

#include <antlr/config.hpp>
/* $ANTLR 2.7.7 (2006-11-01): "parser.g" -> "PortugolParser.hpp"$ */
#include <antlr/TokenStream.hpp>
#include <antlr/TokenBuffer.hpp>
#include "PortugolParserTokenTypes.hpp"

// Include correct superclass header with a header statement for example:
// header "post_include_hpp" {
// #include "BasePortugolParser.hpp"
// }
// Or....
// header {
// #include "BasePortugolParser.hpp"
// }



  #include "BasePortugolParser.hpp"
  #include "PortugolAST.hpp"
  #include "GPTDisplay.hpp"

class CUSTOM_API PortugolParser : public BasePortugolParser, public PortugolParserTokenTypes
{
  
  public:
    RefPortugolAST getPortugolAST()
    {
      return returnAST;
    }
public:
	void initializeASTFactory( ANTLR_USE_NAMESPACE(antlr)ASTFactory& factory );
protected:
	PortugolParser(ANTLR_USE_NAMESPACE(antlr)TokenBuffer& tokenBuf, int k);
public:
	PortugolParser(ANTLR_USE_NAMESPACE(antlr)TokenBuffer& tokenBuf);
protected:
	PortugolParser(ANTLR_USE_NAMESPACE(antlr)TokenStream& lexer, int k);
public:
	PortugolParser(ANTLR_USE_NAMESPACE(antlr)TokenStream& lexer);
	PortugolParser(const ANTLR_USE_NAMESPACE(antlr)ParserSharedInputState& state);
	int getNumTokens() const
	{
		return PortugolParser::NUM_TOKENS;
	}
	const char* getTokenName( int type ) const
	{
		if( type > getNumTokens() ) return 0;
		return PortugolParser::tokenNames[type];
	}
	const char* const* getTokenNames() const
	{
		return PortugolParser::tokenNames;
	}
	public: void algoritmo();
	public: void declaracao_algoritmo();
	public: void var_decl_block();
	public: void stm_block();
	public: void func_decls();
	public: void var_decl();
	public: void var_more();
	public: void tp_prim();
	public: void tp_matriz();
	public: void dimensoes();
	public: void tp_prim_pl();
	public: void stm_list();
	public: void lvalue();
	public: void stm_attr();
	public: void fcall();
	public: void stm_ret();
	public: void stm_se();
	public: void stm_enquanto();
	public: void stm_repita();
	public: void stm_para();
	public: void expr();
	public: void array_sub();
	public: void passo();
	public: void expr_e();
	public: void expr_bit_ou();
	public: void expr_bit_xou();
	public: void expr_bit_e();
	public: void expr_igual();
	public: void expr_relacional();
	public: void expr_ad();
	public: void expr_multip();
	public: void expr_unario();
	public: void op_unario();
	public: void expr_elemento();
	public: void literal();
	public: void fargs();
	public: void fparams();
	public: void rettype();
	public: void fvar_decl();
	public: void fffvar_decl();
	public: void fparam();
public:
	ANTLR_USE_NAMESPACE(antlr)RefAST getAST()
	{
		return ANTLR_USE_NAMESPACE(antlr)RefAST(returnAST);
	}
	
protected:
	RefPortugolAST returnAST;
private:
	static const char* tokenNames[];
#ifndef NO_STATIC_CONSTS
	static const int NUM_TOKENS = 91;
#else
	enum {
		NUM_TOKENS = 91
	};
#endif
	
	static const unsigned long _tokenSet_0_data_[];
	static const ANTLR_USE_NAMESPACE(antlr)BitSet _tokenSet_0;
	static const unsigned long _tokenSet_1_data_[];
	static const ANTLR_USE_NAMESPACE(antlr)BitSet _tokenSet_1;
};

#endif /*INC_PortugolParser_hpp_*/
