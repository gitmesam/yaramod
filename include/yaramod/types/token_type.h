/**
 * @file src/types/token_type.h
 * @brief Declaration of enum TokenType.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

#pragma once

namespace yaramod {
/**
 * Represents type of parsed tokens.
 */
enum TokenType
{
	RULE_NAME,
	TAG,
	HEX_ALT, // '|'
	HEX_NIBBLE,
	HEX_WILDCARD,
	HEX_WILDCARD_LOW,
	HEX_WILDCARD_HIGH,
	HEX_JUMP_LEFT_BRACKET, // '['
	HEX_JUMP_RIGHT_BRACKET, // ']'
	HEX_ALT_LEFT_BRACKET, // '('
	HEX_ALT_RIGHT_BRACKET, // ')'
	HEX_JUMP_FIXED,
	HEX_START_BRACKET, // '{'
	HEX_END_BRACKET, // '}'
	NEW_LINE,
	META, // 'meta'
	LQUOTE,
	RQUOTE,
	RULE_END, // '}'
	RULE_BEGIN, // '{'
	RANGE,
	DOT,
	DOUBLE_DOT,
	LT,
	GT,
	LE,
	GE,
	EQ,
	NEQ,
	SHIFT_LEFT,
	SHIFT_RIGHT,
	MINUS,
	PLUS,
	MULTIPLY,
	DIVIDE,
	MODULO,
	BITWISE_XOR,
	BITWISE_AND,
	BITWISE_OR,
	BITWISE_NOT,
	LP,
	RP,
	LCB, // '{'
	RCB, // '}'
	ASSIGN,
	COLON,
	COLON_BEFORE_NEWLINE,
	COMMA,
	PRIVATE,
	GLOBAL,
	NONE,
	RULE,
	STRINGS,
	CONDITION,
	ASCII,
	NOCASE,
	WIDE,
	FULLWORD,
	PRIVATE_STRING_MODIFIER,
	XOR,
	IMPORT_MODULE,
	IMPORT_KEYWORD,
	NOT,
	AND,
	OR,
	ALL,
	ANY,
	OF,
	THEM,
	FOR,
	ENTRYPOINT,
	OP_AT,
	OP_IN,
	FILESIZE,
	CONTAINS,
	MATCHES,
	SLASH,
	STRING_LITERAL,
	INTEGER,
	DOUBLE,
	STRING_ID,
	STRING_ID_AFTER_NEWLINE,
	STRING_ID_WILDCARD,
	STRING_LENGTH,
	STRING_OFFSET,
	STRING_COUNT,
	ID,
	INTEGER_FUNCTION,
	LSQB, // '['
	RSQB, // ']'
	DASH, // '-'
	REGEXP_OR,
	REGEXP_ITER,
	REGEXP_PITER,
	REGEXP_OPTIONAL,
	REGEXP_START_SLASH,
	REGEXP_END_SLASH,
	REGEXP_CHAR,
	REGEXP_RANGE,
	REGEXP_TEXT,
	REGEXP_CLASS_NEGATIVE,
	REGEXP_MODIFIERS,
	REGEXP_GREEDY,
	UNARY_MINUS,
	META_KEY,
	META_VALUE,
	STRING_KEY,
	VALUE_SYMBOL,
	FUNCTION_SYMBOL,
	ARRAY_SYMBOL,
	DICTIONARY_SYMBOL,
	STRUCTURE_SYMBOL,
	LP_ENUMERATION,
	RP_ENUMERATION,
	LP_WITH_SPACE_AFTER,
	RP_WITH_SPACE_BEFORE,
	LP_WITH_SPACES,
	RP_WITH_SPACES,
	BOOL_TRUE,
	BOOL_FALSE,
	ONELINE_COMMENT,
	COMMENT,
	INCLUDE_DIRECTIVE,
	INCLUDE_PATH,
	FUNCTION_CALL_LP,
	FUNCTION_CALL_RP,
	INVALID,
};

} //namespace yaramod