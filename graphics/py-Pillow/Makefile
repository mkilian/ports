# $OpenBSD: Makefile,v 1.26 2019/01/16 22:30:29 sthen Exp $

COMMENT=		Python Imaging Library (maintained fork of PIL)

MODPY_EGG_VERSION=	5.4.1
DISTNAME=		Pillow-${MODPY_EGG_VERSION}
PKGNAME=		py-${DISTNAME}
CATEGORIES=		graphics

HOMEPAGE=		http://python-pillow.org/

# PIL Software License
# Permission to use, copy, modify and distribute freely.
PERMIT_PACKAGE_CDROM=   Yes

FLAVORS=		python3
FLAVOR?=

MODPY_PI =		Yes

WANTLIB=		freetype openjp2 jpeg lcms2 pthread tiff webp z \
			webpdemux webpmux \
			${MODPY_WANTLIB}

MODULES=		lang/python

TEST_DEPENDS=		${FULLPKGNAME}:${BUILD_PKGPATH} \
			devel/py-nose${MODPY_FLAVOR}
RUN_DEPENDS=		${MODPY_RUN_DEPENDS}

LIB_DEPENDS=		graphics/lcms2 \
			graphics/openjp2>=2.3.0p0 \
			graphics/libwebp

MODPY_SETUPTOOLS=	Yes

SUBST_VARS+=		INCL_DIR MODPY_FLAVOR
INCL_DIR=		${MODPY_INCDIR:S/${LOCALBASE}\///}

post-install:
	${INSTALL_DATA_DIR} ${WRKINST}${MODPY_INCDIR}
	${INSTALL_DATA} ${WRKSRC}/src/libImaging/{ImPlatform,Imaging}.h ${WRKINST}${MODPY_INCDIR}

do-test:
	cd ${WRKSRC}; ${MODPY_BIN} ./selftest.py --installed

.include <bsd.port.mk>
