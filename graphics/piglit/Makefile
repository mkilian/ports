# $OpenBSD: Makefile,v 1.6 2019/02/19 22:42:42 jsg Exp $

COMMENT =	automated OpenGL and OpenCL testsuite
ONLY_FOR_ARCHS =	amd64 i386

DISTNAME =	piglit-20190208
REVISION =	0

GH_ACCOUNT =	mesa3d
GH_PROJECT =	piglit
GH_COMMIT =	5d4935e2378a5f3b950bfcbcb6c396ad7e882952

CATEGORIES =	graphics

# 3Dlabs: redistribution and use permitted, no comment on selling
# Intel CUSTOM LICENSE - no limitation to use, distribute, or sell
# MIT GPLv2+ GPLv3 LGPL20
PERMIT_PACKAGE_CDROM =	No comment on selling by 3Dlabs license
PERMIT_PACKAGE_FTP =	Yes

WANTLIB += ${COMPILER_LIBCXX} EGL GL X11 Xrender c drm drm_intel gbm
WANTLIB += m xcb xcb-dri2 z
WANTLIB += png16 waffle-1

COMPILER =		base-clang ports-gcc base-gcc

MODULES =		devel/cmake \
			lang/python

MODPY_VERSION =		${MODPY_DEFAULT_VERSION_2}

RUN_DEPENDS =		devel/py-six \
			devel/py-subprocess32 \
			math/py-numpy \
			www/py-mako
BUILD_DEPENDS =		${RUN_DEPENDS}

LIB_DEPENDS =		graphics/waffle \
			graphics/png

CONFIGURE_ARGS =	-DPIGLIT_BUILD_CL_TESTS:BOOL=OFF \
			-DCMAKE_POLICY_DEFAULT_CMP0056:STRING=NEW \
			-DHAVE_LIBCACA:BOOL=FALSE
CONFIGURE_ENV =		CFLAGS="-I${X11BASE}/include"

NO_TEST =		Yes

post-install:
	${MODPY_BIN} ${MODPY_LIBDIR}/compileall.py ${PREFIX}/lib/piglit

.include <bsd.port.mk>
