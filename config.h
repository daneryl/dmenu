/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int border_width  = 5;        /* border pixel of windows */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"MesloLGM Nerd Font:size=14"
};

static const char col_black[]       = "#282c34";
static const char col_red[]         = "#E06C75";
static const char col_green[]       = "#98C379";
static const char col_blue[]        = "#61AFEF";
static const char col_magenta[]     = "#C678DD";
static const char col_gray[]        = "#ABB2BF";
static const char col_cyan[]        = "#282c34";

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_blue, col_black },
	[SchemeSel] = { col_magenta, col_cyan },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
