/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom */
static int fuzzy = 1;                       /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int incremental = 0;                 /* -r  option; if 1, outputs text each time a key is pressed */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char *fonts[] =
{
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */


static
char *colors[][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { "#A4B9EF", "#1B1923" },
	[SchemeSel]  = { "#B3E1A3", "#1B1923" },
	[SchemeOut]  = { "#B3E1A3", "#1B1923" },
	[SchemeMid]  = { "#A4B9EF", "#1B1923" },
	[SchemeSelHighlight]  = { "#F7C196", "#1B1923" },
	[SchemeNormHighlight] = { "#ECBFBD", "#1B1923" },
	[SchemeHp]   = { "#bbbbbb", "#333333" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";


