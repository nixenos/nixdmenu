#include <X11/Xresource.h>

void
readxresources(void)
{
	XrmInitialize();

	char* xrm;
	if ((xrm = XResourceManagerString(drw->dpy))) {
		char *type;
		XrmDatabase xdb = XrmGetStringDatabase(xrm);
		XrmValue xval;

		if (XrmGetResource(xdb, "dmenu.font", "*", &type, &xval))
			fonts[0] = strdup(xval.addr);
		else
			fonts[0] = strdup(fonts[0]);
		if (XrmGetResource(xdb, "dmenu.background", "*", &type, &xval))
			colors[SchemeNorm][ColBg] = strdup(xval.addr);
		else
			colors[SchemeNorm][ColBg] = strdup(colors[SchemeNorm][ColBg]);
		if (XrmGetResource(xdb, "dmenu.foreground", "*", &type, &xval))
			colors[SchemeNorm][ColFg] = strdup(xval.addr);
		else
			colors[SchemeNorm][ColFg] = strdup(colors[SchemeNorm][ColFg]);
		if (XrmGetResource(xdb, "dmenu.selbackground", "*", &type, &xval))
			colors[SchemeSel][ColBg] = strdup(xval.addr);
		else
			colors[SchemeSel][ColBg] = strdup(colors[SchemeSel][ColBg]);
		if (XrmGetResource(xdb, "dmenu.selforeground", "*", &type, &xval))
			colors[SchemeSel][ColFg] = strdup(xval.addr);
		else
			colors[SchemeSel][ColFg] = strdup(colors[SchemeSel][ColFg]);
		if (XrmGetResource(xdb, "dmenu.outbackground", "*", &type, &xval))
			colors[SchemeOut][ColBg] = strdup(xval.addr);
		else
			colors[SchemeOut][ColBg] = strdup(colors[SchemeOut][ColBg]);
		if (XrmGetResource(xdb, "dmenu.outforeground", "*", &type, &xval))
			colors[SchemeOut][ColFg] = strdup(xval.addr);
		else
			colors[SchemeOut][ColFg] = strdup(colors[SchemeOut][ColFg]);
		if (XrmGetResource(xdb, "dmenu.midbackground", "*", &type, &xval))
			colors[SchemeMid][ColBg] = strdup(xval.addr);
		else
			colors[SchemeMid][ColBg] = strdup(colors[SchemeMid][ColBg]);
		if (XrmGetResource(xdb, "dmenu.midforeground", "*", &type, &xval))
			colors[SchemeMid][ColFg] = strdup(xval.addr);
		else
			colors[SchemeMid][ColFg] = strdup(colors[SchemeMid][ColFg]);
		if (XrmGetResource(xdb, "dmenu.selhlbackground", "*", &type, &xval))
			colors[SchemeSelHighlight][ColBg] = strdup(xval.addr);
		else
			colors[SchemeSelHighlight][ColBg] = strdup(colors[SchemeSelHighlight][ColBg]);
		if (XrmGetResource(xdb, "dmenu.selhlforeground", "*", &type, &xval))
			colors[SchemeSelHighlight][ColFg] = strdup(xval.addr);
		else
			colors[SchemeSelHighlight][ColFg] = strdup(colors[SchemeSelHighlight][ColFg]);
		if (XrmGetResource(xdb, "dmenu.hlbackground", "*", &type, &xval))
			colors[SchemeNormHighlight][ColBg] = strdup(xval.addr);
		else
			colors[SchemeNormHighlight][ColBg] = strdup(colors[SchemeNormHighlight][ColBg]);
		if (XrmGetResource(xdb, "dmenu.hlforeground", "*", &type, &xval))
			colors[SchemeNormHighlight][ColFg] = strdup(xval.addr);
		else
			colors[SchemeNormHighlight][ColFg] = strdup(colors[SchemeNormHighlight][ColFg]);
		if (XrmGetResource(xdb, "dmenu.hpbackground", "*", &type, &xval))
			colors[SchemeHp][ColBg] = strdup(xval.addr);
		else
			colors[SchemeHp][ColBg] = strdup(colors[SchemeHp][ColBg]);
		if (XrmGetResource(xdb, "dmenu.hpforeground", "*", &type, &xval))
			colors[SchemeHp][ColFg] = strdup(xval.addr);
		else
			colors[SchemeHp][ColFg] = strdup(colors[SchemeHp][ColFg]);
		XrmDestroyDatabase(xdb);
	}
}
