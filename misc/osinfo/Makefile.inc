# $OpenBSD: Makefile.inc,v 1.6 2019/01/31 20:06:12 ajacoutot Exp $

V ?=			1.3.0

CATEGORIES=		misc devel

MAINTAINER=		Antoine Jacoutot <ajacoutot@openbsd.org>

HOMEPAGE=		http://libosinfo.org/

# LGPLv2+
PERMIT_PACKAGE_CDROM=	Yes

MASTER_SITES=		https://releases.pagure.org/libosinfo/

USE_GMAKE ?=		Yes

CONFIGURE_STYLE ?=	gnu
