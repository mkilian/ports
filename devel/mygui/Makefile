# $OpenBSD: Makefile,v 1.7 2018/10/24 14:28:00 sthen Exp $

COMMENT =		library for creating GUIs for games and 3D applications

V = 			3.2.2
GH_ACCOUNT = 		MyGUI
GH_PROJECT = 		mygui
GH_TAGNAME = 		MyGUI${V}
DISTNAME = 		mygui-${V}
REVISION =              2

SHARED_LIBS +=		MyGUIEngine 0.0
SHARED_LIBS +=		MyGUI.OgrePlatform 0.0

CATEGORIES =		devel x11

HOMEPAGE =		http://mygui.info/

MAINTAINER =		Kirill Bychkov <kirby@openbsd.org>

# LGPLv3
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += OgreMain boost_atomic-mt boost_chrono-mt boost_date_time-mt
WANTLIB += boost_system-mt boost_thread-mt freetype m pthread ${COMPILER_LIBCXX}

COMPILER =		base-clang ports-gcc base-gcc

MODULES =		devel/cmake
BUILD_DEPENDS =		devel/ois
LIB_DEPENDS =		x11/ogre,-main

CONFIGURE_ARGS += 	-DCMAKE_CXX_FLAGS="${CXXFLAGS} -fPIC" \
			-DMYGUI_BUILD_TOOLS=false \
			-DMYGUI_BUILD_PLUGINS=false

NO_TEST =		Yes

post-extract:
	rm ${WRKSRC}/CMake/Packages/FindFreetype.cmake

pre-configure:
	${SUBST_CMD} ${WRKSRC}/Common/Base/Ogre/BaseManager.cpp

.include <bsd.port.mk>
