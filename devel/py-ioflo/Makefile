# $OpenBSD: Makefile,v 1.27 2018/09/22 08:26:00 jasper Exp $

COMMENT=		automated reasoning engine, flow based programming framework

MODPY_EGG_VERSION=	1.7.5
DISTNAME=		ioflo-${MODPY_EGG_VERSION}
PKGNAME=		py-${DISTNAME}

CATEGORIES=		devel

HOMEPAGE=		https://github.com/ioflo/ioflo

MAINTAINER=		Jasper Lievisse Adriaanse <jasper@openbsd.org>

# Apache 2.0
PERMIT_PACKAGE_CDROM=	Yes

MODULES=		lang/python

MODPY_PI=		Yes
MODPY_SETUPTOOLS=	Yes

FLAVORS=		python3
FLAVOR?=

BUILD_DEPENDS=		devel/py-setuptools_git${MODPY_FLAVOR}

.include <bsd.port.mk>
