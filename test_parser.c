#include	<stdio.h>
#include	"define.h"
#include	"scanner.h"
#include	"parser.h"

main(void)
{
	scanner_init(stdin);
	parser_init();

	parser_parse_program();
}
