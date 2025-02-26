# $OpenBSD: Makefile,v 1.12 2019/02/19 23:40:49 sthen Exp $

COMMENT =		visual novel engine

V =			6.17.7
MODPY_EGG_VERSION =	${V}.521
DISTNAME =		renpy-${V}-source
PKGNAME =		${DISTNAME:S/-source//}
REVISION =		2

CATEGORIES =		games

HOMEPAGE =		http://www.renpy.org/

# mostly MIT, some files LGPLv2.1+
PERMIT_PACKAGE_CDROM =		Yes

WANTLIB +=		GLEW SDL avcodec avformat avresample avutil freetype
WANTLIB +=		m png pthread swscale z ${MODPY_WANTLIB}

MASTER_SITES =		http://www.renpy.org/dl/${V}/
EXTRACT_SUFX =		.tar.bz2

MODULES =		lang/python

BUILD_DEPENDS =		devel/pygame \
			lang/cython

RUN_DEPENDS =		devel/pygame \
			x11/gnome/zenity

# XXX enable fribidi support
LIB_DEPENDS =		graphics/ffmpeg \
			graphics/glew

MAKE_ENV =		RENPY_DEPS_INSTALL=/usr::${LOCALBASE}::${X11BASE}

NO_TEST =		Yes

WRKSRC =		${WRKDIST}/module

# XXX not needed in newer releases
MODPY_ADJ_FILES =	../renpy.py

pre-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/renpy
	cd ${WRKDIST} && \
	cp -r launcher renpy templates the_question tutorial LICENSE.txt \
		${PREFIX}/share/renpy
	${INSTALL_SCRIPT} ${WRKDIST}/renpy.py ${PREFIX}/share/renpy
	${SUBST_PROGRAM} ${FILESDIR}/renpy ${PREFIX}/bin/renpy

.include <bsd.port.mk>
