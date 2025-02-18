# $OpenBSD: Makefile,v 1.2 2019/02/08 10:29:24 sthen Exp $

COMMENT=	validating DNS resolver library

DISTNAME=	unbound-1.9.0
PKGNAME=	lib${DISTNAME}

SHARED_LIBS +=  unbound              4.1      # 9.0

CATEGORIES=	net

HOMEPAGE=	https://www.unbound.net/

MAINTAINER=	Stuart Henderson <sthen@openbsd.org>

# BSD
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += crypto event ssl

MASTER_SITES=	https://www.unbound.net/downloads/

SEPARATE_BUILD=	 Yes
CONFIGURE_STYLE= gnu

# in sync with src/usr.sbin/unbound, apart from --enable-allsymbols
CONFIGURE_ARGS+= \
		--enable-shared \
		--enable-static \
		--with-ssl=/usr \
		--with-libevent=/usr \
		--with-libexpat=/usr \
		--without-pthreads \
		--without-pythonmodule \
		--with-chroot-dir=/var/unbound \
		--with-pidfile="" \
		--with-rootkey-file=/var/unbound/db/root.key \
		--with-conf-file=/var/unbound/etc/unbound.conf \
		--with-username=_unbound

ALL_TARGET=	lib
INSTALL_TARGET=	install-lib

post-install:
	${INSTALL_DATA} ${WRKBUILD}/contrib/libunbound.pc ${PREFIX}/lib/

.include <bsd.port.mk>
