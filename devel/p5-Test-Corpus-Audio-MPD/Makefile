# $OpenBSD: Makefile,v 1.8 2019/02/22 21:12:19 cwen Exp $

COMMENT=	automate launching of fake mpd for testing purposes

DISTNAME=	Test-Corpus-Audio-MPD-1.120990
CATEGORIES=	devel audio

# perl
PERMIT_PACKAGE_CDROM=	Yes

MODULES=		cpan
PKG_ARCH=		*

CONFIGURE_STYLE=	modbuild

RUN_DEPENDS=		devel/p5-File-ShareDir>=1.0 \
			devel/p5-File-ShareDir-PathClass \
			devel/p5-Path-Class \
			devel/p5-Readonly

MAKE_ENV +=		TEST_POD=Yes RELEASE_TESTING=Yes


.include <bsd.port.mk>
